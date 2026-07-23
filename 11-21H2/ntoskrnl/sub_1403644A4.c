/*
 * XREFs of sub_1403644A4 @ 0x1403644A4
 * Callers:
 *     sub_14036DC90 @ 0x14036DC90 (sub_14036DC90.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403645A4 @ 0x1403645A4 (sub_1403645A4.c)
 *     sub_140364760 @ 0x140364760 (sub_140364760.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1403644A4(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  unsigned __int8 v7; // si
  _QWORD *v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax

  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v7 = -1;
  else
    v7 = sub_140364760(a1 + 72, *(unsigned __int8 *)(a1 + 57), a3, a4);
  v8 = (_QWORD *)(a1 + 128);
  v9 = 129LL;
  do
  {
    v10 = (_QWORD *)*v8;
    if ( (*v8 & 1) == 0 )
      LOBYTE(v10) = sub_1403645A4(a1, *v8, a2 | 1u);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( !v6 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v12 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v12 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      LOBYTE(v10) = v7;
      __writecr8(v7);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      LOBYTE(v10) = sub_1402AFC00(a1 + 72);
      CurrentThread = KeGetCurrentThread();
      v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v12 )
      {
        v10 = (_QWORD *)((char *)CurrentThread + 152);
        if ( (_QWORD *)*v10 != v10 )
          LOBYTE(v10) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v10;
}

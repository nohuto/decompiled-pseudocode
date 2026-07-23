/*
 * XREFs of sub_1403645A4 @ 0x1403645A4
 * Callers:
 *     sub_1403644A4 @ 0x1403644A4 (sub_1403644A4.c)
 *     sub_1403645A4 @ 0x1403645A4 (sub_1403645A4.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403645A4 @ 0x1403645A4 (sub_1403645A4.c)
 *     sub_140364760 @ 0x140364760 (sub_140364760.c)
 *     sub_1403650F0 @ 0x1403650F0 (sub_1403650F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1403645A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  _QWORD **v7; // rdi
  volatile LONG *v8; // rbx
  unsigned __int8 v9; // al
  _QWORD *v10; // r14
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  bool v16; // zf
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9

  v4 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v13 = 0LL;
    v14 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      sub_1403645A4(a1, *(_QWORD *)(*(_QWORD *)(a2 + 96) + v13), v4);
      v13 += 8LL;
      --v14;
    }
    while ( v14 );
  }
  v7 = (_QWORD **)(a2 + 24);
  if ( *v7 != v7 || (v12 = (_QWORD *)(a2 + 40), (_QWORD *)*v12 != v12) )
  {
    v8 = (volatile LONG *)(a2 + 16);
    v9 = sub_140364760(v8, *(unsigned __int8 *)(a1 + 57), a3, a4);
    v10 = *v7;
    v11 = v9;
    while ( v10 != v7 )
    {
      sub_1403650F0(a1, (_DWORD)v10, -1, 1, v4);
      v10 = (_QWORD *)*v10;
    }
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v8);
      LOBYTE(v12) = dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          LOBYTE(v12) = KeGetCurrentIrql();
          if ( (unsigned __int8)v12 <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)v12 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            LODWORD(v12) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v16 = ((unsigned int)v12 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= (unsigned int)v12;
            if ( v16 )
              LOBYTE(v12) = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v8);
      LOBYTE(v12) = sub_1402AFC00((ULONG_PTR)v8);
      CurrentThread = KeGetCurrentThread();
      v16 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v16 )
      {
        v12 = (_QWORD *)((char *)CurrentThread + 152);
        if ( (_QWORD *)*v12 != v12 )
          LOBYTE(v12) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v12;
}

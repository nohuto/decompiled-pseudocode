/*
 * XREFs of sub_14022C984 @ 0x14022C984
 * Callers:
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022C984(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  volatile LONG *v7; // rcx
  _QWORD *v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  bool v12; // zf
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9

  v2 = *(_DWORD *)(a2 + 8);
  sub_1402AFC00(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = sub_140287B04(a1, *(unsigned int *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = (_QWORD *)v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v10 = (_QWORD *)*v8;
      if ( v8 != (_QWORD *)a2 )
        result = sub_14024B0B4(v8 + 2);
      v8 = v10;
    }
    while ( v10 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 != 16 )
    return sub_1402AC800(CurrentThread);
  v12 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v12 )
  {
    result = (__int64)CurrentThread + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}

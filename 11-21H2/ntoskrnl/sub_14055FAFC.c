/*
 * XREFs of sub_14055FAFC @ 0x14055FAFC
 * Callers:
 *     IoTestDependency @ 0x14055F7F0 (IoTestDependency.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14055FA74 @ 0x14055FA74 (sub_14055FA74.c)
 */

__int64 __fastcall sub_14055FAFC(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // ebp
  unsigned __int64 v9; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf
  _DWORD v14[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v14[0] = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C46AA0);
  sub_14055FA74(a1, a2, v14, a4);
  KeReleaseSpinLockFromDpcLevel(&qword_140C46AA0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= result;
        if ( v13 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v14[0] )
  {
    LOBYTE(v5) = v14[0] != 1;
    ++v5;
  }
  *a3 = v5;
  return result;
}

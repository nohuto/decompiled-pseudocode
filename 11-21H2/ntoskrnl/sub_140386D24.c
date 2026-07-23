/*
 * XREFs of sub_140386D24 @ 0x140386D24
 * Callers:
 *     sub_14024FDF0 @ 0x14024FDF0 (sub_14024FDF0.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140386D24(__int64 a1, ULONG a2, unsigned int a3)
{
  volatile LONG *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  bool v12; // zf

  v3 = (volatile LONG *)(a1 + 232);
  v4 = a3;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), a2, v4);
  v8 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 200) -= v4;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), a2, v4);
  *(_QWORD *)(a1 + 24) += v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= result;
        if ( v12 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}

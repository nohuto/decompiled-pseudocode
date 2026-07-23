/*
 * XREFs of sub_1403BA794 @ 0x1403BA794
 * Callers:
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403BA794(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  int v6; // edx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  if ( a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFF7);
    *(_WORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_BYTE *)(a1 + 98) = 6;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFB);
  }
  v5 = *(_DWORD *)(a1 + 124);
  v6 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 120) = v6 - v5;
  *(_QWORD *)(a1 + 80) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}

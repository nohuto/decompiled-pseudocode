/*
 * XREFs of sub_14025F440 @ 0x14025F440
 * Callers:
 *     sub_14025F344 @ 0x14025F344 (sub_14025F344.c)
 * Callees:
 *     sub_1402829A8 @ 0x1402829A8 (sub_1402829A8.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025F440(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v1 = a1 + 1664;
  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1160));
  v4 = sub_1402829A8(v1);
  *(_QWORD *)(sub_140282AD0(v5) + 24) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1160));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v4;
}

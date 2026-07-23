/*
 * XREFs of sub_1405EE4E0 @ 0x1405EE4E0
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405EDE20 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405EE040 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405EE110 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1405EE1A0 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1405EE1C0 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405EE4E0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf

  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
    v1 = *(unsigned __int8 *)(a1 + 40);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 56));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = *((_QWORD *)CurrentPrcb + 4375);
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
          *(_DWORD *)(v4 + 20) &= v5;
          if ( v6 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v1);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 56));
  }
  return 1;
}

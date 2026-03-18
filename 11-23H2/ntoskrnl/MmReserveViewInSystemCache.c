/*
 * XREFs of MmReserveViewInSystemCache @ 0x140843700
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403A0810 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x140537E10 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x14029FE90 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1);
  if ( !result )
    ++dword_140C6A220;
  return result;
}

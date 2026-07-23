/*
 * XREFs of MmReserveViewInSystemCache @ 0x140843A00
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403A09F0 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x140538360 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1402A0120 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 result; // rax

  result = MiObtainSystemCacheView(*a1);
  if ( !result )
    ++dword_140C6A220;
  return result;
}

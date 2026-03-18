/*
 * XREFs of ExpOwnerEntryToThread @ 0x1402A8A68
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1403187C0 (ExReinitializeResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x140AAAE28 (ExQuerySystemLockInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpOwnerEntryToThread(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  if ( (a1[1] & 2) != 0 )
    return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v1 = *a1;
  result = 0LL;
  if ( (v1 & 3) == 0 )
    return v1;
  return result;
}

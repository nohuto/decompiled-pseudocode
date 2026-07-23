/*
 * XREFs of CmpIsKeyBodyEligibleForDump @ 0x140AF5AE0
 * Callers:
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpIsKeyBodyEligibleForDump(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 32) == CmpMasterHive )
    return 3221225506LL;
  result = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( (int)result >= 0 )
    return (*(_DWORD *)(a2 + 184) & 0x40000) == 0 ? 0xC000000D : 0;
  return result;
}

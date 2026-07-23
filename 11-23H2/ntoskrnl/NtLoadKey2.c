/*
 * XREFs of NtLoadKey2 @ 0x1408754D0
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKey2(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile, ULONG Flags)
{
  return CmLoadDifferencingKey(
           (__int64)TargetKey,
           (__int64)SourceFile,
           Flags,
           0LL,
           0LL,
           0,
           0LL,
           0,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}

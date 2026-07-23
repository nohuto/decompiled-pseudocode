/*
 * XREFs of NtLoadKey @ 0x140865910
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x140691020 (NtLoadKeyEx.c)
 */

NTSTATUS __cdecl NtLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  return NtLoadKeyEx(TargetKey, SourceFile, 0, 0LL, 0LL, 0, 0LL, 0LL);
}

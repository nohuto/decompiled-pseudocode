/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1407F15D0
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x1407F1610 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1)
{
  return ObpCreateDirectoryObject(a1);
}

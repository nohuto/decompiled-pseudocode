/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1800B0D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}

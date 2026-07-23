/*
 * XREFs of HvViewMapContainsLockedPages @ 0x140751414
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 4) != 0;
}

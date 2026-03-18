/*
 * XREFs of IsPci3MsiInterrupt @ 0x1C000C274
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x1C000CE8C (NVMeControllerFilterResourceRequirements.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPci3MsiInterrupt(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) == 2
      && (*(_BYTE *)(a1 + 4) & 3) != 0
      && *(_DWORD *)(a1 + 8) == -2
      && *(_DWORD *)(a1 + 12) == -2;
}

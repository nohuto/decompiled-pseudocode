/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1405FBBA0
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140AE41A0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}

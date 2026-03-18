/*
 * XREFs of PsIsSystemProcess @ 0x1402A67F0
 * Callers:
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 2172) & 0x1000) != 0;
}

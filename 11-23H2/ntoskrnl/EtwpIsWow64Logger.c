/*
 * XREFs of EtwpIsWow64Logger @ 0x1407F7A8C
 * Callers:
 *     EtwpFinalizeHeader @ 0x1407F5E38 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1407F7574 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}

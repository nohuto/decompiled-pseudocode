/*
 * XREFs of MiVadBitToUserVa @ 0x1406FB708
 * Callers:
 *     MiClearVadCellBits @ 0x14028AAD0 (MiClearVadCellBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadBitToUserVa(__int64 a1, __int64 a2)
{
  return (a2 + 8 * (*(_QWORD *)(a1 + 8) - qword_140C67068)) << 16;
}

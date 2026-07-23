/*
 * XREFs of sub_1402D3D0C @ 0x1402D3D0C
 * Callers:
 *     sub_14074ECA8 @ 0x14074ECA8 (sub_14074ECA8.c)
 * Callees:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 */

__int64 __fastcall sub_1402D3D0C(__int64 a1)
{
  return ExSetTimer(*(_QWORD *)(a1 + 56));
}

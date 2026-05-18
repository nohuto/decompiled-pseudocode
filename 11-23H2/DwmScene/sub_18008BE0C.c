/*
 * XREFs of sub_18008BE0C @ 0x18008BE0C
 * Callers:
 *     sub_180052EE0 @ 0x180052EE0 (sub_180052EE0.c)
 *     sub_1800D3A98 @ 0x1800D3A98 (sub_1800D3A98.c)
 * Callees:
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

__int64 __fastcall sub_18008BE0C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  sub_18007E7DC((__int64)(a1 + 14));
  return sub_1800280AC((__int64)a1);
}

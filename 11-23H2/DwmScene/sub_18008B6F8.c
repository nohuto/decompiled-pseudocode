/*
 * XREFs of sub_18008B6F8 @ 0x18008B6F8
 * Callers:
 *     sub_18008B6BC @ 0x18008B6BC (sub_18008B6BC.c)
 *     sub_1800D7140 @ 0x1800D7140 (sub_1800D7140.c)
 * Callees:
 *     sub_180029178 @ 0x180029178 (sub_180029178.c)
 */

__int64 __fastcall sub_18008B6F8(__int64 a1)
{
  sub_180029178((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  return a1;
}

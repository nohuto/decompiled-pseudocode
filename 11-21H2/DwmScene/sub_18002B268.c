/*
 * XREFs of sub_18002B268 @ 0x18002B268
 * Callers:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 *     sub_18003D138 @ 0x18003D138 (sub_18003D138.c)
 *     sub_18005BB68 @ 0x18005BB68 (sub_18005BB68.c)
 *     sub_180099174 @ 0x180099174 (sub_180099174.c)
 *     sub_1800991AC @ 0x1800991AC (sub_1800991AC.c)
 *     sub_18009A6AC @ 0x18009A6AC (sub_18009A6AC.c)
 *     sub_18009AB04 @ 0x18009AB04 (sub_18009AB04.c)
 *     sub_1800EC79C @ 0x1800EC79C (sub_1800EC79C.c)
 *     sub_1800FED2C @ 0x1800FED2C (sub_1800FED2C.c)
 * Callees:
 *     sub_18002B2A0 @ 0x18002B2A0 (sub_18002B2A0.c)
 */

__int64 __fastcall sub_18002B268(__int64 a1)
{
  __int64 result; // rax

  sub_18002B2A0();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}

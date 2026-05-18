/*
 * XREFs of sub_18005C83C @ 0x18005C83C
 * Callers:
 *     sub_1800598E4 @ 0x1800598E4 (sub_1800598E4.c)
 *     sub_1800E34B8 @ 0x1800E34B8 (sub_1800E34B8.c)
 * Callees:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 */

__int64 __fastcall sub_18005C83C(__int64 a1)
{
  __int64 result; // rax

  sub_18002B240((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = a1;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  return result;
}

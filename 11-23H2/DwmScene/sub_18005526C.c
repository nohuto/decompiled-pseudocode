/*
 * XREFs of sub_18005526C @ 0x18005526C
 * Callers:
 *     sub_180052A50 @ 0x180052A50 (sub_180052A50.c)
 *     sub_1800CCA1C @ 0x1800CCA1C (sub_1800CCA1C.c)
 * Callees:
 *     sub_180029178 @ 0x180029178 (sub_180029178.c)
 */

__int64 __fastcall sub_18005526C(__int64 a1)
{
  __int64 result; // rax

  sub_180029178((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 15LL;
  *(_BYTE *)(a1 + 120) = 0;
  result = a1;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  return result;
}

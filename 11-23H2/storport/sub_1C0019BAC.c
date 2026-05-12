/*
 * XREFs of sub_1C0019BAC @ 0x1C0019BAC
 * Callers:
 *     sub_1C0019498 @ 0x1C0019498 (sub_1C0019498.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C00A1244 @ 0x1C00A1244 (sub_1C00A1244.c)
 */

__int64 __fastcall sub_1C0019BAC(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0xE00uLL);
  *a1 = 1431193940;
  sub_1C00A1244(a1 + 128);
  *((_BYTE *)a1 + 500) = 0;
  *((_QWORD *)a1 + 61) = 1LL;
  a1[24] = -1;
  result = 134684677LL;
  a1[340] = 134684677;
  a1[360] = 134684677;
  a1[380] = 134684677;
  a1[400] = 134684677;
  a1[420] = 134684677;
  *(_QWORD *)(a1 + 123) = 1LL;
  a1[330] = 10;
  return result;
}

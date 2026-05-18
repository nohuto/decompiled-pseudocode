/*
 * XREFs of sub_180081E6C @ 0x180081E6C
 * Callers:
 *     sub_18004E4E8 @ 0x18004E4E8 (sub_18004E4E8.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180081D60 @ 0x180081D60 (sub_180081D60.c)
 */

__int64 __fastcall sub_180081E6C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // r9

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  sub_18001246C((_QWORD *)(a1 + 1152), a2);
  *(_QWORD *)(a1 + 1168) = v4;
  *(_QWORD *)(a1 + 1176) = v4;
  *(_QWORD *)(a1 + 1184) = v4;
  *(_QWORD *)(a1 + 1192) = v4;
  *(_QWORD *)(a1 + 1200) = v4;
  *(_QWORD *)(a1 + 1208) = v4;
  *(_QWORD *)(a1 + 1216) = v4;
  *(_QWORD *)(a1 + 1224) = v4;
  *(_QWORD *)(a1 + 1232) = v4;
  *(_WORD *)(a1 + 1240) = v4;
  *(_BYTE *)(a1 + 1242) = v4;
  sub_180081D60();
  return a1;
}

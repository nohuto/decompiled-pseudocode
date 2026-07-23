/*
 * XREFs of sub_1407D9070 @ 0x1407D9070
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407DBAC0 @ 0x1407DBAC0 (sub_1407DBAC0.c)
 */

__int64 __fastcall sub_1407D9070(_DWORD *a1)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int v5; // edi

  v2 = a1[11];
  v3 = a1[8] - (_DWORD)a1;
  v4 = a1[10];
  v5 = a1[6] - (_DWORD)a1;
  memset(a1, 0, 0x40uLL);
  a1[4] = 852013;
  a1[8] = 3;
  a1[6] = v5 - 16;
  a1[5] = 1128485697;
  a1[7] = 1;
  a1[9] = HIDWORD(xmmword_140C4EC70);
  a1[10] = dword_140C4EC84;
  a1[12] = v4;
  a1[13] = v3;
  a1[11] = 32;
  a1[14] = v2;
  return sub_1407DBAC0(a1);
}

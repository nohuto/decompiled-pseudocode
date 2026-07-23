/*
 * XREFs of sub_1409BD018 @ 0x1409BD018
 * Callers:
 *     sub_1405ED0E8 @ 0x1405ED0E8 (sub_1405ED0E8.c)
 *     sub_1405ED45C @ 0x1405ED45C (sub_1405ED45C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409BD018(__int64 a1, int a2, _BYTE *a3, _BYTE *a4)
{
  char v4; // al
  char v5; // cl
  char result; // al

  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                + *(_QWORD *)(a1 + 40)
                - 128);
  v5 = v4 & 0x3F;
  result = v4 & 0xC0;
  *a3 = v5;
  *a4 = result;
  return result;
}

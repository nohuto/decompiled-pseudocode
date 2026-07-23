/*
 * XREFs of sub_1403A8868 @ 0x1403A8868
 * Callers:
 *     sub_1403A8700 @ 0x1403A8700 (sub_1403A8700.c)
 *     sub_140AB14B4 @ 0x140AB14B4 (sub_140AB14B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A8868(int a1, int a2, unsigned __int8 a3)
{
  unsigned int v4; // [rsp+18h] [rbp+18h]

  HIWORD(v4) = (unsigned __int8)(a3 * (unsigned int)BYTE2(a2) / 0xFF - (-1 - a3) * BYTE2(a1));
  BYTE1(v4) = a3 * (unsigned int)BYTE1(a2) / 0xFF - (-1 - a3) * BYTE1(a1);
  LOBYTE(v4) = (255 - a3) * (unsigned __int8)a1 / 255 + a3 * (unsigned int)(unsigned __int8)a2 / 0xFF;
  return v4;
}

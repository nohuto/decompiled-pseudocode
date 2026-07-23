/*
 * XREFs of sub_140649558 @ 0x140649558
 * Callers:
 *     sub_1407E3E2C @ 0x1407E3E2C (sub_1407E3E2C.c)
 *     sub_1407E4178 @ 0x1407E4178 (sub_1407E4178.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140649558(unsigned int a1, unsigned int a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // ecx

  v3 = a2 * (unsigned __int64)a1;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *a3 = v4;
  return v3 > 0xFFFFFFFF ? 0xC0000095 : 0;
}

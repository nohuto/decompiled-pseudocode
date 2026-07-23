/*
 * XREFs of sub_14085CF70 @ 0x14085CF70
 * Callers:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14075E2D8 @ 0x14075E2D8 (sub_14075E2D8.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14085CFC8 @ 0x14085CFC8 (sub_14085CFC8.c)
 */

__int64 __fastcall sub_14085CF70(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)sub_14085CFC8(a1, a2, a3, v9) )
  {
    v6 = 1;
    v7 = v5 | (v9[0] << 28);
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbTagIDToTagRef");
    v7 = 0;
  }
  *a4 = v7;
  return v6;
}

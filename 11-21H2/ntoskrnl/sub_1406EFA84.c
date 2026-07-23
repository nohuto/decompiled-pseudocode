/*
 * XREFs of sub_1406EFA84 @ 0x1406EFA84
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EF910 @ 0x1406EF910 (sub_1406EF910.c)
 * Callees:
 *     sub_1402624B8 @ 0x1402624B8 (sub_1402624B8.c)
 */

unsigned __int64 __fastcall sub_1406EFA84(unsigned int *a1)
{
  unsigned int *v1; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned int v6; // eax

  v1 = a1;
  if ( a1[75] == 1 )
  {
    v3 = qword_140D06CB8;
  }
  else
  {
    v2 = sub_1402624B8();
    if ( v3 >= v2 )
      v3 = v2;
  }
  if ( (v1[204] & 2) != 0 && (v6 = v1[3], (v6 & 0x2000000) != 0) && (v6 & 0x400) != 0 )
    v4 = 50 * v3;
  else
    v4 = v3 * (unsigned int)dword_140D3B1C0;
  return v4 / 0x64 / v1[1];
}

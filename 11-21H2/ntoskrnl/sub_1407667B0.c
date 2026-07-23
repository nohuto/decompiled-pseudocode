/*
 * XREFs of sub_1407667B0 @ 0x1407667B0
 * Callers:
 *     sub_1406EAC14 @ 0x1406EAC14 (sub_1406EAC14.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_1407663DC @ 0x1407663DC (sub_1407663DC.c)
 *     sub_14076651C @ 0x14076651C (sub_14076651C.c)
 *     sub_140766640 @ 0x140766640 (sub_140766640.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 *     sub_140810F90 @ 0x140810F90 (sub_140810F90.c)
 *     sub_140945A9C @ 0x140945A9C (sub_140945A9C.c)
 *     sub_140950DA4 @ 0x140950DA4 (sub_140950DA4.c)
 *     sub_1409581A0 @ 0x1409581A0 (sub_1409581A0.c)
 * Callees:
 *     sub_1406E3A88 @ 0x1406E3A88 (sub_1406E3A88.c)
 */

bool __fastcall sub_1407667B0(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, int *a5)
{
  bool v5; // r11
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx

  v5 = 0;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v8 = *a1;
    v9 = a2[1];
    v10 = **a1;
    if ( v9 < v10 && v7 >= 0 )
    {
      if ( v7 > 1 )
      {
        if ( v7 != 2 )
          return v5;
        v9 = v10 + ~v9;
      }
      v5 = (int)sub_1406E3A88(v8, v9, a3, a4, a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}

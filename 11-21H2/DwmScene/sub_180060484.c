/*
 * XREFs of sub_180060484 @ 0x180060484
 * Callers:
 *     sub_180060528 @ 0x180060528 (sub_180060528.c)
 * Callees:
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 */

char __fastcall sub_180060484(char **a1, _QWORD *a2)
{
  char *v2; // rsi
  char v3; // bl
  char *v4; // r11
  __int64 v5; // rdi
  __int64 v6; // r11

  v2 = a1[1];
  v3 = 0;
  v4 = *a1;
  if ( (((v2 - *a1) ^ (a2[1] - *a2)) & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
  {
    if ( v4 == v2 )
    {
      return 1;
    }
    else
    {
      v5 = *a2 - (_QWORD)v4;
      while ( sub_18001FE44(v4, &v4[v5]) )
      {
        v4 = (char *)(v6 + 32);
        if ( v4 == v2 )
          return 1;
      }
    }
  }
  return v3;
}

/*
 * XREFs of sub_180094888 @ 0x180094888
 * Callers:
 *     sub_180094080 @ 0x180094080 (sub_180094080.c)
 *     sub_180094170 @ 0x180094170 (sub_180094170.c)
 * Callees:
 *     sub_180094AAC @ 0x180094AAC (sub_180094AAC.c)
 *     sub_180094ACC @ 0x180094ACC (sub_180094ACC.c)
 *     sub_180095530 @ 0x180095530 (sub_180095530.c)
 *     sub_180095554 @ 0x180095554 (sub_180095554.c)
 */

char *__fastcall sub_180094888(char *Src, char *a2, char *a3, __int64 a4, __int64 a5, void *Srca, __int64 a7)
{
  char *v7; // r10
  void *v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r11

  v7 = a3;
  if ( a4 )
  {
    if ( !a5 )
      return Src;
    if ( a4 <= a5 && a4 <= a7 )
    {
      sub_180095530(Src, a2, Srca);
      v11 = sub_180094ACC(v10);
      sub_180094ACC(Srca);
      return (char *)v11;
    }
    if ( a5 <= a7 )
    {
      sub_180095530(a2, a3, Srca);
      sub_180094AAC(Src);
      return (char *)sub_180094ACC(Srca);
    }
    if ( Src != a2 )
    {
      if ( a2 == a3 )
      {
        return Src;
      }
      else
      {
        ((void (*)(void))sub_180095554)();
        sub_180095554(v13, v12);
        sub_180095554(Src, v14);
        return &Src[(v15 - v16) & 0xFFFFFFFFFFFFFFF0uLL];
      }
    }
  }
  return v7;
}

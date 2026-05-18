/*
 * XREFs of sub_180057EE4 @ 0x180057EE4
 * Callers:
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_180057EE4(__int64 *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  size_t v7; // r8
  char *v8; // rdx

  v3 = a2 - 1;
  if ( !v3 )
  {
    v8 = "ShaderModel50";
    goto LABEL_12;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v8 = "ShaderModel41";
    goto LABEL_12;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = "ShaderModel40";
LABEL_12:
    a1[3] = 15LL;
    v7 = 13LL;
    goto LABEL_13;
  }
  a1[3] = 15LL;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = 21LL;
    v8 = "ShaderModel40_Level93";
LABEL_13:
    a1[2] = 0LL;
    *(_BYTE *)a1 = 0;
    goto LABEL_14;
  }
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  if ( v6 == 1 )
  {
    v7 = 21LL;
    v8 = "ShaderModel40_Level91";
  }
  else
  {
    v7 = 9LL;
    v8 = "<invalid>";
  }
LABEL_14:
  sub_180012190(a1, v8, v7);
  return a1;
}

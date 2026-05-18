/*
 * XREFs of sub_18005807C @ 0x18005807C
 * Callers:
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 * Callees:
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *__fastcall sub_18005807C(__int64 *a1, int a2)
{
  size_t v3; // r8
  int v4; // edx
  int v5; // edx
  int v6; // edx
  char *v7; // rdx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  v3 = 5LL;
  if ( a2 > 5 )
  {
    v3 = 6LL;
    v8 = a2 - 6;
    if ( !v8 )
    {
      v7 = "Shader";
      goto LABEL_23;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v7 = "Volume";
      goto LABEL_23;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v3 = 8LL;
      v7 = "Skinning";
      goto LABEL_23;
    }
    if ( v10 == 1 )
    {
      v3 = 14LL;
      v7 = "LightingGlobal";
      goto LABEL_23;
    }
    goto LABEL_18;
  }
  if ( a2 == 5 )
  {
    v7 = "Debug";
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v3 = 6LL;
    v7 = "Object";
    goto LABEL_23;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v3 = 6LL;
    v7 = "Global";
    goto LABEL_23;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v3 = 8LL;
    v7 = "Material";
    goto LABEL_23;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v3 = 8LL;
    v7 = "Lighting";
    goto LABEL_23;
  }
  if ( v6 != 1 )
  {
LABEL_18:
    v3 = 9LL;
    v7 = "<unknown>";
    goto LABEL_23;
  }
  v3 = 4LL;
  v7 = "View";
LABEL_23:
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  sub_180012190(a1, v7, v3);
  return a1;
}

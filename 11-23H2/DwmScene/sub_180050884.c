/*
 * XREFs of sub_180050884 @ 0x180050884
 * Callers:
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 * Callees:
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

_QWORD *__fastcall sub_180050884(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  const char *v7; // rdx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            v7 = "ShaderModel40_Level91";
          else
            v7 = "<invalid>";
        }
        else
        {
          v7 = "ShaderModel40_Level93";
        }
      }
      else
      {
        v7 = "ShaderModel40";
      }
    }
    else
    {
      v7 = "ShaderModel41";
    }
  }
  else
  {
    v7 = "ShaderModel50";
  }
  sub_180010DD0(a1, (__int64)v7);
  return a1;
}

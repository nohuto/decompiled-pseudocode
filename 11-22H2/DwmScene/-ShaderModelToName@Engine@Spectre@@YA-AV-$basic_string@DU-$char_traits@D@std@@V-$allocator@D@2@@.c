/*
 * XREFs of ?ShaderModelToName@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderModel@12@@Z @ 0x180050804
 * Callers:
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::ShaderModelToName(_QWORD *a1, int a2)
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
  std::string::string(a1, (__int64)v7);
  return a1;
}

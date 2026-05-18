/*
 * XREFs of ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C
 * Callers:
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18001B850 (-_Tidy@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Sh.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180081D80 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetDefaultValuesForType@Engine@Spectre@@YA?AV?$vector@MV?$allocator@M@std@@@std@@W4ShaderPropertyType@12@@Z @ 0x180082D50 (-GetDefaultValuesForType@Engine@Spectre@@YA-AV-$vector@MV-$allocator@M@std@@@std@@W4ShaderProper.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUColor@Math@Utils@3@@Z @ 0x1800836C8 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUCo.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@@Z @ 0x1800836FC (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUMa.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector2@Math@Utils@3@@Z @ 0x18008373C (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVe.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector3@Math@Utils@3@@Z @ 0x180083764 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderPrope_ea_180083764.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUVector4@Math@Utils@3@@Z @ 0x180083790 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderPrope_ea_180083790.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@H@Z @ 0x1800837C4 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@H@Z.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@M@Z @ 0x1800837E4 (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@M@Z.c)
 *     ?SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@_N@Z @ 0x18008380C (-SetPropertyDefaultInternal@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultFromDefinition(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3)
{
  char v6; // r14
  void *DefaultValuesForType; // rax
  int v8; // ebx
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _QWORD *v18; // rax
  __int64 v19; // r8
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm0_4
  int v22; // xmm0_4
  __int128 v23; // [rsp+30h] [rbp-D0h] BYREF
  char *v24[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25[3]; // [rsp+58h] [rbp-A8h] BYREF
  char *v26[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[4]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD pExceptionObject[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v29[4]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = 0;
  LODWORD(v23) = 0;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    DefaultValuesForType = Spectre::Engine::GetDefaultValuesForType(v25, *(_DWORD *)(a3 + 32), a3);
    v8 = 2;
  }
  else
  {
    DefaultValuesForType = std::vector<float>::vector<float>(v26, a3 + 40);
    v8 = 1;
  }
  LODWORD(v23) = v8;
  std::vector<float>::vector<float>(v24, (__int64)DefaultValuesForType);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)v25);
  }
  if ( (v8 & 1) != 0 )
    std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)v26);
  v10 = *(_DWORD *)(a3 + 32);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                  {
                    std::string::string(
                      v29,
                      (__int64)"ShaderPropertyLayout::AddProperties() -- unsupported property type");
                    v18 = std::string::string(
                            v27,
                            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cp"
                                     "p\\source\\engine\\shaderpropertylayout.cpp");
                    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
                      pExceptionObject,
                      (__int64)v18,
                      v19,
                      (__int64)v29,
                      0);
                    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
                  }
                }
                else
                {
                  pExceptionObject[0] = *(_OWORD *)v24[0];
                  pExceptionObject[1] = *((_OWORD *)v24[0] + 1);
                  pExceptionObject[2] = *((_OWORD *)v24[0] + 2);
                  pExceptionObject[3] = *((_OWORD *)v24[0] + 3);
                  Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, pExceptionObject);
                }
              }
              else
              {
                v23 = *(_OWORD *)v24[0];
                Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, &v23);
              }
            }
            else
            {
              v23 = *(_OWORD *)v24[0];
              Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, &v23);
            }
          }
          else
          {
            v20 = *((_DWORD *)v24[0] + 1);
            v21 = *((_DWORD *)v24[0] + 2);
            LODWORD(v23) = *(_DWORD *)v24[0];
            *(_QWORD *)((char *)&v23 + 4) = __PAIR64__(v21, v20);
            Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, &v23);
          }
        }
        else
        {
          v22 = *((_DWORD *)v24[0] + 1);
          LODWORD(v23) = *(_DWORD *)v24[0];
          DWORD1(v23) = v22;
          Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, &v23);
        }
      }
      else
      {
        Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2);
      }
    }
    else
    {
      Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, (unsigned int)(int)*(float *)v24[0]);
    }
  }
  else
  {
    if ( *(float *)v24[0] != 0.0 )
      v6 = 1;
    LOBYTE(v9) = v6;
    Spectre::Engine::ShaderPropertyLayout::SetPropertyDefaultInternal(a1, a2, v9);
  }
  std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Tidy((__int64)v24);
}

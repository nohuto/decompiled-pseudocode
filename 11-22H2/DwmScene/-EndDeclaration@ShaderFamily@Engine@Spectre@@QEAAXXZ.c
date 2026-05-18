/*
 * XREFs of ?EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060780
 * Callers:
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18009A980 (-OnCreate@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ShaderFamily::EndDeclaration(Spectre::Engine::ShaderFamily *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // edi
  _QWORD *v5; // rsi
  __int64 *v6; // rax
  _QWORD *v7; // rax
  unsigned int i; // edi
  __int64 *v9; // rax
  Spectre::Engine::ShaderPropertyLayout *v10; // [rsp+38h] [rbp-49h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+50h] [rbp-31h] BYREF
  std::_Ref_count_base *v13; // [rsp+58h] [rbp-29h]
  __int64 v14; // [rsp+70h] [rbp-11h] BYREF
  std::_Ref_count_base *v15; // [rsp+78h] [rbp-9h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp+Fh] BYREF

  if ( *((_DWORD *)this + 108) )
  {
    std::string::string(&v14, (__int64)"ShaderFamily::EndDeclaration() -- this function must only be called once.");
    v2 = std::string::string(
           &v12,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v2,
      v3,
      (__int64)&v14,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 96);
  do
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v10,
      &v5[2 * (int)v4]);
    if ( std::operator==<Spectre::Engine::Scene>(&v10) )
    {
      v6 = Spectre::Engine::ShaderManager::CreatePropertyLayout(*((_QWORD *)this + 55), &v14, v4);
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v10, v6);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v10);
      v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
             &v12,
             &v10);
      Spectre::Engine::ShaderFamily::SetPropertyLayout(this, v7);
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    ++v4;
  }
  while ( v4 < 0xA );
  *((_DWORD *)this + 108) = 1;
  for ( i = 0; i < 0xA; ++i )
  {
    v9 = (__int64 *)Spectre::Engine::ShaderPropertyLayout::CreateBlock(*v5, &v12);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 2 * (int)i + 32, v9);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v5 += 2;
  }
}

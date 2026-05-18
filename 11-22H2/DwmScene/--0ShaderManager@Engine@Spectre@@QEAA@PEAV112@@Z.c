/*
 * XREFs of ??0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z @ 0x18004E6B8
 * Callers:
 *     ??$make_shared@VShaderManager@Engine@Spectre@@PEAV223@@std@@YA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@$$QEAPEAVEngine@2Spectre@@@Z @ 0x18003056C (--$make_shared@VShaderManager@Engine@Spectre@@PEAV223@@std@@YA-AV-$shared_ptr@VShaderManager@Eng.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?size@?$initializer_list@M@std@@QEBA_KXZ @ 0x180047180 (-size@-$initializer_list@M@std@@QEBA_KXZ.c)
 *     ??$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBW4EShaderModel@Engine@Spectre@@1@Z @ 0x18004D4B8 (--$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@-$vector@W4EShaderModel@Engine@Spect.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18004E658 (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4ShaderOption@Engine@Spe.c)
 */

// Hidden C++ exception states: #wind=16
Spectre::Engine::ShaderManager *__fastcall Spectre::Engine::ShaderManager::ShaderManager(
        Spectre::Engine::ShaderManager *this,
        struct Spectre::Engine::Engine *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // r10
  char **v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  char *v14; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  std::map<std::string,enum Spectre::Engine::ShaderOption>::map<std::string,enum Spectre::Engine::ShaderOption>((_QWORD *)this + 2);
  `eh vector constructor iterator'((char *)this + 32, 32LL, 64LL, (void (*)(void *))std::string::string);
  *((_DWORD *)this + 520) = 0;
  v14 = (char *)this + 2088;
  *((_QWORD *)this + 261) = 0LL;
  *((_QWORD *)this + 262) = 0LL;
  v4 = operator new(0x48uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 261) = v4;
  `eh vector constructor iterator'((char *)this + 2104, 32LL, 512LL, (void (*)(void *))std::string::string);
  *((_DWORD *)this + 4622) = 0;
  std::string::string((_QWORD *)this + 2312, (__int64)&Spectre::Engine::StandardShaderExtension::kShaderFamilyName);
  std::string::string((_QWORD *)this + 2316, (__int64)&Spectre::Engine::UnlitShaderExtension::kShaderFamilyName);
  v14 = (char *)this + 18560;
  *((_QWORD *)this + 2320) = 0LL;
  *((_QWORD *)this + 2321) = 0LL;
  v5 = operator new(0x50uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 2320) = v5;
  v14 = (char *)this + 18576;
  *((_QWORD *)this + 2322) = 0LL;
  *((_QWORD *)this + 2323) = 0LL;
  v6 = operator new(0x68uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 2322) = v6;
  v14 = (char *)this + 18592;
  *((_QWORD *)this + 2324) = 0LL;
  *((_QWORD *)this + 2325) = 0LL;
  v7 = operator new(0x50uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *((_QWORD *)this + 2324) = v7;
  v14 = (char *)this + 18608;
  *((_QWORD *)this + 2326) = 0LL;
  *((_QWORD *)this + 2327) = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *((_QWORD *)this + 2326) = v8;
  *((_BYTE *)this + 18624) = 1;
  *((_QWORD *)this + 2329) = 0LL;
  *((_QWORD *)this + 2330) = 0LL;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2332) = 0LL;
  LODWORD(v14) = 3;
  v13[0] = &v14;
  v13[1] = (char *)&v14 + 4;
  *((_QWORD *)this + 2333) = 0LL;
  *((_QWORD *)this + 2334) = 0LL;
  *((_QWORD *)this + 2335) = 0LL;
  v15 = (__int64)&v14 + 4;
  v12 = &v14;
  v9 = std::initializer_list<float>::size(v13);
  std::vector<enum Spectre::Engine::EShaderModel>::_Construct_n<enum Spectre::Engine::EShaderModel const *,enum Spectre::Engine::EShaderModel const *>(
    v10,
    v9,
    (void **)&v12,
    &v15);
  *((_QWORD *)this + 2336) = a2;
  std::string::assign((void **)this + 2307, "<invalid>", 9uLL);
  return this;
}

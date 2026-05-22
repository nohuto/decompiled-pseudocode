/*
 * XREFs of _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BE440
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800BEDC0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800C0124 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x18003C97C (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x1800477BC (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180047EFC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0AEAY0CA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0CA@$$CBG$$QEAM@Z @ 0x180048024 (--$-0AEAY0CA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x1800480E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800568F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0AEAY0BJ@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BJ@$$CBG$$QEAM@Z @ 0x1800BD6A8 (--$-0AEAY0BJ@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$?0AEAY0BM@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BM@$$CBG$$QEAM@Z @ 0x1800BD6DC (--$-0AEAY0BM@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  MPCConstantManager *v5; // rbx
  float v6; // [rsp+20h] [rbp-E0h] BYREF
  void *v7[3]; // [rsp+28h] [rbp-D8h] BYREF
  __m128i v8; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v10; // [rsp+70h] [rbp-90h]
  char v11; // [rsp+74h] [rbp-8Ch]
  _BYTE v12[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v13[40]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v14[40]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+F0h] [rbp-10h] BYREF
  float v16; // [rsp+110h] [rbp+10h]
  char v17; // [rsp+114h] [rbp+14h]
  _BYTE v18[40]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v19[4]; // [rsp+140h] [rbp+40h] BYREF
  int v20; // [rsp+160h] [rbp+60h]
  char v21; // [rsp+164h] [rbp+64h]
  char v22; // [rsp+168h] [rbp+68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v5 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  std::wstring::wstring(v9, L"DisableInputInjection");
  v10 = 0;
  v11 = 1;
  v6 = FLOAT_0_89999998;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v12,
    L"HandGuidanceScoreForPrimary",
    &v6);
  v6 = FLOAT_30_0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v13,
    L"RayInjectionXYDeadzone1M",
    &v6);
  v6 = FLOAT_1_0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v14,
    L"RayInjectionTemporalDeadzoneSec",
    &v6);
  std::wstring::wstring(v15, L"TouchXYDeadzone1M");
  v16 = FLOAT_100_0;
  v17 = 2;
  v6 = FLOAT_10_0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v18,
    L"TouchTemporalDeadzoneSec",
    &v6);
  std::wstring::wstring(v19, L"TouchInjectionContactAreaRadius");
  v20 = 25;
  v21 = 0;
  v8.m128i_i64[0] = (__int64)v9;
  v8.m128i_i64[1] = (__int64)&v22;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v7,
    &v8);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)v5,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    v7);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)v7,
    (__int64)v7,
    *((__int64 **)v7[0] + 1));
  std::_Deallocate<16,0>(v7[0], 0x48uLL);
  `eh vector destructor iterator'(
    (char *)v9,
    40LL,
    7LL,
    (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}

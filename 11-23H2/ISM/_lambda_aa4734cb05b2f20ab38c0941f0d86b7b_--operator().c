/*
 * XREFs of _lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator() @ 0x1801E310C
 * Callers:
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801E3A70 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E5410 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x18003C97C (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x1800477BC (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180047EFC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x1800480E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800568F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x1801DB190 (--$-0AEAY0BA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x1801DB1CC (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$?0AEAY0BK@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BK@$$CBG$$QEAM@Z @ 0x1801DB234 (--$-0AEAY0BK@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_aa4734cb05b2f20ab38c0941f0d86b7b_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  MPCConstantManager *v5; // rbx
  __int64 v6; // rdx
  float v7; // [rsp+20h] [rbp-E0h] BYREF
  void *v8[3]; // [rsp+28h] [rbp-D8h] BYREF
  __m128i v9; // [rsp+40h] [rbp-C0h] BYREF
  char v10[40]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[40]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+A0h] [rbp-60h] BYREF
  float v13; // [rsp+C0h] [rbp-40h]
  char v14; // [rsp+C4h] [rbp-3Ch]
  _QWORD v15[4]; // [rsp+C8h] [rbp-38h] BYREF
  float v16; // [rsp+E8h] [rbp-18h]
  char v17; // [rsp+ECh] [rbp-14h]
  _QWORD v18[4]; // [rsp+F0h] [rbp-10h] BYREF
  float v19; // [rsp+110h] [rbp+10h]
  char v20; // [rsp+114h] [rbp+14h]
  _BYTE v21[40]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v22[40]; // [rsp+140h] [rbp+40h] BYREF
  char v23; // [rsp+168h] [rbp+68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v5 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v7 = FLOAT_0_2;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v10,
    L"ThumbstickDeadzone",
    &v7);
  v7 = FLOAT_0_1;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v11,
    v6,
    &v7);
  std::wstring::wstring(v12, L"ScrollingScale");
  v13 = FLOAT_7_0;
  v14 = 2;
  std::wstring::wstring(v15, L"ZoomingScale");
  v16 = FLOAT_0_029999999;
  v17 = 2;
  std::wstring::wstring(v18, L"PointScaleFactor");
  v19 = FLOAT_0_037500001;
  v20 = 2;
  v7 = FLOAT_15_0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v21,
    L"SelectXYDeadzone1M",
    &v7);
  v7 = FLOAT_2_0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v22,
    L"SelectTemporalDeadzoneSec",
    &v7);
  v9.m128i_i64[0] = (__int64)v10;
  v9.m128i_i64[1] = (__int64)&v23;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v8,
    &v9);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)v5,
    (*a1 + 32LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    v8);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)v8,
    (__int64)v8,
    *((__int64 **)v8[0] + 1));
  std::_Deallocate<16,0>(v8[0], 0x48uLL);
  `eh vector destructor iterator'(
    v10,
    40LL,
    7LL,
    (void (*)(void *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}

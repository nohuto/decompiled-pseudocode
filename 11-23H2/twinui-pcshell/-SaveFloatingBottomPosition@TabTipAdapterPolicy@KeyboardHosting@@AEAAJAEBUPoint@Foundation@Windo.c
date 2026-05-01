/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180534758
 * Callers:
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180532900 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18014ABF0 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017B820 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802DE46E (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180392DF0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180531AB0 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        unsigned int a3,
        unsigned int a4)
{
  bool v5; // cf
  float v6; // xmm11_4
  float v7; // xmm12_4
  __int64 v8; // r8
  __m128 v9; // xmm5
  __m128 v10; // xmm4
  float v11; // xmm2_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm3_4
  __m128 v15; // xmm8
  __int64 v16; // rax
  float v17; // xmm8_4
  char v18; // r14
  __int64 v19; // rcx
  float v20; // xmm10_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  __int64 ***v23; // rdi
  float v24; // xmm6_4
  unsigned int v25; // r10d
  char v26; // r11
  __int64 v27; // rax
  const WCHAR *v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rax
  const WCHAR *v31; // r8
  unsigned int v32; // eax
  const wchar_t *v33; // rax
  const char *cbData; // [rsp+30h] [rbp-D8h]
  unsigned int v36; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h]
  int Data; // [rsp+68h] [rbp-A0h] BYREF
  int Data_4; // [rsp+6Ch] [rbp-9Ch] BYREF
  __m128 Data_8; // [rsp+70h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v5 = *((_BYTE *)this + 596) != 0;
  v6 = *(float *)a2;
  v7 = *((float *)a2 + 1);
  v36 = a3;
  v8 = v5 ? 0x50 : 0;
  v9 = *(__m128 *)((char *)this + v8 + 232);
  v10 = *(__m128 *)((char *)this + v8 + 248);
  v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v12 = v6 - v11;
  v13 = v7 - v9.m128_f32[0];
  v14 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v8 + 264), 8));
  Data_8.m128_f32[0] = (float)(v14 * v11) / 100.0;
  Data_8.m128_f32[1] = (float)(v14 * v9.m128_f32[0]) / 100.0;
  Data_8.m128_f32[2] = (float)(v14 * v10.m128_f32[0]) / 100.0;
  Data_8.m128_f32[3] = (float)(v14 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) / 100.0;
  v15 = Data_8;
  v16 = std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
          (__int64 **)this + 72,
          (__int64)v37,
          &v36,
          a4);
  v17 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
  v18 = 1;
  v19 = *(_QWORD *)v16;
  v20 = *(float *)(*(_QWORD *)v16 + 36LL);
  if ( v17 < *(float *)(*(_QWORD *)v16 + 32LL) || (v21 = Data_8.m128_f32[3], Data_8.m128_f32[3] < v20) )
  {
    v23 = (__int64 ***)((char *)this + 560);
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            (__int64 ***)this + 70,
                            (__int64)v37,
                            &v36)
             + 40LL) = 0;
  }
  else
  {
    if ( v17 <= *(float *)(v19 + 32) )
    {
      v23 = (__int64 ***)((char *)this + 560);
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               (__int64 ***)this + 70,
                               (__int64)v37,
                               &v36)
                + 32LL) = 0;
    }
    else
    {
      v22 = fmaxf(0.0, v12 / (float)(v17 - *(float *)(v19 + 32)));
      if ( v22 >= 1.0 )
        v22 = FLOAT_1_0;
      v23 = (__int64 ***)((char *)this + 560);
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              (__int64 ***)this + 70,
                              (__int64)v37,
                              &v36)
               + 32LL) = v22;
    }
    if ( v21 <= v20 )
    {
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v23,
                               (__int64)v37,
                               &v36)
                + 36LL) = 0;
    }
    else
    {
      v24 = fmaxf(0.0, v13 / (float)(v21 - v20));
      if ( v24 >= 1.0 )
        v24 = FLOAT_1_0;
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              v23,
                              (__int64)v37,
                              &v36)
               + 36LL) = v24;
    }
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            v23,
                            (__int64)v37,
                            &v36)
             + 40LL) = 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v23,
                               (__int64)v37,
                               &v36)
                + 40LL) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Find_lower_bound<unsigned int>(
      (__int64 *)this + 9,
      (__int64)v37,
      &v36);
    std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Find_lower_bound<unsigned int>(
      (__int64 *)this + 11,
      (__int64)v37,
      &v36);
    if ( *(_BYTE *)(v38 + 25) || v25 < *(_DWORD *)(v38 + 32) || v38 == *((_QWORD *)this + 11) )
      v18 = 0;
    if ( v26 )
    {
      v33 = L"XPosition";
      if ( !v18 )
        v33 = L"XPosition and YPosition";
    }
    else
    {
      if ( v18 )
      {
        Data = (int)(float)((float)*((int *)this + 27)
                          * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                    v23,
                                                    (__int64)v37,
                                                    &v36)
                                     + 32LL));
        v27 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (__int64 *)this + 9,
                (__int64)v37,
                &v36);
        v28 = (const WCHAR *)(*(_QWORD *)v27 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v27 + 64LL) >= 8uLL )
          v28 = *(const WCHAR **)v28;
        v29 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v28, 4u, &Data, 4u);
        if ( v29 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            (void *)0x60C,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v29);
        Data_4 = (int)(float)((float)*((int *)this + 27)
                            * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                      v23,
                                                      (__int64)v37,
                                                      &v36)
                                       + 36LL));
        v30 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (__int64 *)this + 11,
                (__int64)v37,
                &v36);
        v31 = (const WCHAR *)(*(_QWORD *)v30 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v30 + 64LL) >= 8uLL )
          v31 = *(const WCHAR **)v31;
        v32 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v31, 4u, &Data_4, 4u);
        if ( v32 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            (void *)0x60F,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v32);
        return 0LL;
      }
      v33 = L"YPosition";
    }
    LODWORD(cbData) = v25;
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      1557LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL,
      (unsigned __int64)"View id %u is missing key(s) for %ls",
      cbData,
      v33);
  }
  return 0LL;
}

/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180482B2C
 * Callers:
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x1804812F0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C29E4 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010B3D8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802DB7FC (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180480174 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180480278 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        unsigned int a3,
        __int64 a4)
{
  float v5; // xmm11_4
  float v6; // xmm12_4
  bool v7; // cf
  __int64 v8; // r8
  __m128 v9; // xmm6
  __m128 v10; // xmm5
  float v11; // xmm4_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm1_4
  __m128 v15; // xmm8
  __int64 v16; // rax
  float v17; // xmm8_4
  char v18; // r14
  __int64 v19; // rcx
  float v20; // xmm10_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  __int64 *v23; // rdi
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
  const char *cbData; // [rsp+30h] [rbp-91h]
  unsigned int v36; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v38; // [rsp+60h] [rbp-61h]
  int Data; // [rsp+68h] [rbp-59h] BYREF
  unsigned int lpData; // [rsp+6Ch] [rbp-55h] BYREF
  __m128 v41; // [rsp+70h] [rbp-51h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v5 = *(float *)a2;
  v6 = *((float *)a2 + 1);
  v7 = *((_BYTE *)this + 500) != 0;
  v36 = a3;
  v8 = v7 ? 0x30 : 0;
  v9 = *(__m128 *)((char *)this + v8 + 232);
  v10 = *(__m128 *)((char *)this + v8 + 248);
  v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v12 = v5 - v11;
  v13 = v6 - v9.m128_f32[0];
  v14 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v8 + 264), 8));
  v41.m128_f32[1] = (float)(v14 * v9.m128_f32[0]) / 100.0;
  v41.m128_f32[0] = (float)(v14 * v11) / 100.0;
  v41.m128_f32[3] = (float)(v14 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) / 100.0;
  v41.m128_f32[2] = (float)(v14 * v10.m128_f32[0]) / 100.0;
  v15 = v41;
  v16 = std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
          (__int64 *)this + 60,
          (__int64)v37,
          &v36,
          a4);
  v17 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
  v18 = 1;
  v19 = *(_QWORD *)v16;
  v20 = *(float *)(*(_QWORD *)v16 + 36LL);
  if ( v17 < *(float *)(*(_QWORD *)v16 + 32LL) || (v21 = v41.m128_f32[3], v41.m128_f32[3] < v20) )
  {
    v23 = (__int64 *)((char *)this + 464);
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            (__int64 *)this + 58,
                            (__int64)v37,
                            &v36)
             + 40LL) = 0;
  }
  else
  {
    if ( v17 <= *(float *)(v19 + 32) )
    {
      v23 = (__int64 *)((char *)this + 464);
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               (__int64 *)this + 58,
                               (__int64)v37,
                               &v36)
                + 32LL) = 0;
    }
    else
    {
      v22 = fmaxf(0.0, v12 / (float)(v17 - *(float *)(v19 + 32)));
      if ( v22 >= 1.0 )
        v22 = FLOAT_1_0;
      v23 = (__int64 *)((char *)this + 464);
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              (__int64 *)this + 58,
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
            (void *)0x5F4,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v29);
        lpData = (int)(float)((float)*((int *)this + 27)
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
        v32 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v31, 4u, &lpData, 4u);
        if ( v32 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            (void *)0x5F7,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v32);
        return 0LL;
      }
      v33 = L"YPosition";
    }
    LODWORD(cbData) = v25;
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      1533LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL,
      (unsigned __int64)"View id %u is missing key(s) for %ls",
      cbData,
      v33);
  }
  return 0LL;
}

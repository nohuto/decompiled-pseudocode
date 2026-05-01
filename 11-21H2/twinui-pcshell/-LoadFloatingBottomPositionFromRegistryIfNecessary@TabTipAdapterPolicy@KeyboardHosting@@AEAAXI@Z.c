/*
 * XREFs of ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x1800C2934
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C29E4 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010B3D8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180480278 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180482500 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2)
{
  char *v2; // rsi
  _QWORD *v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rax
  const WCHAR *v7; // r8
  unsigned int ValueW; // eax
  int v9; // eax
  bool v10; // cc
  __int64 v11; // rax
  const WCHAR *v12; // r8
  int v13; // ecx
  int v14; // eax
  float v15; // xmm6_4
  float v16; // xmm6_4
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-58h]
  DWORD v19; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  int pvData; // [rsp+A0h] [rbp+28h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+30h] BYREF
  int v25; // [rsp+B0h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+B8h] [rbp+40h] BYREF

  v24 = a2;
  v2 = (char *)this + 464;
  if ( !*(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                (char *)this + 464,
                                v20,
                                &v24)
                 + 40LL) )
  {
    if ( (std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Find_lower_bound<unsigned int>(
            (char *)this + 72,
            v20,
            &v24),
          !*(_BYTE *)(v21 + 25))
      && v24 >= *(_DWORD *)(v21 + 32)
      && v21 != *v4
      || (std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Find_lower_bound<unsigned int>(
            (char *)this + 88,
            v20,
            &v24),
          !*(_BYTE *)(v21 + 25))
      && v5 >= *(_DWORD *)(v21 + 32)
      && v21 != *((_QWORD *)this + 11) )
    {
      pcbData = 4;
      v6 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(v4, v20, &v24);
      v7 = (const WCHAR *)(*(_QWORD *)v6 + 40LL);
      if ( *(_QWORD *)(*(_QWORD *)v6 + 64LL) >= 8uLL )
        v7 = *(const WCHAR **)v7;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                 v7,
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW )
      {
        if ( ValueW == 2 )
          return;
        v17 = 1617LL;
      }
      else
      {
        v9 = pvData;
        v10 = (unsigned int)pvData <= *((_DWORD *)this + 27);
        v19 = 4;
        if ( !v10 )
          v9 = *((_DWORD *)this + 27);
        pvData = v9;
        v11 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>((char *)this + 88, v20, &v24);
        v12 = (const WCHAR *)(*(_QWORD *)v11 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v11 + 64LL) >= 8uLL )
          v12 = *(const WCHAR **)v12;
        ValueW = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v12, 0x10u, 0LL, &v25, &v19);
        if ( !ValueW )
        {
          v13 = *((_DWORD *)this + 27);
          v14 = v25;
          if ( v25 > (unsigned int)v13 )
            v14 = *((_DWORD *)this + 27);
          v25 = v14;
          v15 = (float)pvData / (float)v13;
          *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  v2,
                                  v20,
                                  &v24)
                   + 32LL) = v15;
          v16 = (float)v25 / (float)*((int *)this + 27);
          *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  v2,
                                  v20,
                                  &v24)
                   + 36LL) = v16;
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  v2,
                                  v20,
                                  &v24)
                   + 40LL) = 1;
          return;
        }
        if ( ValueW == 2 )
          return;
        v17 = 1640LL;
      }
      wil::details::in1diag3::Log_Win32(
        retaddr,
        (void *)v17,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)ValueW,
        v18);
    }
  }
}

/*
 * XREFs of ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014AB40
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18014ABF0 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017B820 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180531AB0 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x1805340C4 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2)
{
  char *v2; // rsi
  _QWORD *v4; // r10
  _QWORD *v5; // rdi
  unsigned int v6; // r11d
  __int64 v7; // rax
  const WCHAR *v8; // r8
  unsigned int ValueW; // eax
  int v10; // eax
  bool v11; // cc
  __int64 v12; // rax
  const WCHAR *v13; // r8
  int v14; // ecx
  int v15; // eax
  float v16; // xmm6_4
  float v17; // xmm6_4
  __int64 v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-58h]
  DWORD v20; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[16]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  int pvData; // [rsp+A0h] [rbp+28h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+30h] BYREF
  int v26; // [rsp+B0h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+B8h] [rbp+40h] BYREF

  v25 = a2;
  v2 = (char *)this + 560;
  if ( *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               (char *)this + 560,
                               v21,
                               &v25)
                + 40LL) )
    return;
  std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Find_lower_bound<unsigned int>(
    (char *)this + 72,
    v21,
    &v25);
  if ( *(_BYTE *)(v22 + 25) || v25 < *(_DWORD *)(v22 + 32) || v22 == *v4 )
  {
    v5 = (_QWORD *)((char *)this + 88);
    std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::_Find_lower_bound<unsigned int>(
      (char *)this + 88,
      v21,
      &v25);
    if ( *(_BYTE *)(v22 + 25) || v6 < *(_DWORD *)(v22 + 32) || v22 == *v5 )
      return;
  }
  else
  {
    v5 = (_QWORD *)((char *)this + 88);
  }
  pcbData = 4;
  v7 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(v4, v21, &v25);
  v8 = (const WCHAR *)(*(_QWORD *)v7 + 40LL);
  if ( *(_QWORD *)(*(_QWORD *)v7 + 64LL) >= 8uLL )
    v8 = *(const WCHAR **)v8;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v8, 0x10u, 0LL, &pvData, &pcbData);
  if ( ValueW )
  {
    if ( ValueW == 2 )
      return;
    v18 = 1602LL;
LABEL_28:
    wil::details::in1diag3::Log_Win32(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)ValueW,
      v19);
    return;
  }
  v10 = pvData;
  v11 = (unsigned int)pvData <= *((_DWORD *)this + 27);
  v20 = 4;
  if ( !v11 )
    v10 = *((_DWORD *)this + 27);
  pvData = v10;
  v12 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(v5, v21, &v25);
  v13 = (const WCHAR *)(*(_QWORD *)v12 + 40LL);
  if ( *(_QWORD *)(*(_QWORD *)v12 + 64LL) >= 8uLL )
    v13 = *(const WCHAR **)v13;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v13, 0x10u, 0LL, &v26, &v20);
  if ( ValueW )
  {
    if ( ValueW == 2 )
      return;
    v18 = 1625LL;
    goto LABEL_28;
  }
  v14 = *((_DWORD *)this + 27);
  v15 = v26;
  if ( v26 > (unsigned int)v14 )
    v15 = *((_DWORD *)this + 27);
  v26 = v15;
  v16 = (float)pvData / (float)v14;
  *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                          v2,
                          v21,
                          &v25)
           + 32LL) = v16;
  v17 = (float)v26 / (float)*((int *)this + 27);
  *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                          v2,
                          v21,
                          &v25)
           + 36LL) = v17;
  *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                          v2,
                          v21,
                          &v25)
           + 40LL) = 1;
}

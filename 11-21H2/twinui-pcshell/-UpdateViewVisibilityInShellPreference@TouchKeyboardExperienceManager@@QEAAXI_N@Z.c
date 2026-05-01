/*
 * XREFs of ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18046A010
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180477DC8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180457A88 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v5; // edi
  _BYTE *v6; // r9
  _QWORD *v7; // rdx
  KeyboardHosting::TabTipAdapter *v8; // rsi
  _BYTE *v9; // r9
  unsigned int v10; // r8d
  const WCHAR *v11; // rax
  HSTRING v12; // rbx
  unsigned int v13; // r8d
  const WCHAR *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  const WCHAR *v17; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-59h]
  _QWORD Src[4]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v21[24]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v22; // [rsp+88h] [rbp-19h]
  _BYTE v23[24]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+7h]
  _BYTE v25[48]; // [rsp+BAh] [rbp+19h] BYREF
  _BYTE v26[6]; // [rsp+EAh] [rbp+49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v5 = a3;
  std::wstring::wstring(Src, L"ViewVisibilityUpdated_");
  v6 = v25;
  do
  {
    v6 -= 2;
    *(_WORD *)v6 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  std::wstring::wstring((__int64)v18, v6, v25);
  v7 = v18;
  if ( v19 >= 8 )
    v7 = (_QWORD *)v18[0];
  std::wstring::append(Src, v7, v18[2]);
  std::wstring::_Tidy_deallocate((__int64)v18);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v9 = v26;
  do
  {
    v9 -= 2;
    *(_WORD *)v9 = v5 % 0xA + 48;
    v5 /= 0xAu;
  }
  while ( v5 );
  std::wstring::wstring((__int64)v18, v9, v26);
  v11 = (const WCHAR *)v18;
  if ( v19 >= 8 )
    v11 = (const WCHAR *)v18[0];
  v17 = v11;
  v12 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, &v17, v10) + 24);
  v14 = (const WCHAR *)Src;
  if ( Src[3] >= 8uLL )
    v14 = (const WCHAR *)Src[0];
  v17 = v14;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, &v17, v13);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, *(HSTRING *)(v15 + 24), v12);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x171A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v22 = 0LL;
  v24 = 0LL;
  std::wstring::_Tidy_deallocate((__int64)v18);
  std::wstring::_Tidy_deallocate((__int64)Src);
}

/*
 * XREFs of ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18052E3E8
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180528ED8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18052906C (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180529200 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v5; // edi
  _WORD *v6; // rax
  _QWORD *v7; // rdx
  _WORD *v8; // rax
  unsigned int v9; // r8d
  _QWORD *v10; // rax
  HSTRING Reserved1; // rbx
  unsigned int v12; // r8d
  _QWORD *v13; // rax
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  int v16[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-81h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-69h]
  _QWORD Src[4]; // [rsp+48h] [rbp-61h] BYREF
  HSTRING_HEADER v20; // [rsp+68h] [rbp-41h] BYREF
  __int64 v21; // [rsp+80h] [rbp-29h]
  HSTRING_HEADER v22; // [rsp+88h] [rbp-21h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-9h]
  _WORD v24[24]; // [rsp+B2h] [rbp+9h] BYREF
  _WORD v25[3]; // [rsp+E2h] [rbp+39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v5 = a3;
  std::wstring::wstring(Src, L"ViewVisibilityUpdated_");
  v6 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v24, a2);
  std::wstring::wstring((__int64)v17, v6, v24);
  v7 = v17;
  if ( v18 >= 8 )
    v7 = (_QWORD *)v17[0];
  std::wstring::append(Src, v7, v17[2]);
  std::wstring::_Tidy_deallocate((__int64)v17);
  v8 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v25, v5);
  std::wstring::wstring((__int64)v17, v8, v25);
  v10 = v17;
  if ( v18 >= 8 )
    v10 = (_QWORD *)v17[0];
  *(_QWORD *)v16 = v10;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)v16, v9)[1].Reserved.Reserved1;
  v13 = Src;
  if ( Src[3] >= 8uLL )
    v13 = (_QWORD *)Src[0];
  *(_QWORD *)v16 = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)v16, v12);
  v15 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, (HSTRING)v14[1].Reserved.Reserved1, Reserved1);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v15);
  v21 = 0LL;
  v23 = 0LL;
  std::wstring::_Tidy_deallocate((__int64)v17);
  std::wstring::_Tidy_deallocate((__int64)Src);
}

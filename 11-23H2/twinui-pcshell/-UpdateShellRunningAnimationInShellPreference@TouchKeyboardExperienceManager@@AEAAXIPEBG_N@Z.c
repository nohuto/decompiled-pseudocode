/*
 * XREFs of ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18051BBA4
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18050F280 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180514E70 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
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
 *     ??$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEBGAEA_N@Z @ 0x180509250 (--$UpdateRunningAnimation@AEAIAEAPEBGAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAPEB.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        char a4)
{
  unsigned __int64 v8; // r8
  _WORD *v9; // rax
  HSTRING_HEADER *Reserved1; // rdx
  unsigned int v11; // r8d
  KeyboardHosting::TabTipAdapter *v12; // rdi
  const WCHAR *v13; // rax
  HSTRING v14; // rbx
  unsigned int v15; // r8d
  const WCHAR *v16; // rax
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  _BYTE v19[8]; // [rsp+20h] [rbp-79h] BYREF
  const WCHAR *v20; // [rsp+28h] [rbp-71h] BYREF
  unsigned int v21[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD Src[4]; // [rsp+40h] [rbp-59h] BYREF
  HSTRING_HEADER v23; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-21h]
  HSTRING_HEADER v25; // [rsp+80h] [rbp-19h] BYREF
  _WORD v26[3]; // [rsp+AAh] [rbp+11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v21[0] = a2;
  v20 = a3;
  v19[0] = a4;
  TouchKeyboardExperienceTelemetryLogger::UpdateRunningAnimation<unsigned int &,unsigned short const * &,bool &>(
    v21,
    (__int64 *)&v20,
    v19);
  std::wstring::wstring(Src, L"ShellRunningAnimation_");
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
  std::wstring::append(Src, a3, v8);
  std::wstring::append(Src, L"_", 1uLL);
  v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v26, a2);
  std::wstring::wstring((__int64)&v23, v9, v26);
  Reserved1 = &v23;
  if ( v24 >= 8 )
    Reserved1 = (HSTRING_HEADER *)v23.Reserved.Reserved1;
  std::wstring::append(Src, Reserved1, *(unsigned __int64 *)&v23.Reserved.Reserved2[16]);
  std::wstring::_Tidy_deallocate((__int64)&v23);
  v12 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v13 = L"1";
  if ( !a4 )
    v13 = L"0";
  v20 = v13;
  v14 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v20, v11)[1].Reserved.Reserved1;
  v16 = (const WCHAR *)Src;
  if ( Src[3] >= 8uLL )
    v16 = (const WCHAR *)Src[0];
  v20 = v16;
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v20, v15);
  v18 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, (HSTRING)v17[1].Reserved.Reserved1, v14);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1693,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
  std::wstring::_Tidy_deallocate((__int64)Src);
}

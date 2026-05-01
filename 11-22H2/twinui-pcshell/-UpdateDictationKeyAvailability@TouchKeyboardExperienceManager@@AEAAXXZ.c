/*
 * XREFs of ?UpdateDictationKeyAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18019AB28
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F15A0 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     wistd::__function::__func__lambda_b1438445f7414afdc94808c175150de5__void___cdecl(void)_::operator() @ 0x18050D240 (wistd--__function--__func__lambda_b1438445f7414afdc94808c175150de5__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z @ 0x1800A336C (-GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchKeyboardExperienceManager::UpdateDictationKeyAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmIntPolicyValue; // eax
  _WORD *v3; // rax
  unsigned int v4; // r8d
  KeyboardHosting::TabTipAdapter *v5; // rdi
  int *v6; // rax
  HSTRING Reserved1; // rbx
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-88h] BYREF
  int v10[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-60h] BYREF
  HSTRING v13; // [rsp+60h] [rbp-48h]
  HSTRING_HEADER v14; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v15[6]; // [rsp+92h] [rbp-16h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  MdmIntPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmIntPolicyValue(
                        L"TouchKeyboardDictationButtonAvailability",
                        0);
  if ( MdmIntPolicyValue < 0 )
  {
    v3 = (_WORD *)(std::_UIntegral_to_buff<unsigned short,unsigned int>(v15, (unsigned int)-MdmIntPolicyValue) - 2);
    *v3 = 45;
  }
  else
  {
    v3 = (_WORD *)std::_UIntegral_to_buff<unsigned short,unsigned int>(v15, (unsigned int)MdmIntPolicyValue);
  }
  std::wstring::wstring(v10, v3, v15);
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v6 = v10;
  if ( v11 >= 8 )
    v6 = *(int **)v10;
  *(_QWORD *)v9 = v6;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, (const WCHAR **)v9, v4)[1].Reserved.Reserved1;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"TouchKeyboardDictationButtonAvailability",
    0x29u,
    0x28u);
  v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v13, Reserved1);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x905,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  std::wstring::_Tidy_deallocate((__int64)v10);
}

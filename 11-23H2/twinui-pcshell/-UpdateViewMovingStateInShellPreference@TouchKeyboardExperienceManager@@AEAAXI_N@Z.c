/*
 * XREFs of ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18051BD7C
 * Callers:
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001BD0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWrite.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rax
  HSTRING_HEADER *Reserved1; // rdx
  unsigned int v12; // r8d
  KeyboardHosting::TabTipAdapter *v13; // rdi
  const WCHAR *v14; // rax
  HSTRING v15; // rbx
  unsigned int v16; // r8d
  const WCHAR *v17; // rax
  HSTRING_HEADER *v18; // rax
  int v19; // eax
  _BYTE v20[4]; // [rsp+40h] [rbp-49h] BYREF
  int v21; // [rsp+44h] [rbp-45h] BYREF
  __int64 v22; // [rsp+48h] [rbp-41h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-21h]
  _QWORD Src[4]; // [rsp+70h] [rbp-19h] BYREF
  HSTRING_HEADER v26; // [rsp+90h] [rbp+7h] BYREF
  _WORD v27[3]; // [rsp+BAh] [rbp+31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v6 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 16LL) )
  {
    v22 = 0x1000000LL;
    v20[0] = a3;
    v21 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      (int)&unk_18085CDA2,
      v8,
      v9,
      (__int64)&v21,
      (__int64)v20,
      (__int64)&v22);
  }
  std::wstring::wstring(Src, L"ViewEnteredMoveSize_");
  v10 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v27, a2);
  std::wstring::wstring((__int64)&v23, v10, v27);
  Reserved1 = &v23;
  if ( v24 >= 8 )
    Reserved1 = (HSTRING_HEADER *)v23.Reserved.Reserved1;
  std::wstring::append(Src, Reserved1, *(unsigned __int64 *)&v23.Reserved.Reserved2[16]);
  std::wstring::_Tidy_deallocate((__int64)&v23);
  v13 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v14 = L"1";
  if ( !a3 )
    v14 = L"0";
  v22 = (__int64)v14;
  v15 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&v22, v12)[1].Reserved.Reserved1;
  v17 = (const WCHAR *)Src;
  if ( Src[3] >= 8uLL )
    v17 = (const WCHAR *)Src[0];
  v22 = (__int64)v17;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&v22, v16);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, (HSTRING)v18[1].Reserved.Reserved1, v15);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x169C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  std::wstring::_Tidy_deallocate((__int64)Src);
}

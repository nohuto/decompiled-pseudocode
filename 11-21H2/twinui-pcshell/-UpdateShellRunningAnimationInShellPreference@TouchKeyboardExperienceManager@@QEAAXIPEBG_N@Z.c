/*
 * XREFs of ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z @ 0x180469C2C
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18045BD28 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18045D340 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180463910 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180457A88 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1804588FC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        char a4)
{
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  _BYTE *v13; // r9
  _QWORD *v14; // rdx
  unsigned int v15; // r8d
  KeyboardHosting::TabTipAdapter *v16; // rdi
  const WCHAR *v17; // rax
  HSTRING v18; // rbx
  unsigned int v19; // r8d
  _QWORD *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+40h] [rbp-59h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h] BYREF
  _QWORD Src[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v27[4]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v28[42]; // [rsp+98h] [rbp-1h] BYREF
  _BYTE v29[6]; // [rsp+C2h] [rbp+29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v8 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 16LL) )
  {
    LOBYTE(v23) = a4;
    v24 = (__int64)a3;
    LODWORD(v25) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      v9,
      (unsigned __int8 *)dword_1806B5EAE,
      v10,
      v11,
      (__int64)&v25,
      (const WCHAR **)&v24,
      (__int64)&v23);
  }
  std::wstring::wstring(Src, L"ShellRunningAnimation_");
  v12 = -1LL;
  do
    ++v12;
  while ( a3[v12] );
  std::wstring::append(Src, a3, v12);
  std::wstring::append(Src, L"_", 1uLL);
  v13 = v29;
  do
  {
    v13 -= 2;
    *(_WORD *)v13 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  std::wstring::wstring((__int64)v27, v13, v29);
  v14 = v27;
  if ( v27[3] >= 8uLL )
    v14 = (_QWORD *)v27[0];
  std::wstring::append(Src, v14, v27[2]);
  std::wstring::_Tidy_deallocate((__int64)v27);
  v16 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v17 = L"1";
  if ( !a4 )
    v17 = L"0";
  v24 = (__int64)v17;
  v18 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (__int64)v27,
                       (const WCHAR **)&v24,
                       v15)
                   + 24);
  v20 = Src;
  if ( Src[3] >= 8uLL )
    v20 = (_QWORD *)Src[0];
  v24 = (__int64)v20;
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v28, (const WCHAR **)&v24, v19);
  v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v16, *(HSTRING *)(v21 + 24), v18);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x172A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  std::wstring::_Tidy_deallocate((__int64)Src);
}

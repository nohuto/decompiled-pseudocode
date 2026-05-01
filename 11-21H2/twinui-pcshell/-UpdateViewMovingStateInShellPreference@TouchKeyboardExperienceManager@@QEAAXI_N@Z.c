/*
 * XREFs of ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x180469E3C
 * Callers:
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--operator().c)
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
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18022DD3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180457A88 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // r9
  _QWORD *v11; // rdx
  unsigned int v12; // r8d
  KeyboardHosting::TabTipAdapter *v13; // rdi
  const WCHAR *v14; // rax
  HSTRING v15; // rbx
  unsigned int v16; // r8d
  _QWORD *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  _BYTE v20[8]; // [rsp+38h] [rbp-39h] BYREF
  int v21[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v22[4]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD Src[4]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v24[42]; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v25[6]; // [rsp+B2h] [rbp+41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v6 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 16LL) )
  {
    v20[0] = a3;
    v21[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v7,
      byte_1806B5FB6,
      v8,
      v9,
      (__int64)v21,
      (__int64)v20);
  }
  std::wstring::wstring(Src, L"ViewEnteredMoveSize_");
  v10 = v25;
  do
  {
    v10 -= 2;
    *(_WORD *)v10 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  std::wstring::wstring((__int64)v22, v10, v25);
  v11 = v22;
  if ( v22[3] >= 8uLL )
    v11 = (_QWORD *)v22[0];
  std::wstring::append(Src, v11, v22[2]);
  std::wstring::_Tidy_deallocate((__int64)v22);
  v13 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  v14 = L"1";
  if ( !a3 )
    v14 = L"0";
  *(_QWORD *)v21 = v14;
  v15 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                       (__int64)v22,
                       (const WCHAR **)v21,
                       v12)
                   + 24);
  v17 = Src;
  if ( Src[3] >= 8uLL )
    v17 = (_QWORD *)Src[0];
  *(_QWORD *)v21 = v17;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, (const WCHAR **)v21, v16);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v13, *(HSTRING *)(v18 + 24), v15);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1733,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  std::wstring::_Tidy_deallocate((__int64)Src);
}

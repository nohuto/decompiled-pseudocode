/*
 * XREFs of ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x18005A978
 * Callers:
 *     wistd::__function::__func__lambda_fe6fb8b9e581c6c4730aa23c2a2ccbbb__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18005A960 (wistd--__function--__func__lambda_fe6fb8b9e581c6c4730aa23c2a2ccbbb__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18005AAB8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnLockScreenActiveChanged(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  KeyboardHosting::TabTipAdapter *v4; // rsi
  const unsigned __int16 *v5; // rax
  HSTRING v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  const struct _tlgProvider_t *v9; // rcx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-39h]
  bool v15; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v16[7]; // [rsp+41h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-9h] BYREF
  HSTRING v19; // [rsp+68h] [rbp+Fh]
  _BYTE v20[32]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( v4 )
  {
    v5 = L"1";
    if ( !a2 )
      v5 = L"0";
    v17 = (__int64)v5;
    v6 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v20, &v17) + 24);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LockScreenState", 0x10u, 0xFu);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v19, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13E5,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v14);
  }
  v8 = *((_QWORD *)this + 73);
  v9 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u && (unsigned __int8)tlgKeywordOn(v9, 0x400000000000LL) )
  {
    v17 = 0x1000000LL;
    v15 = v8 != 0;
    v16[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v10,
      (unsigned int)&unk_18085CE82,
      v11,
      v12,
      (__int64)v16,
      (__int64)&v15,
      (__int64)&v17);
  }
  return 0LL;
}

/*
 * XREFs of ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C
 * Callers:
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800BBD2C (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800EC96C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1806C2168 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1806C23AC (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?FoundPreviouslyRegisteredFlyoutWindow@MeetAndChatTelemetry@@SAXPEBD@Z @ 0x1806C563C (-FoundPreviouslyRegisteredFlyoutWindow@MeetAndChatTelemetry@@SAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationFlyoutView::EnsureWindow(
        ApplicationFlyoutView *this,
        __int64 a2,
        TraceLoggingCorrelationVector **a3)
{
  const unsigned __int16 *v5; // rdx
  __int64 WindowByPropertyName; // rdi
  int v7; // eax
  LSTATUS DWORD; // eax
  unsigned int v9; // ecx
  const wchar_t *v10; // r8
  int v11; // eax
  __int64 v12; // r11
  __int64 v13; // rdx
  wchar_t *v14; // rax
  __int64 v15; // r8
  const char *v16; // r9
  __int64 v17; // rcx
  wchar_t *v18; // rdx
  __int64 v19; // rax
  char *v20; // r8
  wchar_t v21; // r9
  wchar_t *v22; // rax
  wchar_t *v23; // r8
  int v24; // eax
  wil::details *Event; // rbx
  const char *v26; // r9
  const unsigned __int16 **v27; // rbx
  TraceLoggingCorrelationVector **v28; // rax
  wil::details *v29; // rbx
  const unsigned __int16 *v30; // rdx
  const char *v31; // r9
  int v32; // eax
  void *v33; // rdx
  unsigned int v35; // [rsp+20h] [rbp-E0h] BYREF
  TraceLoggingCorrelationVector *v36; // [rsp+28h] [rbp-D8h] BYREF
  wil *v37; // [rsp+30h] [rbp-D0h] BYREF
  char v38[144]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v39[512]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+408h]

  CorrelationVector::Extend(a3, &v36);
  WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFlyout", v5);
  if ( WindowByPropertyName )
  {
    TraceLoggingCorrelationVector::ToStringImpl(
      v36,
      _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 17, 0LL),
      v38);
    MeetAndChatTelemetry::FoundPreviouslyRegisteredFlyoutWindow(v38);
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 24LL))(
           *((_QWORD *)this + 1),
           WindowByPropertyName,
           1LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
              L"FallbackShown",
              &v35);
    v9 = v35;
    if ( DWORD < 0 )
      v9 = 0;
    v35 = v9;
    v10 = (const wchar_t *)((char *)this + 32);
    if ( *((_QWORD *)this + 7) >= 8uLL )
      v10 = *(const wchar_t **)v10;
    v11 = StringCchCopyW(v39, 512LL, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v11,
        v35);
    v13 = v12;
    v14 = v39;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v15 = (v12 - v13) & -(__int64)(v13 != 0);
    v16 = v13 == 0 ? (const char *)0x80070057LL : 0LL;
    if ( v13 )
    {
      v17 = v12 - v15;
      v18 = &v39[v15];
      if ( v12 != v15 )
      {
        v19 = 2147483646LL;
        v20 = (char *)((char *)L":ShowFlyout?" - (char *)v18);
        do
        {
          if ( !v19 )
            break;
          v21 = *(wchar_t *)((char *)v18 + (_QWORD)v20);
          if ( !v21 )
            break;
          *v18++ = v21;
          --v19;
          --v17;
        }
        while ( v17 );
      }
      v22 = v18 - 1;
      if ( v17 )
        v22 = v18;
      *v22 = 0;
      v16 = v17 == 0 ? (const char *)0x8007007ALL : 0LL;
    }
    if ( (int)v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE1,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v16,
        v35);
    v23 = L"fallbackShown=false";
    if ( v35 )
      v23 = (wchar_t *)L"fallbackShown=true";
    v24 = StringCchCatW(v39, v12, (char *)v23);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE2,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v24,
        v35);
    v37 = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, L"MeetAndChatFlyoutShown", 1u, 0x1F0003u);
    if ( !Event )
      wil::details::in1diag3::Throw_GetLastError(
        retaddr,
        (void *)0x1817,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        v26);
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      &v37,
      Event);
    v27 = (const unsigned __int16 **)*((_QWORD *)this + 3);
    v28 = CorrelationVector::Increment(&v36);
    Utils::ProtocolLauncher::LaunchUriWithCv(v27, v39, a2, v28);
    v29 = v37;
    if ( !(unsigned __int8)wil::handle_wait(v37, (void *)0x2710) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xE7,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v31);
    WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFlyout", v30);
    if ( !WindowByPropertyName )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEA,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)0x800705B4LL,
        v35);
    v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 24LL))(
            *((_QWORD *)this + 1),
            WindowByPropertyName,
            1LL);
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF0,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v32);
    if ( v29 )
      wil::details::CloseHandle(v29, v33);
  }
  if ( v36 )
    operator delete(v36);
  return WindowByPropertyName;
}

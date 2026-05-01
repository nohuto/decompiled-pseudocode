/*
 * XREFs of ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00
 * Callers:
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800E607C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CorrelationVector@@QEAA@XZ @ 0x18017C464 (--1CorrelationVector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1805980EC (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D0708 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z @ 0x1805D094C (-FindWindowByPropertyName@Utils@@YAPEAUHWND__@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
HWND __fastcall ApplicationFlyoutView::EnsureWindow(
        ApplicationFlyoutView *this,
        __int64 a2,
        const struct CorrelationVector *a3)
{
  const unsigned __int16 *v5; // rdx
  HWND WindowByPropertyName; // rbx
  LSTATUS DWORD; // eax
  unsigned int v8; // ecx
  const wchar_t *v9; // r8
  int v10; // eax
  __int64 v11; // r11
  __int64 v12; // rdx
  wchar_t *v13; // rax
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // rcx
  wchar_t *v17; // rdx
  __int64 v18; // rax
  char *v19; // r8
  wchar_t v20; // r9
  wchar_t *v21; // rax
  wchar_t *v22; // r8
  int v23; // eax
  const unsigned __int16 **v24; // rbx
  TraceLoggingCorrelationVector **v25; // rax
  const unsigned __int16 *v26; // rdx
  const char *v27; // r9
  int v28; // eax
  void *v29; // rdx
  int v31; // [rsp+20h] [rbp-E0h]
  unsigned int v32; // [rsp+30h] [rbp-D0h] BYREF
  wil *v33; // [rsp+38h] [rbp-C8h] BYREF
  void *v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v35[512]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  CorrelationVector::Extend(a3, v34);
  WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFlyout", v5);
  if ( !WindowByPropertyName )
  {
    DWORD = SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Communications",
              L"FallbackShown",
              &v32);
    v8 = v32;
    if ( DWORD < 0 )
      v8 = 0;
    v32 = v8;
    v9 = (const wchar_t *)((char *)this + 32);
    if ( *((_QWORD *)this + 7) >= 8uLL )
      v9 = *(const wchar_t **)v9;
    v10 = StringCchCopyW(v35, 512LL, v9);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD7,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v10,
        v31);
    v12 = (unsigned int)v11;
    v13 = v35;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v12;
    }
    while ( v12 );
    v14 = (v11 - v12) & -(__int64)(v12 != 0);
    v15 = v12 == 0 ? (const char *)0x80070057LL : 0LL;
    if ( v12 )
    {
      v16 = v11 - v14;
      v17 = &v35[v14];
      if ( v11 != v14 )
      {
        v18 = 2147483646LL;
        v19 = (char *)((char *)L":ShowFlyout?" - (char *)v17);
        do
        {
          if ( !v18 )
            break;
          v20 = *(wchar_t *)((char *)v17 + (_QWORD)v19);
          if ( !v20 )
            break;
          *v17++ = v20;
          --v18;
          --v16;
        }
        while ( v16 );
      }
      v21 = v17 - 1;
      if ( v16 )
        v21 = v17;
      *v21 = 0;
      v15 = v16 == 0 ? (const char *)0x8007007ALL : 0LL;
    }
    if ( (int)v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD8,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v15,
        v31);
    v22 = L"fallbackShown=false";
    if ( v32 )
      v22 = (wchar_t *)L"fallbackShown=true";
    v23 = StringCchCatW(v35, v11, (char *)v22);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD9,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v23,
        v31);
    v33 = 0LL;
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      &v33,
      1LL,
      L"MeetAndChatFlyoutShown");
    v24 = (const unsigned __int16 **)*((_QWORD *)this + 3);
    v25 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)v34);
    Utils::ProtocolLauncher::LaunchUriWithCv(v24, v35, a2, (const struct CorrelationVector *)v25);
    if ( !(unsigned __int8)wil::handle_wait(v33, (void *)0x2710) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xDE,
        (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v27);
    WindowByPropertyName = Utils::FindWindowByPropertyName((Utils *)L"MeetAndChatFlyout", v26);
    if ( !WindowByPropertyName )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE1,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)0x800705B4LL,
        v31);
    v28 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 1) + 24LL))(
            *((_QWORD *)this + 1),
            WindowByPropertyName,
            1LL);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE6,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v28);
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      &v33,
      v29);
  }
  CorrelationVector::~CorrelationVector(v34);
  return WindowByPropertyName;
}

/*
 * XREFs of _lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator() @ 0x180584A60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&_::Run @ 0x180586DD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__-_--Run.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1805824B4 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ??$call@P6A?AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationManagerStatics2@2345@@Z@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics2@2345@@impl@winrt@@QEAA?AUToastNotificationHistory@Notifications@UI@Windows@2@$$QEAP6A?AU34562@AEBUIToastNotificationManagerStatics2@4562@@Z@Z @ 0x1805834C4 (--$call@P6A-AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationMan.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?History@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificationManagerStatics2@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotificationHistory@Notifications@UI@Windows@3@XZ @ 0x1805869E8 (-History@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics2@UIToastNotificatio.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@0@Z @ 0x180586D70 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 */

// Hidden C++ exception states: #wind=6
wil::details::in1diag3 **__fastcall lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator()(_QWORD *a1)
{
  wil::details::in1diag3 **result; // rax
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v5; // rsi
  const WCHAR *v6; // rax
  _WORD *v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  const struct std::filesystem::path *v12; // rdx
  const WCHAR *v13; // rdx
  unsigned int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+28h] [rbp-69h] BYREF
  __int64 *v18; // [rsp+30h] [rbp-61h]
  __int64 (__fastcall *v19)(__int64, __int64); // [rsp+38h] [rbp-59h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v21[32]; // [rsp+60h] [rbp-31h] BYREF
  char Src[16]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v23; // [rsp+90h] [rbp-1h]
  __int64 v24; // [rsp+98h] [rbp+7h]
  char v25[16]; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+B0h] [rbp+1Fh]
  __int64 v27; // [rsp+B8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = (const unsigned __int16 *)(i + 2);
    v6 = (const WCHAR *)(i + 2);
    if ( i[5] >= 8uLL )
      v6 = *(const WCHAR **)v5;
    v7 = v6 + 12;
    v8 = *a1;
    v9 = (_QWORD *)(*a1 + 64LL);
    v18 = (__int64 *)Src;
    v10 = v9[2];
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    v23 = 0LL;
    v24 = 7LL;
    *(_WORD *)Src = 0;
    std::wstring::assign(Src, v9, v10);
    v18 = (__int64 *)v25;
    v11 = -1LL;
    do
      ++v11;
    while ( v7[v11] );
    v26 = 0LL;
    v27 = 7LL;
    *(_WORD *)v25 = 0;
    std::wstring::assign(v25, v7, v11);
    std::filesystem::path::operator/=(Src, (std::filesystem *)v25);
    std::wstring::_Tidy_deallocate((__int64)v25);
    if ( !std::filesystem::exists((std::filesystem *)Src, v12) )
    {
      v13 = (const WCHAR *)(i + 2);
      if ( i[5] >= 8uLL )
        v13 = *(const WCHAR **)v5;
      v14 = RegDeleteValueW(*(HKEY *)(v8 + 8), v13);
      v15 = retaddr;
      if ( v14 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x194,
          (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v14);
      v18 = &qword_1807B6CD8;
      _InterlockedIncrement64(&qword_1807B6CD8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2> )
      {
        winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics2<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::History(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>,
          &v17);
        _InterlockedDecrement64(&qword_1807B6CD8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1807B6CD8);
        v19 = _lambda_c0fabf41be1276bce350d62b8e95619d_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::call<winrt::Windows::UI::Notifications::ToastNotificationHistory (*)(winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 const &)>(
          (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v15,
          (__int64)&v17,
          (void (__fastcall **)(__int64, __int64 *))&v19);
      }
      winrt::param::hstring::create_string_reference(
        (winrt::param::hstring *)v20,
        L"Windows.SystemToast.StartupApp",
        30LL);
      if ( i[5] >= 8uLL )
        v5 = *(const unsigned __int16 **)v5;
      v16 = -1LL;
      do
        ++v16;
      while ( v5[v16] );
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v21, v5, v16);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        &v17,
        v21,
        v20);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    }
    result = (wil::details::in1diag3 **)std::wstring::_Tidy_deallocate((__int64)Src);
  }
  return result;
}

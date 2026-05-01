/*
 * XREFs of ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x18046E750
 * Callers:
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x18046E12C (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802D0A2E (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1803E5A3C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x180475368 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180747CB4 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CNetworkExperienceManager::ShowFlyout(
        __int64 a1,
        const struct Windows::Foundation::Rect *a2,
        int a3)
{
  _DWORD *v6; // rcx
  int v7; // esi
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  unsigned __int64 v15; // r9
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v6 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_180854AC7, 0LL, 0LL, 2u, &v18);
  v7 = 4;
  v18.Ptr = 0LL;
  *(_QWORD *)&v18.Size = 0LL;
  v19 = 0LL;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         &v18,
         (char *)L"Windows.Internal.ShellExperience.NetworkFlyout",
         0x2EuLL);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 127LL;
LABEL_15:
    v15 = (unsigned int)v8;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a1 + 104) )
  {
    v7 = 18;
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           &v18,
           (char *)L" ",
           1uLL);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 133LL;
      goto LABEL_15;
    }
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
           &v18,
           (char *)L"LogonWebHost",
           0xCuLL);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 134LL;
      goto LABEL_15;
    }
    *(_BYTE *)(a1 + 104) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 132LL) = v7;
  v12 = *(_QWORD *)(a1 + 48);
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v18, v9);
  v14 = CSingleViewShellExperience::SetArgs(
          (CSingleViewShellExperience *)(v12 + 72),
          (HSTRING)v13[1].Reserved.Reserved1);
  v10 = v14;
  if ( v14 >= 0 )
  {
    v8 = CBaseTrayFlyoutExperienceManager::ShowFlyout(*(CBaseTrayFlyoutExperienceManager **)(a1 + 48), a2, (HWND)a3);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v10 = 0;
      goto LABEL_18;
    }
    v11 = 141LL;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DD,
    (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
    (const char *)(unsigned int)v14);
  v15 = v10;
  v11 = 140LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\networkexperiencemanager.cpp",
    (const char *)v15);
LABEL_18:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
  return v10;
}

/*
 * XREFs of ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004D420
 * Callers:
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180049C0C (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x18004DBD8 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     _lambda_90acfd88701a8405d8a35a1b790a769f_::operator() @ 0x180194384 (_lambda_90acfd88701a8405d8a35a1b790a769f_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::IToastCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e72d6442786bf2af2755e0daaae830e1___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x180195380 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180195380.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c9e41158417a66ad4ebde63763de7538___ @ 0x180193F70 (Windows--Internal--ComTaskPool--QueueTask__lambda_c9e41158417a66ad4ebde63763de7538___.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SetWindowRegion(CControlCenterExperienceManager *this)
{
  ExperienceManagerUtils *v2; // rax
  HMONITOR v3; // rdx
  const char *v4; // r9
  int PerMonitorDpi; // eax
  int v6; // eax
  ExperienceManagerUtils *v7; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  HWND v9; // rbx
  LANGID ThreadUILanguage; // ax
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // r8
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  HWND v22; // [rsp+28h] [rbp-50h] BYREF
  bool v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+34h] [rbp-44h]
  int v25; // [rsp+44h] [rbp-34h]
  char v26; // [rsp+48h] [rbp-30h]
  __int128 v27; // [rsp+4Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((float *)this + 154) <= 0.0 || *((float *)this + 155) <= 0.0 )
    return 0LL;
  v2 = (ExperienceManagerUtils *)MonitorFromPoint(0LL, 1u);
  if ( v2 == (ExperienceManagerUtils *)-1LL )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2B9,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
             v4);
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(v2, v3);
  v6 = MulDiv(68, PerMonitorDpi, 96);
  v7 = (ExperienceManagerUtils *)*((_QWORD *)this + 18);
  *((_DWORD *)this + 177) = v6;
  v9 = ExperienceManagerUtils::WindowFromViewWrapper(v7, v8);
  ThreadUILanguage = GetThreadUILanguage();
  v11 = IsBiDiLocale(ThreadUILanguage);
  v12 = *((_OWORD *)this + 38);
  v13 = *((unsigned int *)this + 101);
  v14 = v11 == 0;
  v22 = v9;
  v15 = *((_DWORD *)this + 177);
  v24 = v12;
  v25 = v15;
  LOBYTE(v16) = !v14;
  v17 = *((_OWORD *)this + 39);
  LOBYTE(v15) = *((_BYTE *)this + 389);
  v23 = !v14;
  v27 = v17;
  v26 = v15;
  v19 = Windows::Internal::ComTaskPool::QueueTask__lambda_c9e41158417a66ad4ebde63763de7538___(v16, v18, v13, &v22);
  v20 = v19;
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v19,
      0);
  return v20;
}

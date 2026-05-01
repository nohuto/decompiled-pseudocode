/*
 * XREFs of ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422F24
 * Callers:
 *     _lambda_5d6125363dd4469ab2cf0b23e57b86eb_::operator() @ 0x1801DDD58 (_lambda_5d6125363dd4469ab2cf0b23e57b86eb_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::IToastCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ToastCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_e0e36e850bb9087e83a32bb00bf4d79a___1_Windows::Internal::Shell::Experience::IToastCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::Invoke @ 0x1801DEE40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801DEE40.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804217F8 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800D5CD4 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ce5931352d189bca3a201caf88f3b656___ @ 0x1801DD9F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_ce5931352d189bca3a201caf88f3b656___.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SetWindowRegion(CControlCenterExperienceManager *this)
{
  ExperienceManagerUtils *v2; // rax
  HMONITOR v3; // rdx
  const char *v4; // r9
  int PerMonitorDpi; // eax
  int v7; // eax
  ExperienceManagerUtils *v8; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v9; // rdx
  __int64 v10; // rbx
  LANGID ThreadUILanguage; // ax
  int v12; // eax
  __int128 v13; // xmm0
  unsigned int v14; // r8d
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  bool v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+34h] [rbp-44h]
  int v25; // [rsp+44h] [rbp-34h]
  char v26; // [rsp+48h] [rbp-30h]
  __int128 v27; // [rsp+4Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((float *)this + 168) <= 0.0 || *((float *)this + 169) <= 0.0 )
    return 0LL;
  v2 = (ExperienceManagerUtils *)MonitorFromPoint(0LL, 1u);
  if ( v2 == (ExperienceManagerUtils *)-1LL )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x333,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
             v4);
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(v2, v3);
  v7 = MulDiv(68, PerMonitorDpi, 96);
  v8 = (ExperienceManagerUtils *)*((_QWORD *)this + 18);
  *((_DWORD *)this + 191) = v7;
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(v8, v9);
  ThreadUILanguage = GetThreadUILanguage();
  v12 = IsBiDiLocale(ThreadUILanguage);
  v13 = *(_OWORD *)((char *)this + 664);
  v14 = *((_DWORD *)this + 115);
  v15 = v12 == 0;
  v22 = v10;
  v16 = *((_DWORD *)this + 191);
  v24 = v13;
  v25 = v16;
  LOBYTE(v17) = !v15;
  v18 = *(_OWORD *)((char *)this + 680);
  LOBYTE(v16) = *((_BYTE *)this + 445);
  v23 = !v15;
  v27 = v18;
  v26 = v16;
  v20 = Windows::Internal::ComTaskPool::QueueTask__lambda_ce5931352d189bca3a201caf88f3b656___(
          v17,
          v19,
          v14,
          (__int64)&v22);
  v21 = v20;
  if ( v20 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x375,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  return v21;
}

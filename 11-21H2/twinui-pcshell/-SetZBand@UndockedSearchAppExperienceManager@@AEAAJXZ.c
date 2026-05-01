/*
 * XREFs of ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180139078
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180138C4C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180139228 (-UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::SetZBand(UndockedSearchAppExperienceManager *this)
{
  unsigned int v3; // esi
  float v4; // xmm0_4
  float v5; // xmm1_4
  char IsEnabled; // al
  __int64 *v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  char v10; // al
  int v11; // ecx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetZBand();
  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  v3 = 13;
  v4 = *((float *)this + 30);
  v5 = *((float *)this + 31);
  v18[0] = (int)v4;
  v18[1] = (int)v5;
  v18[2] = (int)(float)(v4 + *((float *)this + 32));
  v18[3] = (int)(float)(v5 + *((float *)this + 33));
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl);
  v7 = (__int64 *)*((_QWORD *)this + 13);
  v8 = IsEnabled == 0;
  v9 = *v7;
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v9 + 32))(v7, v18);
    v11 = 13;
    if ( v10 )
      v11 = 6;
    v3 = v11;
  }
  else if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _DWORD *))(v9 + 40))(v7, v18) || *((_BYTE *)this + 776) )
  {
    v3 = 6;
  }
  v17 = 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
  v13 = **v12;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  v14 = v13(v12, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v17);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, v3);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x92D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    v15 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return v15;
}

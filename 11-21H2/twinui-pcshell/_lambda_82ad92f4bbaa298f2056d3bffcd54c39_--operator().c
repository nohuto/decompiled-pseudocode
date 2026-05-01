/*
 * XREFs of _lambda_82ad92f4bbaa298f2056d3bffcd54c39_::operator() @ 0x180191F34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_82ad92f4bbaa298f2056d3bffcd54c39___::Run @ 0x180193480 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_82ad92f4bbaa298f2056d3bffcd54c39___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@@Z @ 0x180162B94 (--$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180171EF0 (--$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shel.c)
 *     ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18017799C (--$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_82ad92f4bbaa298f2056d3bffcd54c39_::operator()(__int64 a1)
{
  int v2; // eax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (__int64 *)(a1 + 8),
    &v10);
  if ( v10 )
  {
    v9 = 0LL;
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(&v9);
    if ( v2 >= 0 )
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>(
        *(_QWORD *)a1 + 784LL,
        *(_QWORD *)a1,
        v9);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x497,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1187LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, bool))(*(_QWORD *)ppv + 72LL))(ppv, *(_BYTE *)(a1 + 16) != 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1190LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return v4;
}

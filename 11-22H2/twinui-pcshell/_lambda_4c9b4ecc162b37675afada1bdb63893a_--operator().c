/*
 * XREFs of _lambda_4c9b4ecc162b37675afada1bdb63893a_::operator() @ 0x180041F00
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c9b4ecc162b37675afada1bdb63893a___::Run @ 0x180041EF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c9b4ecc162b37675afada1bdb63893a___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180041FF4 (--$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIW.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180042038 (--$InvokeAll@PEAVCActionCenterExperienceManager@@PEAUIVisibilityChangedEventArgs@Experience@Shel.c)
 *     ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800420BC (--$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4c9b4ecc162b37675afada1bdb63893a_::operator()(__int64 a1)
{
  int v2; // eax
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int ppv; // [rsp+20h] [rbp-10h]
  int ppva; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  LPVOID v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    a1 + 8,
    &v12);
  if ( v12 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v2 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(&v10);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x518,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        ppv);
    else
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>(
        *(_QWORD *)a1 + 856LL,
        *(_QWORD *)a1,
        v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  v3 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 1316LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      ppva);
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, bool))(*(_QWORD *)v11 + 72LL))(v11, *(_BYTE *)(a1 + 16) != 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 1319LL;
    goto LABEL_11;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v4;
}

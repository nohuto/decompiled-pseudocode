/*
 * XREFs of ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x1804A3C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1802D65F2 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData **a2)
{
  int (*v4)(void); // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64); // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData **); // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = *(int (**)(void))(**((_QWORD **)this + 9) + 72LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v10);
  try
  {
    if ( v4() >= 0 )
    {
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        (__int64)this - 24,
        (__int64 *)&v11,
        2u,
        v10);
      if ( v11 )
      {
        v5 = (**v11)(v11, &GUID_727aa96d_54b9_4b3d_85fe_a5107ae79a05, a2);
        if ( v5 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1815,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            (const char *)(unsigned int)v5,
            v8);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6A,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           v6);
  }
  return result;
}

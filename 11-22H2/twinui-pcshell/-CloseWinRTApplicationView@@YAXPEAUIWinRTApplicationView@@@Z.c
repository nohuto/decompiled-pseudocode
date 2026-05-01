/*
 * XREFs of ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x1806275D8
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806234C0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x1802183CC (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180627530 (--$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIServi.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CloseWinRTApplicationView(struct IWinRTApplicationView *a1)
{
  __int64 v1; // rax
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // [rsp+58h] [rbp+20h] BYREF

  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a1;
  try
  {
    wil::com_query<IApplicationView,IWinRTApplicationView * &>(&v11, &v8);
    wil::CoCreateInstance<IServiceProvider,wil::err_exception_policy>(
      (__int64 *)&v10,
      &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239);
    v9 = 0LL;
    v1 = *v10;
    v9 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, __int64 *))(v1 + 24))(
           v10,
           &unk_1808A1418,
           &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
           &v9);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
        (const char *)(unsigned int)v2,
        v5);
    v3 = ApplicationViewHelpers::CloseView(v11, v9, 10, 1, 13);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x10,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
        (const char *)(unsigned int)v3,
        v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x12,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\apptermination.cpp",
      v4);
  }
}

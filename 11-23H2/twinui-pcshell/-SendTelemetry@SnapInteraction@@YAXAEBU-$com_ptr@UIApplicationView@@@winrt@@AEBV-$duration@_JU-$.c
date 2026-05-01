/*
 * XREFs of ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18066FDE8
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180224510 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$QEA_J@Z @ 0x18066F6BC (--$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$Q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapInteraction::SendTelemetry(
        __int64 (__fastcall ****a1)(ApplicationViewHelpers *, GUID *, __int64),
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 (__fastcall *v5)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  void **v6; // rax
  int v7; // eax
  struct IApplicationView *v8; // rdx
  const unsigned __int16 *v9; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 WindowForView; // [rsp+68h] [rbp+20h] BYREF

  pv = 0LL;
  v4 = *a1;
  v5 = (**a1)[17];
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), void **))v5)(
         v4,
         v6);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
      (const char *)(unsigned int)v7,
      (int)v9);
  WindowForView = ApplicationViewHelpers::GetWindowForView(*a1, v8);
  v12 = *a2 / 1000000000LL;
  v9 = (const unsigned __int16 *)pv;
  CSnapComponentTelemetry::SnappedAppUsage<unsigned short *,HWND__ * const &,__int64>(&v9, (HWND *)&WindowForView, &v12);
  if ( pv )
    CoTaskMemFree(pv);
}

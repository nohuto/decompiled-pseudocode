/*
 * XREFs of ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1805A0A50
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x1801BEC40 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$QEA_J@Z @ 0x1805A02DC (--$SnappedAppUsage@PEAGAEBQEAUHWND__@@_J@CSnapComponentTelemetry@@SAX$$QEAPEAGAEBQEAUHWND__@@$$Q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapInteraction::SendTelemetry(
        __int64 (__fastcall ****a1)(ApplicationViewHelpers *, GUID *, __int64),
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64); // rcx
  __int64 (__fastcall **v5)(ApplicationViewHelpers *, GUID *, __int64); // rax
  int v6; // eax
  struct IApplicationView *v7; // rdx
  const unsigned __int16 *v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 WindowForView; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = *a1;
  v5 = *v4;
  v10 = 0LL;
  v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), const unsigned __int16 **))v5[17])(
         v4,
         &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
      (const char *)(unsigned int)v6,
      (int)v8);
  WindowForView = ApplicationViewHelpers::GetWindowForView(*a1, v7);
  v11 = *a2 / 1000000000LL;
  v8 = v10;
  CSnapComponentTelemetry::SnappedAppUsage<unsigned short *,HWND__ * const &,__int64>(&v8, (HWND *)&WindowForView, &v11);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v10);
}

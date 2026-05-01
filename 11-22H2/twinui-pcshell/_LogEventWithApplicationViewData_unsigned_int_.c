/*
 * XREFs of _LogEventWithApplicationViewData_unsigned_int_ @ 0x1804A94A0
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180076440 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x1804A8CBC (--$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithApplicationViewData_unsigned_int_(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v5)(__int64, void **); // rbx
  void **v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID v11; // [rsp+30h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+38h] [rbp+10h] BYREF

  pv = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 136LL);
  v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v7 = v5(a1, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = pv;
    HolographicPositionerTelemetry::UnexpectedBackgroundActivation<unsigned short const *,unsigned int>(
      (__int64 *)&v11,
      a3);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v7);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v8;
}

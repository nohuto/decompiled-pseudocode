/*
 * XREFs of _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x1804A923C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180152FD0 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ManagedViewEvent@PEBGAEAY0L@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0L@$$CBG$$QEAI@Z @ 0x1804A8670 (--$ManagedViewEvent@PEBGAEAY0L@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0L@$$CBG$$.c)
 */

__int64 __fastcall LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(
        __int64 a1,
        LPVOID a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 (__fastcall *v6)(__int64, void **); // rbx
  void **v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID v12; // [rsp+38h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF

  v12 = a2;
  pv = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 136LL);
  v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v8 = v6(a1, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = pv;
    HolographicPositionerTelemetry::ManagedViewEvent<unsigned short const *,unsigned short const (&)[11],unsigned int>(
      (__int64 *)&v12,
      (__int64)L"AVC_HIDDEN",
      a4);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v8);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v9;
}

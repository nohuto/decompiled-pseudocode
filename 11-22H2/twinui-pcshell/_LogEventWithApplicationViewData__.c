/*
 * XREFs of _LogEventWithApplicationViewData__ @ 0x1804A90A8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x1801BF1E0 (CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___--Invoke.c)
 *     ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804AC130 (-HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804AE51C (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AEF1C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithApplicationViewData__(__int64 a1, void (__fastcall *a2)(LPVOID *))
{
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v11; // [rsp+40h] [rbp+18h] BYREF

  pv = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 136LL);
  v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v6 = v4(a1, v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = pv;
    a2(&v11);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\TelemetryHelpers.h",
      (const char *)(unsigned int)v6);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return v7;
}

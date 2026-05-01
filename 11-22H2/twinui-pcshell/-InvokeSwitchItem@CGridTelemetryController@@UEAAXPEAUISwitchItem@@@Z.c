/*
 * XREFs of ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18058A370
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x180571EB4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ??$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z @ 0x180589F5C (--$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x18058A660 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGridTelemetryController::InvokeSwitchItem(
        CGridTelemetryController *this,
        __int64 (__fastcall ***a2)(SwitchItemTelemetry *, GUID *, __int64 *))
{
  void **v4; // rax
  unsigned __int16 **v5; // r8
  int AppId; // eax
  __int64 v7; // rcx
  unsigned __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+18h] BYREF
  const unsigned __int16 *v12; // [rsp+58h] [rbp+20h] BYREF

  if ( CGridTelemetryController::_GetIndexOfItem(this, (struct ISwitchItem *)a2, v8) >= 0 )
  {
    pv = 0LL;
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    AppId = SwitchItemTelemetry::ExtractAppId(a2, (struct ISwitchItem *)v4, v5);
    if ( AppId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridtelemetry.cpp",
        (const char *)(unsigned int)AppId);
    v12 = (const unsigned __int16 *)pv;
    v10 = 0;
    MultitaskingViewTelemetry::SwitchItemInvoked<unsigned __int64 &,int,unsigned short *>(v8, &v10, &v12);
    if ( pv )
      CoTaskMemFree(pv);
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(SwitchItemTelemetry *, GUID *, __int64 *)))(*(_QWORD *)v7 + 56LL))(
      v7,
      a2);
}

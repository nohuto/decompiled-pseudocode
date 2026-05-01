/*
 * XREFs of ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804D29F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804B4AE4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ??$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z @ 0x1804D25E0 (--$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1804D2CC0 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGridTelemetryController::InvokeSwitchItem(
        CGridTelemetryController *this,
        __int64 (__fastcall ***a2)(SwitchItemTelemetry *, GUID *, __int64 *))
{
  unsigned __int16 **v4; // r8
  int AppId; // eax
  __int64 v6; // rcx
  unsigned __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v10; // [rsp+50h] [rbp+18h] BYREF
  const unsigned __int16 *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( CGridTelemetryController::_GetIndexOfItem(this, (struct ISwitchItem *)a2, v7) >= 0 )
  {
    v10 = 0LL;
    AppId = SwitchItemTelemetry::ExtractAppId(a2, (struct ISwitchItem *)&v10, v4);
    if ( AppId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridtelemetry.cpp",
        (const char *)(unsigned int)AppId);
    v11 = v10;
    v9 = 0;
    MultitaskingViewTelemetry::SwitchItemInvoked<unsigned __int64 &,int,unsigned short *>(v7, &v9, &v11);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v10);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(SwitchItemTelemetry *, GUID *, __int64 *)))(*(_QWORD *)v6 + 56LL))(
      v6,
      a2);
}

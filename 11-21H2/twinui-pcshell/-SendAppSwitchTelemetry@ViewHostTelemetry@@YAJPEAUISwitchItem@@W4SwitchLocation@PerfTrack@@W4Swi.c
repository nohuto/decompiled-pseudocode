/*
 * XREFs of ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1804BD838
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804AD880 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B4280 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804B4AE4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1804BD51C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHostTelemetry::SendAppSwitchTelemetry(
        __int64 (__fastcall ***a1)(SwitchItemTelemetry *, GUID *, __int64 *),
        unsigned int a2,
        unsigned __int16 **a3)
{
  int AppId; // ebx
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF
  void *v6; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = a2;
  v5 = 0;
  v8 = 0LL;
  AppId = SwitchItemTelemetry::ExtractAppId(a1, (struct ISwitchItem *)&v8, a3);
  if ( AppId >= 0 )
  {
    v6 = v8;
    PerfTrack::AppSwitchTelemetry::AppSwitched<enum PerfTrack::SwitchLocation &,unsigned short *,enum PerfTrack::SwitchInvokeMethod &>(
      &v7,
      &v6,
      &v5);
    AppId = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v8);
  return (unsigned int)AppId;
}

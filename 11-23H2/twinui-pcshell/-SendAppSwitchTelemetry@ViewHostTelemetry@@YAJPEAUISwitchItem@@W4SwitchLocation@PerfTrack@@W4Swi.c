/*
 * XREFs of ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1805781C8
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18056A2E0 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x180571EB4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x180577E5C (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHostTelemetry::SendAppSwitchTelemetry(
        __int64 (__fastcall ***a1)(SwitchItemTelemetry *, GUID *, __int64 *),
        unsigned int a2)
{
  void **v3; // rax
  unsigned __int16 **v4; // r8
  int AppId; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  LPVOID v8[2]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  v7 = 0;
  pv = 0LL;
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  AppId = SwitchItemTelemetry::ExtractAppId(a1, (struct ISwitchItem *)v3, v4);
  if ( AppId >= 0 )
  {
    v8[0] = pv;
    PerfTrack::AppSwitchTelemetry::AppSwitched<enum PerfTrack::SwitchLocation &,unsigned short *,enum PerfTrack::SwitchInvokeMethod &>(
      &v9,
      v8,
      &v7);
    AppId = 0;
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)AppId;
}

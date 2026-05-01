/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x180143640
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_57dacf7fd65ae5979a4de013971663d7_@@@Z @ 0x180143684 (--$DoInvoke@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall VirtualDesktop::ViewVirtualDesktopChanged(VirtualDesktop *this, struct IApplicationView *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF
  char *v5; // [rsp+50h] [rbp+18h] BYREF

  v4 = 3;
  v5 = (char *)this - 16;
  v3[0] = &v5;
  v3[1] = &v4;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_57dacf7fd65ae5979a4de013971663d7_>(
    (char *)this + 64,
    v3);
  return 0LL;
}

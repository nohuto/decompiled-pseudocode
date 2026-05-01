/*
 * XREFs of ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180230606
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18048FE50 (-CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18048FFDC (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1804901C0 (-VirtualDesktopNameChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180490220 (-VirtualDesktopWallpaperChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_57dacf7fd65ae5979a4de013971663d7_@@@Z @ 0x180143684 (--$DoInvoke@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  *(_QWORD *)&v4 = &v5;
  *((_QWORD *)&v4 + 1) = &v6;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_57dacf7fd65ae5979a4de013971663d7_>(
           a1,
           &v4);
}

/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A7164
 * Callers:
 *     ??1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ @ 0x1800A712C (--1AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAA@XZ.c)
 *     ??1VirtualDesktopController@@UEAA@XZ @ 0x180177A1C (--1VirtualDesktopController@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803C98B0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktopController@Multitaski.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 56));
}

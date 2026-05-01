/*
 * XREFs of ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x180114E28
 * Callers:
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18003B500 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?Hide@XamlLauncher@@UEAAJXZ @ 0x1801139C0 (-Hide@XamlLauncher@@UEAAJXZ.c)
 *     ?IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z @ 0x180114DA0 (-IsCortanaShowing@XamlLauncher@@UEAAJPEAH@Z.c)
 *     ?SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z @ 0x18044BC40 (-SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z.c)
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18044BD80 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18044C340 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce, a2);
}

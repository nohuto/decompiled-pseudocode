/*
 * XREFs of ??$MakeAndInitialize@VHotkeyHandler@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyHandler@@AEAPEAUIPriviledgedPositioner@@AEAPEAUISnapAssistController@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationViewCollection@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUITabletModeController@@@Z @ 0x1800FF3E4
 * Callers:
 *     ?SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FF650 (-SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x1800FD824 (-RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistControlle.c)
 *     ??0HotkeyHandler@@QEAA@XZ @ 0x1800FF4E4 (--0HotkeyHandler@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyHandler,HotkeyHandler,IPriviledgedPositioner * &,ISnapAssistController * &,IImmersiveMonitorManager * &,IApplicationViewCollection * &,IImmersiveSettingsCache * &,ITabletModeController * &>(
        HotkeyHandler **a1,
        struct IPriviledgedPositioner **a2,
        struct ISnapAssistController **a3,
        struct IImmersiveMonitorManager **a4,
        struct IApplicationViewCollection **a5,
        struct IImmersiveSettingsCache **a6,
        struct ITabletModeController **a7)
{
  HotkeyHandler *v11; // rax
  HotkeyHandler *v12; // rbx
  int v13; // esi
  HotkeyHandler *v15; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (HotkeyHandler *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = HotkeyHandler::HotkeyHandler(v11);
    v15 = v12;
    v13 = HotkeyHandler::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v13 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(HotkeyHandler *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}

/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003E7F4
 * Callers:
 *     ??0ForegroundManager@@AEAA@XZ @ 0x18003D7DC (--0ForegroundManager@@AEAA@XZ.c)
 *     ??$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@AEA_K1AEA_N@Z @ 0x18009B08C (--$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@.c)
 *     ??0Context@ShellGesturesProcessor@@QEAA@XZ @ 0x18016E750 (--0Context@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801777DC (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0DeviceState@MagnifierProcessor@@QEAA@XZ @ 0x1801CD750 (--0DeviceState@MagnifierProcessor@@QEAA@XZ.c)
 *     ??0VirtualHotKeyTracker@@QEAA@XZ @ 0x1801D07F8 (--0VirtualHotKeyTracker@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x1801EF140 (--$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}

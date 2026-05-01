/*
 * XREFs of ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18002FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180030494 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x18007439C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180074498 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1802E5D6C (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  WindowSizeConverter *v6; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationFrame *v9; // [rsp+50h] [rbp+20h] BYREF
  char v10; // [rsp+68h] [rbp+38h] BYREF

  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 + 24)) && *(_DWORD *)(a1 + 56) )
  {
    if ( (a3 & 0x20) != 0
      && (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v9) >= 0 )
    {
      if ( (_DWORD)v9 )
      {
        WindowSizeConverter::EnsureEntry((WindowSizeConverter *)(a1 - 96), a2);
      }
      else if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, char *))(*(_QWORD *)a2 + 24LL))(a2, &v10) >= 0 )
      {
        v8[0] = a1 - 96;
        v8[1] = &v10;
        wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___(v8);
      }
    }
    if ( (a3 & 0x10) != 0 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
      if ( (int)WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)(a1 - 96), a2, &v9) >= 0 )
        WindowSizeConverter::EnsurePosition(v6, a2, v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    }
  }
  return 0LL;
}

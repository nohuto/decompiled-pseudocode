/*
 * XREFs of ?ActivateInstance@IActivationFactory@Details@Platform@@UE$AAAPE$AAVObject@3@XZ @ 0x18007EB38
 * Callers:
 *     ??0TaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18007E9A4 (--0TaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18007EE48 (--0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0AltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18076222C (--0AltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x1807627D0 (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??0SnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x180769EF8 (--0SnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0VirtualDesktopBarElement@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18077141C (--0VirtualDesktopBarElement@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Platform::Details::IActivationFactory::ActivateInstance(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v4);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    JUMPOUT(0x18007EBA3LL);
  }
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}

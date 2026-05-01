/*
 * XREFs of ?ActivateInstance@IActivationFactory@Details@Platform@@UE$AAAPE$AAVObject@3@XZ @ 0x1800F518C
 * Callers:
 *     ??0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x180014BD0 (--0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0TaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x1800157A4 (--0TaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0TimelineHost@TimelineUI@@QE$AAA@XZ @ 0x180015CF4 (--0TimelineHost@TimelineUI@@QE$AAA@XZ.c)
 *     ??0XamlControlsResources@Controls@Xaml@UI@Microsoft@@QE$AAA@XZ @ 0x1800F5D84 (--0XamlControlsResources@Controls@Xaml@UI@Microsoft@@QE$AAA@XZ.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x18042DABC (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??0AltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x1805F8E74 (--0AltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0SnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x1806004D0 (--0SnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??0VirtualDesktopBarElement@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x1806075F8 (--0VirtualDesktopBarElement@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
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
    __debugbreak();
  }
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}

/*
 * XREFs of ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C
 * Callers:
 *     ?OnDisconnecting@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800117C0 (-OnDisconnecting@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RemoveVisual@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180014750 (-RemoveVisual@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z.c)
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ @ 0x18002885C (-CleanUpAllChildren@Visual@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180196E18 (-SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?RemoveVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180198D90 (-RemoveVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?DoUnlinkAndUnlock@?$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ @ 0x18006AA84 (-DoUnlinkAndUnlock@-$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z @ 0x18010153C (-OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::RemoveChild(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Visual *a2)
{
  char *v2; // rsi
  __int64 v5; // rdx
  int v6; // ebp
  int v7; // esi
  DirectComposition::CDevice *v8; // rbx
  _DWORD *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)a2 + 136;
  if ( *((Windows::UI::Composition::Visual **)a2 + 17) == this )
  {
    if ( a2 && _InterlockedIncrement((volatile signed __int32 *)a2 + 4) == 1 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::Visual *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
      Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualRemoved(a2);
    Windows::UI::Composition::TreeNodeT<Windows::UI::Composition::Visual>::DoUnlinkAndUnlock(v2);
    v6 = *((_DWORD *)this + 32);
    if ( v6 )
    {
      v7 = *((_DWORD *)a2 + 32);
      if ( v7 )
      {
        v8 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
        DirectComposition::CDevice::BeginKernelCommand(v8, 0xCu, &v13, 0);
        v9 = v13;
        *(_DWORD *)v13 = 20;
        v9[1] = v6;
        v9[2] = v7;
        v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v8 + 10);
        if ( v10 )
          (**v10)(v10);
      }
    }
    if ( a2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v5) = 1;
        (*(void (__fastcall **)(struct Windows::UI::Composition::Visual *, __int64))(*(_QWORD *)a2 + 64LL))(a2, v5);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x569,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}

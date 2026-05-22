/*
 * XREFs of ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08
 * Callers:
 *     ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0 (-EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98 (-EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015F88 (-EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?AddVisual@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z @ 0x180060A10 (-AddVisual@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?OnConnected@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x18008CFD0 (-OnConnected@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18015A164 (-SetRoot@CompositionIslandTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?InsertBelow@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z @ 0x1801965F0 (-InsertBelow@Api@VisualCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@0@Z.c)
 *     ?SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180196E18 (-SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?AddVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z @ 0x180198910 (-AddVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z @ 0x180061EB4 (-VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z.c)
 *     ?DoLinkAndLock@?$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@KAXPEAVVisual@234@00_N@Z @ 0x180061F2C (-DoLinkAndLock@-$TreeNodeT@VVisual@Composition@UI@Windows@@@Composition@UI@Windows@@KAXPEAVVisua.c)
 *     ?OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z @ 0x1801013B0 (-OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::InsertChild(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Visual *a2,
        unsigned __int8 a3,
        Windows::UI::Composition::Visual **a4)
{
  Windows::UI::Composition::Visual **v4; // rbx
  int v5; // ebp
  unsigned int v8; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  if ( *((_QWORD *)a2 + 17) )
  {
    v10 = 1312LL;
    goto LABEL_12;
  }
  if ( a4 && a4[17] != this )
  {
    v10 = 1317LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  LOBYTE(a4) = a3;
  Windows::UI::Composition::TreeNodeT<Windows::UI::Composition::Visual>::DoLinkAndLock(this, a2, v4, a4);
  if ( v4 )
    v8 = *((_DWORD *)v4 + 32);
  else
    v8 = 0;
  DirectComposition::CDevice::VisualAddChild(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    *((_DWORD *)a2 + 32),
    v5,
    v8);
  if ( Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered )
    Windows::UI::Composition::CompositionDiagnosticsInterop::OnVisualAdded(
      a2,
      this,
      (struct Windows::UI::Composition::Visual *)v4,
      v5);
  return 0LL;
}

/*
 * XREFs of ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007DA70
 * Callers:
 *     ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AC8D0 (-Release@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompos_ea_1800AC8D0.c)
 *     ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AC8F0 (-Release@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompos_ea_1800AC8F0.c)
 *     ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AC910 (-Release@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompos_ea_1800AC910.c)
 *     ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800AC930 (-Release@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompos_ea_1800AC930.c)
 *     ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800AC950 (-Release@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompos_ea_1800AC950.c)
 *     ?Release@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WDA@EAAKXZ @ 0x1800AC970 (-Release@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompos_ea_1800AC970.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InteropCompositor,IDCompositionDevice,IDCompositionDevice3,IDCompositionDesktopDevicePartner6,IDCompositionDesktopDeviceRestricted,IDCompositionDeviceInternal,IDCompositionDeviceDebug,Windows::UI::Composition::IInteropCompositorPartner>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 1200);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}

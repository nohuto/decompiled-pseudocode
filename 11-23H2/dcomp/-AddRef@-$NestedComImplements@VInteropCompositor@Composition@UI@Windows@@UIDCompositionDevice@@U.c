/*
 * XREFs of ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007DAC0
 * Callers:
 *     ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB8F0 (-AddRef@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDComposi_ea_1800AB8F0.c)
 *     ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AB910 (-AddRef@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDComposi_ea_1800AB910.c)
 *     ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AB930 (-AddRef@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDComposi_ea_1800AB930.c)
 *     ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800AB950 (-AddRef@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDComposi_ea_1800AB950.c)
 *     ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WCI@EAAKXZ @ 0x1800AB970 (-AddRef@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDComposi_ea_1800AB970.c)
 *     ?AddRef@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionDevice@@UIDCompositionDevice3@@UIDCompositionDesktopDevicePartner6@@UIDCompositionDesktopDeviceRestricted@@UIDCompositionDeviceInternal@@UIDCompositionDeviceDebug@@UIInteropCompositorPartner@234@@WRL2@Microsoft@@WDA@EAAKXZ @ 0x1800AB990 (-AddRef@-$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDComposi_ea_1800AB990.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InteropCompositor,IDCompositionDevice,IDCompositionDevice3,IDCompositionDesktopDevicePartner6,IDCompositionDesktopDeviceRestricted,IDCompositionDeviceInternal,IDCompositionDeviceDebug,Windows::UI::Composition::IInteropCompositorPartner>::AddRef(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)(a1 - 1200);
  v2 = _InterlockedIncrement(v1 + 4);
  if ( v2 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 80LL))(v1);
  return v2;
}

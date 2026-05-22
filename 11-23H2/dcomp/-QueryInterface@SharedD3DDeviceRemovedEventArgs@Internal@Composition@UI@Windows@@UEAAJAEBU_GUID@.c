/*
 * XREFs of ?QueryInterface@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A62B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0DC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800B0DC0.c)
 *     ?QueryInterface@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0DE0 (-QueryInterface@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@WCI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0E00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800B0E00.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>>(
           this,
           a2,
           a3);
}

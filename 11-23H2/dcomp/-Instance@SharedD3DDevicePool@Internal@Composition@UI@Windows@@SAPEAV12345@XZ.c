/*
 * XREFs of ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC
 * Callers:
 *     ??$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800A0FF4 (--$MakeAndInitialize@VSharedD3DDevice@Internal@Composition@UI@Windows@@UIInspectable@@$$V@Detail.c)
 *     ??1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ @ 0x1800A275C (--1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ.c)
 *     ?CreateDeviceOnAdapter@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A27E0 (-CreateDeviceOnAdapter@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUID3D.c)
 *     ?CreateHardwareDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z @ 0x1800A2830 (-CreateHardwareDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@.c)
 *     ?CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z @ 0x1800A28B0 (-CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z.c)
 *     ?add_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800A2BC0 (-add_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAU-$IEventHandler@PEA.c)
 *     ?get_IsValid@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1800A2C10 (-get_IsValid@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?remove_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800A2C50 (-remove_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationTo.c)
 * Callees:
 *     atexit @ 0x1800961FC (atexit.c)
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 *     ??$make_shared@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@$$V@std@@YA?AV?$shared_ptr@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@@0@XZ @ 0x1800A4B08 (--$make_shared@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@$$V@std@@YA-AV-$shared_ptr@.c)
 */

struct Windows::UI::Composition::Internal::SharedD3DDevicePool *Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance(
        void)
{
  if ( dword_180220B08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180220B08);
    if ( dword_180220B08 == -1 )
    {
      std::make_shared<Windows::UI::Composition::Internal::SharedD3DDevicePool,>();
      atexit(Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance_::_2_::_dynamic_atexit_destructor_for__pool__);
      Init_thread_footer(&dword_180220B08);
    }
  }
  return (struct Windows::UI::Composition::Internal::SharedD3DDevicePool *)qword_180220B10;
}

/*
 * XREFs of ??R?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@QEBAXPEAVDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@Z @ 0x1800A52B4
 * Callers:
 *     ??1?$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4FA8 (--1-$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U-$default_delete@VDeviceR.c)
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A5060 (--1DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::operator()(
        __int64 a1,
        Windows::UI::Composition::Internal::DeviceRemovedWaiter *a2)
{
  if ( a2 )
  {
    Windows::UI::Composition::Internal::DeviceRemovedWaiter::~DeviceRemovedWaiter(a2);
    operator delete(a2);
  }
}

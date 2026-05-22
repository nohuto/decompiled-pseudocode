/*
 * XREFs of ??1?$unique_ptr@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@U?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800A4FA8
 * Callers:
 *     ??1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A51A0 (--1SharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 * Callees:
 *     ??R?$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@QEBAXPEAVDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@Z @ 0x1800A52B4 (--R-$default_delete@VDeviceRemovedWaiter@Internal@Composition@UI@Windows@@@std@@QEBAXPEAVDeviceR.c)
 */

__int64 __fastcall std::unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::~unique_ptr<Windows::UI::Composition::Internal::DeviceRemovedWaiter>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Windows::UI::Composition::Internal::DeviceRemovedWaiter>::operator()();
  return result;
}

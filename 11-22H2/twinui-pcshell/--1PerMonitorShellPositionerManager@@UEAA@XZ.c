/*
 * XREFs of ??1PerMonitorShellPositionerManager@@UEAA@XZ @ 0x1801B3298
 * Callers:
 *     ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x1801B325C (--_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall PerMonitorShellPositionerManager::~PerMonitorShellPositionerManager(
        PerMonitorShellPositionerManager *this)
{
  `eh vector destructor iterator'(
    (char *)this + 104,
    8uLL,
    0xAuLL,
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>);
  *((_DWORD *)this + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((PerMonitorShellPositionerManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}

/*
 * XREFs of ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1800B668C
 * Callers:
 *     ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x1800B65C0 (-UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z.c)
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1800B6940 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x1802EF330 (--1-$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ.c)
 * Callees:
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1800B7328 (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveMode::DesktopVisibilityChangeListener *__fastcall CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(
        CImmersiveMode::DesktopVisibilityChangeListener *this)
{
  unsigned int v2; // ecx

  v2 = *(_DWORD *)this;
  if ( v2 )
    GlobalInterfaceTable::Revoke(v2);
  operator delete(this, 8uLL);
  return this;
}

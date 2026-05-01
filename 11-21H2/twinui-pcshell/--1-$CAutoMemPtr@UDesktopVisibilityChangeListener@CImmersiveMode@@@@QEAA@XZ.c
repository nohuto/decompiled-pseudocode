/*
 * XREFs of ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x1802EF330
 * Callers:
 *     _CImmersiveMode::RegisterForDesktopVisibilityChanges_::_1_::dtor$1 @ 0x18021B8E2 (_CImmersiveMode--RegisterForDesktopVisibilityChanges_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1800B668C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 */

CImmersiveMode::DesktopVisibilityChangeListener *__fastcall CAutoMemPtr<CImmersiveMode::DesktopVisibilityChangeListener>::~CAutoMemPtr<CImmersiveMode::DesktopVisibilityChangeListener>(
        CImmersiveMode::DesktopVisibilityChangeListener **a1)
{
  CImmersiveMode::DesktopVisibilityChangeListener *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(result);
  return result;
}

/*
 * XREFs of ??1?$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ @ 0x1803A7C38
 * Callers:
 *     _CImmersiveMode::_RegisterDesktopVisibilitySource_::_1_::dtor$3 @ 0x1802C560A (_CImmersiveMode--_RegisterDesktopVisibilitySource_--_1_--dtor$3.c)
 * Callees:
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802CFE7C (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 */

HWND *__fastcall CAutoMemPtr<CImmersiveMode::CDesktopVisibilityChangeSource>::~CAutoMemPtr<CImmersiveMode::CDesktopVisibilityChangeSource>(
        HWND **a1)
{
  HWND *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(result);
  return result;
}

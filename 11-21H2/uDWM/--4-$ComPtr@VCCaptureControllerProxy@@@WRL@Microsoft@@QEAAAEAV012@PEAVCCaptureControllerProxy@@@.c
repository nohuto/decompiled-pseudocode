/*
 * XREFs of ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800CB944
 * Callers:
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CEBC4 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CF0F8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v2; // rax
  CBaseObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != (CBaseObject *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v2 = *a1;
    }
    *a1 = (CBaseObject *)a2;
    v5 = v2;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v5);
  }
  return a1;
}

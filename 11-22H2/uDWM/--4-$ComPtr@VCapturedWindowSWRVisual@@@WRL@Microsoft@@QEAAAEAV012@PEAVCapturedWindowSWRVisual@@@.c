/*
 * XREFs of ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x1800D00D8
 * Callers:
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D41C8 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D59C0 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rax
  CBaseObject *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != (CBaseObject *)a2 )
  {
    if ( a2 )
      _InterlockedIncrement(a2 + 2);
    v3 = *a1;
    *a1 = (CBaseObject *)a2;
    v5 = v3;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v5);
  }
  return a1;
}

/*
 * XREFs of wil::details::lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___::_lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___ @ 0x1800667FC
 * Callers:
 *     ?CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801140E0 (-CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProx.c)
 *     _CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters_::_1_::dtor$3 @ 0x1801142AF (_CBtAudioResourceManager--CreateHfpRenderSaDeviceWithDefaultParameters_--_1_--dtor$3.c)
 * Callees:
 *     ?NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z @ 0x180066A50 (-NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___::_lambda_call__lambda_6b2b64412140cbdd2cb9231d8e9c566d___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CBtAudioResourceManager::NotifyStreamChange(*(CBtAudioResourceManager **)a1, 0);
  }
}

/*
 * XREFs of wil::details::lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___::_lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___ @ 0x1800F5450
 * Callers:
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7000 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEA.c)
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$3 @ 0x1800F71FF (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParame_ea_1800F71FF.c)
 * Callees:
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800F9840 (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___::_lambda_call__lambda_254961bb12f0535cea5e965be1582e8b___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CBtAudioResourceManagerBase::NotifyStreamChange(*(CBtAudioResourceManagerBase **)a1, 0);
  }
}

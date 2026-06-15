/*
 * XREFs of wil::details::lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___::_lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___ @ 0x14006E4CC
 * Callers:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x140035BA2 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___::_lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}

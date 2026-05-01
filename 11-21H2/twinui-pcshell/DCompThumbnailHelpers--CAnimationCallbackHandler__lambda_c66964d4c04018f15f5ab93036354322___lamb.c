/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::_CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x180531808
 * Callers:
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::_scalar_deleting_destructor_ @ 0x180531A70 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036_ea_180531A70.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___::_CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___(
        __int64 a1)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 32));
  result = Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}

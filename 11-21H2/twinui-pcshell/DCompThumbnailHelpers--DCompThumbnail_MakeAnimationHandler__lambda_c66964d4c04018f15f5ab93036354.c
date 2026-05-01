/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x1805310E4
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x180530FDC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a_____lambda_c66964d4c04018f15f5ab93036354322__&__lambda_6322593fd6617ded31d0a35e6b081f9a__&_IDCompBatchAnimationCallback___&_ @ 0x180531388 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_c66964d4c.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___(
        __int64 a1,
        __int64 *a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *),
        _QWORD *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v7; // edi
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  *a4 = 0LL;
  v9[0] = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *), __int64 *, __int64 *, __int64 *))Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a_____lambda_c66964d4c04018f15f5ab93036354322_____lambda_6322593fd6617ded31d0a35e6b081f9a____IDCompBatchAnimationCallback_____)(
    &v10,
    a2,
    a2,
    v9);
  v6 = v10;
  if ( v10 )
  {
    v7 = (**v10)(v10, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a2);
  return v7;
}

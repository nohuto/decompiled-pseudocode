/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x180216E9C
 * Callers:
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba_____lambda_7bba5397718b556fa4d56bb755ea96c8__&__lambda_3f2017e679634d121ef035a0678ae2ba__&_IDCompBatchAnimationCallback___&_ @ 0x180216670 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7bba53977.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1805550F8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___::CAnimationCallbackHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>();
  *(_QWORD *)a1 = off_1807C7F78;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 40) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  return a1;
}

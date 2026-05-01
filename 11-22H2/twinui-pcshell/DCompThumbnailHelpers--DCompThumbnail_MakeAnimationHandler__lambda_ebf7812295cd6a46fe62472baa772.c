/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x180595ECC
 * Callers:
 *     ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180596270 (-AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@Item.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x180595E18 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186f.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned int AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *a3 = 0LL;
  v5 = *a1;
  v8 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(0LL, &v8, (__int64)a3, a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  return AnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73;
}

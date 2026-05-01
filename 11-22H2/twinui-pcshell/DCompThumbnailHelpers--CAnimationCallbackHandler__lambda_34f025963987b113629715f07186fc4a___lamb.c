/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x180596040
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x180595E18 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_34f025963987b113629715f07186f.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x1805550F8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v7; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>((__int64)a1);
  *a1 = off_1807E9C60;
  v7 = *a3;
  a1[3] = *a3;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  a1[4] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  return a1;
}

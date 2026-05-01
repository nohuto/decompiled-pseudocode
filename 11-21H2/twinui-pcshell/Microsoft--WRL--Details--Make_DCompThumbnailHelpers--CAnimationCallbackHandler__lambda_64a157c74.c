/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_64a157c7491276baeb84d23bfd8f55fb___lambda_206313859f817381264bae84b9bbf37b_____lambda_64a157c7491276baeb84d23bfd8f55fb__&__lambda_206313859f817381264bae84b9bbf37b__&_IDCompBatchAnimationCallback___&_ @ 0x1804C8278
 * Callers:
 *     ?AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804C83E0 (-AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItem.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x18049BB4C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_64a157c7491276baeb84d23bfd8f55fb___lambda_206313859f817381264bae84b9bbf37b_____lambda_64a157c7491276baeb84d23bfd8f55fb_____lambda_206313859f817381264bae84b9bbf37b____IDCompBatchAnimationCallback_____(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = *a4;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>((__int64)v6);
    *v7 = off_18065EF70;
    v7[3] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v7;
  }
  return a1;
}

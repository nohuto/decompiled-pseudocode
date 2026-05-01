/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18054EC30
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18054E050 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x18049BB4C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1804D6F30 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 */

_QWORD *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>((__int64)a1);
  *a1 = off_180665CD8;
  lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_((__int64)(a1 + 3), a3);
  a1[5] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  return a1;
}

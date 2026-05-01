/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18054ED18
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18054E1F0 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_8b6332ece26b147aeb862ef6a363e.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x18049BB4C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1804D6F30 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 */

_QWORD *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___(
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

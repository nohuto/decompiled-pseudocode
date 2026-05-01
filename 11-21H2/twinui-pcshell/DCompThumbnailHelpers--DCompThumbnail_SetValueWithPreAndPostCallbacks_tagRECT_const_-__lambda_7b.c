/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054E544
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054E2C0 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x18020C4C0 (--_9IDCompThumbnail@@$BBI@AA.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1804D6F30 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054E120 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea9.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 *a6)
{
  __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba; // ebx
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v7 = a6;
  v8 = (__int64 *)lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_(
                    (__int64)v14,
                    (__int64)a6);
  LOBYTE(v9) = a5;
  AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba___(v9, v8, v10, &v15);
  if ( AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba >= 0 )
    AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba =  IDCompThumbnail::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v12 = *v7;
  if ( *v7 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)AnimationHandler__lambda_7bba5397718b556fa4d56bb755ea96c8___lambda_3f2017e679634d121ef035a0678ae2ba;
}

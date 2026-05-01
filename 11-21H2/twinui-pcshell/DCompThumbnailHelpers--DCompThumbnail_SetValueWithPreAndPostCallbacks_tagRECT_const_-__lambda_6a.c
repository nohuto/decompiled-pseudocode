/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18054E474
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18054E3D8 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x18020C4C0 (--_9IDCompThumbnail@@$BBI@AA.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1804D6F30 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18054E050 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
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
  int AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed; // ebx
  __int64 v12; // rcx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v7 = a6;
  v8 = (__int64 *)lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_(
                    (__int64)v14,
                    (__int64)a6);
  LOBYTE(v9) = a5;
  AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(v9, v8, v10, &v15);
  if ( AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed >= 0 )
    AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed =  IDCompThumbnail::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  v12 = *v7;
  if ( *v7 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed;
}

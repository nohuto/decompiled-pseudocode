/*
 * XREFs of ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804D6E68
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804D7A08 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804D6C30 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1804D6F30 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  int AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v13[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  v7 = (__int64 *)lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_(v14, a4);
  AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                                                                v7,
                                                                v8,
                                                                v13);
  v10 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
  if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 < 0 )
  {
    v11 = 458LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413);
    goto LABEL_6;
  }
  AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(
                                                                *(_QWORD *)(a1 + 48),
                                                                a2,
                                                                3LL,
                                                                v13[0]);
  v10 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
  if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 < 0 )
  {
    v11 = 459LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  return v10;
}

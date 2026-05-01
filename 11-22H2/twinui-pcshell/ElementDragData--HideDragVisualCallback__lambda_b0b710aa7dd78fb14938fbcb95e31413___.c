/*
 * XREFs of ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E74C
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x18058F7C8 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x18058E700 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::_lambda_b0b710aa7dd78fb14938fbcb95e31413_ @ 0x18058ECEC (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--_lambda_b0b710aa7dd78fb14938fbcb95e31413_.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18058F308 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 *v9; // rax
  __int64 v10; // rdx
  int AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413; // eax
  __int64 v12; // rdx
  _BYTE v13[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    v9 = (__int64 *)lambda_b0b710aa7dd78fb14938fbcb95e31413_::_lambda_b0b710aa7dd78fb14938fbcb95e31413_(v13, a3);
    AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
                                                                  v9,
                                                                  v10,
                                                                  &v15);
    v7 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
    if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 >= 0 )
    {
      AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 48) + 40LL))(
                                                                    *(_QWORD *)(a1 + 48),
                                                                    v4,
                                                                    v15);
      v7 = AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413;
      if ( AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
        return v7;
      }
      v12 = 450LL;
    }
    else
    {
      v12 = 449LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_b0b710aa7dd78fb14938fbcb95e31413);
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()(a3);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B7,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}

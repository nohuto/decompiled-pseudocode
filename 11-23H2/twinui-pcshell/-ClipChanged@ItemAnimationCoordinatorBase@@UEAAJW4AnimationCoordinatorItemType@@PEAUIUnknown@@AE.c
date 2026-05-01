/*
 * XREFs of ?ClipChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1805944F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardCompareHelper@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardMergeHelper@UDropTarget@WindowArrangementViewDragData@@@@@@QEAAJ_K0@Z @ 0x1805951E0 (-_EnsureCapacity@-$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V-$CTPoli.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ItemAnimationCoordinatorBase::ClipChanged(
        _BYTE *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _BYTE **),
        __int128 *a4,
        _BYTE *a5)
{
  _BYTE *v8; // r14
  __int64 (__fastcall *v9)(_QWORD, GUID *, _BYTE **); // rbx
  int v10; // eax
  int v11; // edi
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // rbx
  __int128 v16; // xmm6
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v21[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v22; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a5;
  *a5 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 120LL))(a1) && a1[232] )
  {
    a5 = 0LL;
    v9 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
    v10 = v9(a3, &GUID_c9465035_5fb8_4b34_818f_fcfe7bd7b95c, &a5);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v14 = a1 + 184;
      v15 = (__int64)a5;
      *(_QWORD *)v21 = a5;
      if ( a5 )
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a5 + 8LL))(a5);
      v16 = *a4;
      v22 = *a4;
      v11 = 0;
      v17 = v14[1];
      if ( v17 != v14[3]
        || (v11 = CTSimpleArray<WindowArrangementViewDragData::DropTarget,4294967294,CTPolicyCoTaskMem<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardCompareHelper<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardMergeHelper<WindowArrangementViewDragData::DropTarget>>::_EnsureCapacity(
                    v14,
                    v17 + 1),
            v11 >= 0) )
      {
        v18 = v14[1];
        v14[1] = v18 + 1;
        v19 = *v14 + 24 * v18;
        if ( v19 )
        {
          *(_QWORD *)v19 = 0LL;
          if ( (int *)v19 != v21 )
          {
            *(_QWORD *)v19 = v15;
            *(_QWORD *)v21 = 0LL;
          }
          *(_OWORD *)(v19 + 8) = v16;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v21);
      if ( v11 >= 0 )
      {
        *v8 = 0;
        v11 = 0;
        goto LABEL_17;
      }
      v12 = (unsigned int)v11;
      v13 = 106LL;
    }
    else
    {
      v12 = (unsigned int)v10;
      v13 = 105LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)v12);
LABEL_17:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
    return (unsigned int)v11;
  }
  return 0LL;
}

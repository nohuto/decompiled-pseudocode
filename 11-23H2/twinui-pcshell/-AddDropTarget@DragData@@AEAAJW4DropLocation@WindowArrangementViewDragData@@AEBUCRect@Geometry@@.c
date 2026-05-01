/*
 * XREFs of ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x1805DB33C
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB920 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardCompareHelper@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardMergeHelper@UDropTarget@WindowArrangementViewDragData@@@@@@QEAAJ_K0@Z @ 0x1805951E0 (-_EnsureCapacity@-$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V-$CTPoli.c)
 */

__int64 __fastcall DragData::AddDropTarget(_QWORD *a1, int a2, _OWORD *a3, char a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-28h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a1 + 17;
  *(_DWORD *)v9 = a2;
  v5 = a1[18];
  v6 = 0;
  *(_OWORD *)&v9[4] = *a3;
  v9[20] = a4;
  if ( v5 != a1[20]
    || (v6 = CTSimpleArray<WindowArrangementViewDragData::DropTarget,4294967294,CTPolicyCoTaskMem<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardCompareHelper<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardMergeHelper<WindowArrangementViewDragData::DropTarget>>::_EnsureCapacity(
               (__int64)(a1 + 17),
               v5 + 1,
               a3),
        v6 >= 0) )
  {
    ++v4[1];
    v7 = *v4 + 8 * (3LL * v4[1] - 3);
    if ( !v7 )
      return (unsigned int)v6;
    *(_OWORD *)v7 = *(_OWORD *)v9;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)&v9[16];
  }
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

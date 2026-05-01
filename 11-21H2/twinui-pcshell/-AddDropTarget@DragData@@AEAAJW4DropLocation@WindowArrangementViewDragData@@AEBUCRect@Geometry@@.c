/*
 * XREFs of ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x18052298C
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180522F60 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardCompareHelper@UDropTarget@WindowArrangementViewDragData@@@@V?$CSimpleArrayStandardMergeHelper@UDropTarget@WindowArrangementViewDragData@@@@@@QEAAJ_K0@Z @ 0x1804DD400 (-_EnsureCapacity@-$CTSimpleArray@UDropTarget@WindowArrangementViewDragData@@$0PPPPPPPO@V-$CTPoli.c)
 */

__int64 __fastcall DragData::AddDropTarget(_QWORD *a1, int a2, _OWORD *a3, char a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  _BYTE v10[24]; // [rsp+20h] [rbp-28h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a1 + 17;
  *(_DWORD *)v10 = a2;
  v5 = a1[18];
  v6 = 0;
  *(_OWORD *)&v10[4] = *a3;
  v10[20] = a4;
  if ( v5 == a1[20]
    && (v7 = CTSimpleArray<WindowArrangementViewDragData::DropTarget,4294967294,CTPolicyCoTaskMem<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardCompareHelper<WindowArrangementViewDragData::DropTarget>,CSimpleArrayStandardMergeHelper<WindowArrangementViewDragData::DropTarget>>::_EnsureCapacity(
               (__int64)(a1 + 17),
               v5 + 1,
               a3),
        v6 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    ++v4[1];
    v8 = *v4 + 8 * (3LL * v4[1] - 3);
    if ( v8 )
    {
      *(_OWORD *)v8 = *(_OWORD *)v10;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)&v10[16];
    }
  }
  return v6;
}

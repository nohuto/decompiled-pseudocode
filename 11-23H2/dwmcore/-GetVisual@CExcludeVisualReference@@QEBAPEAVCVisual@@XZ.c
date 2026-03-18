/*
 * XREFs of ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012E264
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D440 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021DCC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18010AE40 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x18012E27C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180131D28 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801B4CA8 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x1801CD0B0 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x1801CD0F0 (-Show@CExcludeVisualReference@@UEAAXXZ.c)
 *     CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___ @ 0x1801EBBB8 (CComposition--ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___.c)
 *     _lambda_f7805202518b118888e0b3d23c76c683_::operator() @ 0x1801EC3BC (_lambda_f7805202518b118888e0b3d23c76c683_--operator().c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180217B24 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180217CFC (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180217D64 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CExcludeVisualReference::GetVisual(CExcludeVisualReference *this)
{
  __int64 v1; // rdx
  struct CVisual *result; // rax

  v1 = *((_QWORD *)this + 1);
  result = 0LL;
  if ( v1 )
    return *(struct CVisual **)(v1 + 16);
  return result;
}

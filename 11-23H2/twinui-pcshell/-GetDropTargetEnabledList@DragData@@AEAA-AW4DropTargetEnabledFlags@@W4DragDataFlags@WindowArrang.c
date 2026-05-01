/*
 * XREFs of ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB58C
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB920 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DragData::GetDropTargetEnabledList(__int64 a1, char a2)
{
  int v4; // ebp
  int v5; // edi
  int v6; // ecx

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 80LL))(*(_QWORD *)(a1 + 40), 5LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 80LL))(*(_QWORD *)(a1 + 40), 1LL);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 184LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 48)) )
    ++v5;
  v6 = !(a2 & 1) + 2;
  if ( (a2 & 2) != 0 )
    v6 = !(a2 & 1);
  if ( (a2 & 4) != 0 )
  {
    return (unsigned int)(v6 | 8);
  }
  else if ( v4 == 1 || v4 == 2 && v5 == 1 )
  {
    return (unsigned int)(v6 | 0xC);
  }
  else if ( v5 == 2 )
  {
    return (unsigned int)(v6 | 0x10);
  }
  else
  {
    return (unsigned int)(v6 | 0x20);
  }
}

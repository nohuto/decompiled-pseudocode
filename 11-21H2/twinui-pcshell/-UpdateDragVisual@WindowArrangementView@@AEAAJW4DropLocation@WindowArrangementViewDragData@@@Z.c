/*
 * XREFs of ?UpdateDragVisual@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18051CB60
 * Callers:
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x18051D5A8 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowArrangementView::UpdateDragVisual(__int64 a1, int a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rdx

  v3 = *(__int64 **)(a1 + 80);
  if ( v3 )
  {
    v4 = *v3;
    v5 = a2 - 5;
    if ( v5 )
    {
      if ( v5 == 1 )
        v6 = 2LL;
      else
        v6 = *(_QWORD *)(a1 + 104) != 0LL ? 6 : 0;
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 80))(v3, v6);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v4 + 80))(v3, 3LL, a1);
    }
  }
  return 0LL;
}

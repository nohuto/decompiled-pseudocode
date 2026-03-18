/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800C0048
 * Callers:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x180025780 (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180040D80 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??$_Uninitialized_copy@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800BFF0C (--$_Uninitialized_copy@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 *     ?_Change_array@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAXQEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@_K1@Z @ 0x1800BFFCC (-_Change_array@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PE.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801D8BE0 (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  HANDLE ProcessHeap; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 2;
    do
    {
      v4 = (_QWORD *)*(v3 - 1);
      v5 = (__int64)(*v3 - (_QWORD)v4) >> 4;
      if ( v5 )
        *v3 -= 16 * v5;
      *(v3 - 1) = 0LL;
      if ( v4 == v3 + 2 )
        v4 = 0LL;
      if ( v4 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
      v3 += 8;
    }
    while ( v3 - 2 != a2 );
  }
}

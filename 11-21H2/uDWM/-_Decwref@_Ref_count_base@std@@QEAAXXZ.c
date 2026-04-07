/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180039150
 * Callers:
 *     ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@@Z @ 0x1800106F8 (-erase@-$list@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V-$allocator@V-$weak_ptr@VCCa.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180037F44 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x18003A7A0 (--1CCachedBorderBrush@CWindowBorder@@QEAA@XZ.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::weak_ptr_CWindowBorder::CCachedBorderBrush_________lambda_78b0f3466128b2cc365cc1d34b7f49ae___ @ 0x18003A83C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--weak_ptr_CWindowB.c)
 *     ?_Tidy@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@AEAAXXZ @ 0x18005FBBC (-_Tidy@-$list@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V-$allocator@V-$weak_ptr@VCCa.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}

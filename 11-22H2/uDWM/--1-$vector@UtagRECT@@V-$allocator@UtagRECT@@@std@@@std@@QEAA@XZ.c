/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800BBD64
 * Callers:
 *     _std::vector_CStoryboard::UnifiedTargetRect_std::allocator_CStoryboard::UnifiedTargetRect___::_Emplace_reallocate_enum_DWMTRANSITION_TARGET_const_&_tagRECT_const_&__::_1_::dtor$0 @ 0x1800D942A (_std--vector_CStoryboard--UnifiedTargetRect_std--allocator_CStoryboard--UnifiedTargetRect___--_E.c)
 *     _std::vector_CStoryboard::UnifiedTargetRect_std::allocator_CStoryboard::UnifiedTargetRect___::emplace_back_enum_DWMTRANSITION_TARGET_const_&_tagRECT_const_&__::_1_::dtor$0 @ 0x1800D955B (_std--vector_CStoryboard--UnifiedTargetRect_std--allocator_CStoryboard--UnifiedTargetRect___--em.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

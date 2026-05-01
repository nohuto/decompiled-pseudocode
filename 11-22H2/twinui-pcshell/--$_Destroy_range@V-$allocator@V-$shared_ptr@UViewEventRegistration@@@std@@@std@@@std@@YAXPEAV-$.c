/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x1800AE108
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x1800AE02C (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UViewEventRegistration@@@2@_K1@Z @ 0x1800AE08C (-_Change_array@-$vector@V-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr@U.c)
 *     _std::vector_std::shared_ptr_ViewEventRegistration__std::allocator_std::shared_ptr_ViewEventRegistration_____::_Emplace_reallocate_std::shared_ptr_ViewEventRegistration__const_&__::_1_::catch$0 @ 0x1802B91E1 (_std--vector_std--shared_ptr_ViewEventRegistration__std--allocator_std--shared_ptr_ViewEventRegi.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x1804BCCB8 (--1WindowEventDispatcher@@UEAA@XZ.c)
 *     ??1UwpWindowEventDispatcher@@UEAA@XZ @ 0x1804CF0B0 (--1UwpWindowEventDispatcher@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<ViewEventRegistration>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}

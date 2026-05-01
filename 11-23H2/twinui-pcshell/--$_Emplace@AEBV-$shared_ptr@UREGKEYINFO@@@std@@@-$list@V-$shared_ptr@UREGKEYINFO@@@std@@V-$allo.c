/*
 * XREFs of ??$_Emplace@AEBV?$shared_ptr@UREGKEYINFO@@@std@@@?$list@V?$shared_ptr@UREGKEYINFO@@@std@@V?$allocator@V?$shared_ptr@UREGKEYINFO@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UREGKEYINFO@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UREGKEYINFO@@@1@@Z @ 0x18063D64C
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UREGKEYINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18063DD68 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$shared_ptr@UREGKEYINFO@@@std@@PEAX@std.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::shared_ptr<REGKEYINFO>>::_Emplace<std::shared_ptr<REGKEYINFO> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    v6 + 2,
    a3);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<REGKEYINFO>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<REGKEYINFO>,void *>>>(&v9);
  return v6;
}

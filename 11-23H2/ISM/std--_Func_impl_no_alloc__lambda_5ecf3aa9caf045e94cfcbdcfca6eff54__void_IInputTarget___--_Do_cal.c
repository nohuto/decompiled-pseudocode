/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Do_call @ 0x1800FB870
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098338 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800F79D0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Do_call(
        __int64 a1)
{
  __int64 v2; // rcx
  _BYTE v3[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v4; // [rsp+38h] [rbp-40h]
  void *v5; // [rsp+48h] [rbp-30h]
  __int128 v6; // [rsp+50h] [rbp-28h]

  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v3);
  (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    **(_QWORD **)(a1 + 16),
    v3,
    **(_QWORD **)(a1 + 24),
    0);
  std::_Deallocate<16,0>(v5, (v6 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  v5 = 0LL;
  v6 = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    v4);
  std::_Deallocate<16,0>(v4, 0x18uLL);
}

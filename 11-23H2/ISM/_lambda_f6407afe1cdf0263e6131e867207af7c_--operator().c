/*
 * XREFs of _lambda_f6407afe1cdf0263e6131e867207af7c_::operator() @ 0x1800F8750
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call @ 0x1800FB9B0 (std--_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___--_Do_cal.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098338 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800F79D0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f6407afe1cdf0263e6131e867207af7c_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v6; // [rsp+38h] [rbp-40h]
  void *v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  if ( *(_DWORD *)(**(_QWORD **)a1 + 352LL) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(**(_QWORD **)(a1 + 8), 0LL);
  }
  else
  {
    std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v5);
    (*(void (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, _DWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 16) + 8LL,
      **(_QWORD **)(a1 + 24),
      v5,
      a2,
      0);
    std::_Deallocate<16,0>(v7, (v8 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    v7 = 0LL;
    v8 = 0LL;
    std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
      v4,
      v6);
    std::_Deallocate<16,0>(v6, 0x18uLL);
  }
}

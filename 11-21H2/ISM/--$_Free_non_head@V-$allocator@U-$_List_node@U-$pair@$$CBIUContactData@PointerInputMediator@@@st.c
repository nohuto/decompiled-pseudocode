/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E2D0C
 * Callers:
 *     ??1?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAA@XZ @ 0x1800E3708 (--1-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$allocator@U-$pair@$$CBIUConta.c)
 *     ??1?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAA@XZ @ 0x1800E375C (--1-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800E37BC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800E4790 (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx

  **(_QWORD **)(a2 + 8) = 0LL;
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
        v4 + 4,
        a2,
        a3,
        a4);
      std::_Deallocate<16,0>(v4, 0x30uLL);
      v4 = v5;
    }
    while ( v5 );
  }
}

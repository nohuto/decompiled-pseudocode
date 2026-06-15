/*
 * XREFs of ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x1800260C8
 * Callers:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18010F24C (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  volatile int *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // r8
  __int64 v9; // rdx
  bool i; // zf
  signed __int32 v11; // eax

  if ( a2 )
  {
    v2 = a2;
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_8;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
    v6 = v2[1];
    *(_QWORD *)(v5 + 8) = v6;
    if ( v6 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v6 + 12), v4);
    *(_QWORD *)(a1 + 16) = v5;
    for ( *(_QWORD *)(a1 + 8) = v5; ; *(_QWORD *)(a1 + 8) = v8 )
    {
      v2 = (_QWORD *)*v2;
LABEL_8:
      if ( !v2 )
        break;
      ProcessHeap = GetProcessHeap();
      v8 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
      v9 = v2[1];
      v8[1] = v9;
      for ( i = v9 == 0; !i; i = v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 12), v11 + 1, v11) )
      {
        v11 = *(_DWORD *)(v9 + 12);
        if ( v11 == 0x7FFFFFFF )
          break;
      }
      **(_QWORD **)(a1 + 8) = v8;
    }
  }
}

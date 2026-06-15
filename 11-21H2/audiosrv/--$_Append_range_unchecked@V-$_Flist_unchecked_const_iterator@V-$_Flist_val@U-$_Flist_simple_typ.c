/*
 * XREFs of ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x180112F30
 * Callers:
 *     ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x180112FEC (--$_Assign_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_types@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  volatile int *v4; // rdx
  _QWORD *v5; // r10
  __int64 v6; // rcx
  volatile int *v7; // rdx
  __int64 v8; // rcx

  if ( a2 )
  {
    v2 = a2;
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_7;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v6 = v2[1];
    v5[1] = v6;
    if ( v6 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v6 + 12), v4);
    *(_QWORD *)(a1 + 16) = v5;
    while ( 1 )
    {
      *(_QWORD *)(a1 + 8) = v5;
      v2 = (_QWORD *)*v2;
LABEL_7:
      if ( !v2 )
        break;
      v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v8 = v2[1];
      v5[1] = v8;
      if ( v8 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 12), v7);
      **(_QWORD **)(a1 + 8) = v5;
    }
  }
}

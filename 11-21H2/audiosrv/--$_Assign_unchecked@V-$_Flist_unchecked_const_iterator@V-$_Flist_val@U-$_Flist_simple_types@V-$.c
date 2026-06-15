/*
 * XREFs of ??$_Assign_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x180112FEC
 * Callers:
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18011341C (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x180112F30 (--$_Append_range_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_typ.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1801130CC (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 *     ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180113170 (--1-$_Flist_insert_after_op2@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_retu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::_Assign_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        _QWORD **a1,
        volatile int *a2)
{
  volatile int *v2; // rbx
  _QWORD **v3; // rbp
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // r10
  __int64 result; // rax
  _QWORD *v8; // rbx
  _QWORD **v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-20h]
  _QWORD *v11; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v3 = a1;
  v4 = a1;
  while ( 1 )
  {
    v5 = *v4;
    if ( !v2 )
      break;
    if ( !v5 )
    {
      v9 = v3;
      v10 = 0LL;
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        (__int64)&v9,
        v2);
      if ( v10 )
      {
        *v10 = *v4;
        *v4 = v11;
        v10 = 0LL;
      }
      return std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(&v9);
    }
    v6 = (volatile signed __int32 *)v5[1];
    a1 = (_QWORD **)*((_QWORD *)v2 + 1);
    v5[1] = a1;
    if ( a1 )
      result = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)a1 + 12), a2);
    if ( v6 )
      result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
    v4 = (_QWORD **)v5;
    v2 = *(volatile int **)v2;
  }
  *v4 = 0LL;
  if ( v5 )
  {
    do
    {
      v8 = (_QWORD *)*v5;
      result = std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
                 a1,
                 v5);
      v5 = v8;
    }
    while ( v8 );
  }
  return result;
}

/*
 * XREFs of ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18010F1FC
 * Callers:
 *     ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x18010BBC4 (-FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800260A8 (--1-$_Flist_insert_after_op2@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_retu.c)
 *     ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x1800260C8 (--$_Append_range_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_typ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18010EE3C (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 */

// Hidden C++ exception states: #wind=2
volatile int *__fastcall CEndpointStoreCache::FindFirstEndpoint(__int64 a1, volatile int *a2, __int64 a3)
{
  void **v5; // rsi
  _QWORD *i; // rbx
  void **v7; // rdi
  volatile signed __int32 *v8; // r10
  void **v9; // rbx
  _QWORD *j; // rbx
  __int64 v11; // rcx
  volatile int *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rsi
  volatile signed __int32 *v16; // r8
  signed __int32 v17; // edx
  _QWORD *v18; // rbx
  _QWORD *v19; // rsi
  volatile signed __int32 *v20; // r8
  signed __int32 v21; // edx
  void **v23; // [rsp+28h] [rbp-18h] BYREF
  void **v24; // [rsp+30h] [rbp-10h]
  void *v25; // [rsp+38h] [rbp-8h]
  void *v26; // [rsp+60h] [rbp+20h] BYREF

  v26 = 0LL;
  v5 = &v26;
  for ( i = (_QWORD *)qword_1801CFAE0; ; i = (_QWORD *)*i )
  {
    v7 = (void **)*v5;
    if ( !i )
      break;
    if ( !v7 )
    {
      v23 = &v26;
      v24 = 0LL;
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        (__int64)&v23,
        i);
      if ( v24 )
      {
        *v24 = *v5;
        *v5 = v25;
        v24 = 0LL;
      }
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>((__int64)&v23);
      goto LABEL_14;
    }
    v8 = (volatile signed __int32 *)v7[1];
    a1 = i[1];
    v7[1] = (void *)a1;
    if ( a1 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
    v5 = v7;
  }
  *v5 = 0LL;
  if ( v7 )
  {
    do
    {
      v9 = (void **)*v7;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        a1,
        v7);
      v7 = v9;
    }
    while ( v9 );
  }
LABEL_14:
  AcquireSRWLockShared(&stru_1801CFAD8);
  ReleaseSRWLockShared(&stru_1801CFAD8);
  for ( j = v26; j; j = (_QWORD *)*j )
  {
    v11 = *(_QWORD *)(a3 + 56);
    if ( !v11 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      break;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 16LL))(v11, j + 1) )
    {
      v13 = j[1];
      *(_QWORD *)a2 = v13;
      if ( v13 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v13 + 12), v12);
      v14 = v26;
      v26 = 0LL;
      if ( v14 )
      {
        do
        {
          v15 = (_QWORD *)*v14;
          v16 = (volatile signed __int32 *)v14[1];
          if ( v16 )
          {
            do
              v17 = *((_DWORD *)v16 + 3);
            while ( v17 != 0x7FFFFFFF && v17 != _InterlockedCompareExchange(v16 + 3, v17 - 1, v17) );
            if ( v17 == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                  + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
          }
          operator delete(v14);
          v14 = v15;
        }
        while ( v15 );
      }
      return a2;
    }
  }
  *(_QWORD *)a2 = 0LL;
  v18 = v26;
  v26 = 0LL;
  if ( v18 )
  {
    do
    {
      v19 = (_QWORD *)*v18;
      v20 = (volatile signed __int32 *)v18[1];
      if ( v20 )
      {
        do
          v21 = *((_DWORD *)v20 + 3);
        while ( v21 != 0x7FFFFFFF && v21 != _InterlockedCompareExchange(v20 + 3, v21 - 1, v21) );
        if ( v21 == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                              + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      operator delete(v18);
      v18 = v19;
    }
    while ( v19 );
  }
  return a2;
}

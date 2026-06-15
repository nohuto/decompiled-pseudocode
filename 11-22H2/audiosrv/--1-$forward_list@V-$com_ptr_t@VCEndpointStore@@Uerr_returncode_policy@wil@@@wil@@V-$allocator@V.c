/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18010EF30
 * Callers:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$0 @ 0x18007A4F3 (_CEndpointStoreCache--ForEachEndpoint_--_1_--dtor$0.c)
 *     _CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor$0 @ 0x18010F4FD (_CEndpointStoreCache--FindFirstEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>(
        _QWORD **a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  volatile signed __int32 *v3; // r8
  signed __int32 v4; // edx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      v3 = (volatile signed __int32 *)v1[1];
      if ( v3 )
      {
        do
          v4 = *((_DWORD *)v3 + 3);
        while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange(v3 + 3, v4 - 1, v4) );
        if ( v4 == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                              + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      operator delete(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}

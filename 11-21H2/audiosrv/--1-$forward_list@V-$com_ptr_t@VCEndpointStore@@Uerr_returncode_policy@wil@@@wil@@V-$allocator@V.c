/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1801131A8
 * Callers:
 *     _CEndpointStoreCache::ForEachEndpoint_::_1_::dtor$0 @ 0x18006D2F0 (_CEndpointStoreCache--ForEachEndpoint_--_1_--dtor$0.c)
 *     _CEndpointStoreCache::FindFirstEndpoint_::_1_::dtor$0 @ 0x180113522 (_CEndpointStoreCache--FindFirstEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1801130CC (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rbx

  v1 = (_QWORD *)*a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        (__int64)a1,
        v1);
      v1 = v2;
    }
    while ( v2 );
  }
}

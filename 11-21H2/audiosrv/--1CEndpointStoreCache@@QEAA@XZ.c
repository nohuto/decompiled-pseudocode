/*
 * XREFs of ??1CEndpointStoreCache@@QEAA@XZ @ 0x18005E2B4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_endpointStoreCache__ @ 0x180072A70 (_dynamic_atexit_destructor_for__g_endpointStoreCache__.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1801130CC (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 */

void __fastcall CEndpointStoreCache::~CEndpointStoreCache(CEndpointStoreCache *this)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        this,
        v1);
      v1 = v2;
    }
    while ( v2 );
  }
}

/*
 * XREFs of ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800E419C
 * Callers:
 *     ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800DFB68 (-GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Creative.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V12@@std@@YAPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800DBA90 (--$_Uninit_move@PEAV-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 *v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // r15
  _QWORD *result; // rax
  void *v10; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2), (v10 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8),
      v4);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>>::deallocate(v5, v10);
    throw;
  }
  v6 = *(__int64 **)(a1 + 8);
  v7 = *(__int64 **)a1;
  v8 = ((__int64)v6 - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
  {
    if ( v7 != v6 )
    {
      do
      {
        if ( *v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*v7 + 16LL))(*v7);
        ++v7;
      }
      while ( v7 != v6 );
      v7 = *(__int64 **)a1;
    }
    operator delete(v7);
  }
  *(_QWORD *)(a1 + 16) = &v4[a2];
  result = &v4[v8];
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = v4;
  return result;
}

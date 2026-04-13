/*
 * XREFs of ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800CCA18
 * Callers:
 *     ?_Reserve@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800CCC38 (-_Reserve@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800714E4 (-_Destroy@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 *     ??$_Uninit_move@PEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V12@@std@@YAPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800C611C (--$_Uninit_move@PEAV-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  _QWORD *result; // rax

  v4 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = operator new(8 * a2)) == 0LL )
      std::_Xbad_alloc();
  }
  std::_Uninit_move<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
    *(__int64 **)a1,
    *(__int64 **)(a1 + 8),
    v4);
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
  {
    std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Destroy(
      v5,
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    operator delete(*(void **)a1);
  }
  *(_QWORD *)(a1 + 16) = &v4[a2];
  result = &v4[v6];
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = v4;
  return result;
}

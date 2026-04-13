/*
 * XREFs of ??$_Uninit_move@PEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V12@@std@@YAPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800C611C
 * Callers:
 *     ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800CCA18 (-_Reallocate@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@w.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninit_move<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>,wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  while ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = 0LL;
    *a3++ = v3;
    ++a1;
  }
  return a3;
}

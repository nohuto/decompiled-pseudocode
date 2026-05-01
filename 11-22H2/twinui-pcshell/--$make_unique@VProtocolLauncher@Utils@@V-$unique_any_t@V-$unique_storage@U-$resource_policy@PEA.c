/*
 * XREFs of ??$make_unique@VProtocolLauncher@Utils@@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$T$$T$$T$0A@@std@@YA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@0@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$$QEA$$T11@Z @ 0x1806C1D20
 * Callers:
 *     ?CreateInstance@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@6@AEBV?$com_ptr_t@UIAssocHandler@@Uerr_exception_policy@wil@@@6@@Z @ 0x1802E9C62 (-CreateInstance@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_de.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Utils::ProtocolLauncher,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,std::nullptr_t,std::nullptr_t,std::nullptr_t,0>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v5; // [rsp+58h] [rbp+20h]

  v5 = operator new(0x30uLL);
  *v5 = *a2;
  *a2 = 0LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  *((_BYTE *)v5 + 40) = 0;
  *a1 = v5;
  return a1;
}

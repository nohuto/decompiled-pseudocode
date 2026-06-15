/*
 * XREFs of ?IsLooseMatch@@YA_NQEAG0@Z @ 0x1801085A0
 * Callers:
 *     ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x1801059E8 (-CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z @ 0x180107570 (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsLooseMatch(unsigned __int16 *const a1, unsigned __int16 *const a2)
{
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && a2 )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    if ( (int)GetCurrentLoopbackEndpointIdInternal(a1, (unsigned __int16 **)&pv) < 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      if ( (int)GetCurrentLoopbackEndpointIdInternal(a2, (unsigned __int16 **)&pv) >= 0
        && !(unsigned int)_o__wcsicmp(a1, pv) )
      {
        if ( pv )
          CoTaskMemFree(pv);
        return 1;
      }
    }
    else if ( !(unsigned int)_o__wcsicmp(pv, a2) )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      return 1;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  return 0;
}

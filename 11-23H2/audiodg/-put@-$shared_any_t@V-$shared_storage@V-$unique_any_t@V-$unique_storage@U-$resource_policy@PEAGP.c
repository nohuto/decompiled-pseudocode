/*
 * XREFs of ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x140065FD4
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x14002B650 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400382FE (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14003B2F8 (--4-$shared_ptr@VCSerialWorkQueue@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::put(
        _QWORD *a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp+8h]

  *(_OWORD *)v3 = 0LL;
  std::shared_ptr<CSerialWorkQueue>::operator=(a1, (__int64 *)v3);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  if ( !*a1 )
  {
    v4 = operator new(0x18uLL);
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    v3[0] = (std::_Ref_count_base *)(v4 + 4);
    v3[1] = (std::_Ref_count_base *)v4;
    std::shared_ptr<CSerialWorkQueue>::operator=(a1, (__int64 *)v3);
    if ( v3[1] )
      std::_Ref_count_base::_Decref(v3[1]);
  }
  return *a1;
}

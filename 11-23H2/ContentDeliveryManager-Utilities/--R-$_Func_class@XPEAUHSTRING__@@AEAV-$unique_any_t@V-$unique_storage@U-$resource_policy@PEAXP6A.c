/*
 * XREFs of ??R?$_Func_class@XPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAIU_Nil@std@@U45@U45@U45@@std@@QEBAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180097298
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180098970 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009D324 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004960 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v5 = a2;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    std::_Xbad_function_call();
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)v3 + 16LL))(
           v3,
           &v5,
           a3,
           (__int64 *)va);
}

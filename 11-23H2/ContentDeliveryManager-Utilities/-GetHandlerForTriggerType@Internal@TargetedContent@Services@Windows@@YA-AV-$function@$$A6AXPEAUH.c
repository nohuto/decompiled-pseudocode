/*
 * XREFs of ?GetHandlerForTriggerType@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180097C5C
 * Callers:
 *     ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180098DA8 (-ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AXPEAUHS.c)
 * Callees:
 *     ??0?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@QEAA@AEBV01@@Z @ 0x180097204 (--0-$function@$$A6AXPEAUHSTRING__@@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetHandlerForTriggerType(_QWORD *a1, int a2)
{
  _DWORD *i; // rdx

  for ( i = &unk_180194600; i != (_DWORD *)&unk_1801946A0; i += 10 )
  {
    if ( *i == a2 )
    {
      std::function<void (HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *)>::function<void (HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *)>(
        (__int64)a1,
        (__int64)(i + 2));
      return a1;
    }
  }
  *a1 = &std::_Func_impl<std::_Callable_fun<void (*const)(HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *),0>,std::allocator<std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  a1[1] = Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator;
  a1[3] = a1;
  return a1;
}

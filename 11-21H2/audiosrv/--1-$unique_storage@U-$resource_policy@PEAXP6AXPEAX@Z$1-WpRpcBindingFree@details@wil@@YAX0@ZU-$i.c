/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004001C
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18003FFC0 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44 (-s_adPublishApoTelemetry@@YAJPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180117B78 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180118630 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x18003FD54 (-WpRpcBindingFree@details@wil@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::WpRpcBindingFree(v2, a2);
}

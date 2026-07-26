/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ndisFreeMappingAddress@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00325F8
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FCF0 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void ndisFreeMappingAddress(void *),wistd::integral_constant<unsigned __int64,1>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    MmFreeMappingAddress(v1, 0x6C53444Eu);
}

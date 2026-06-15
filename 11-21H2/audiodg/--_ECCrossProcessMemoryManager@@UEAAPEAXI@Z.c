/*
 * XREFs of ??_ECCrossProcessMemoryManager@@UEAAPEAXI@Z @ 0x1400021B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1400021F8 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CCrossProcessMemoryManager *__fastcall CCrossProcessMemoryManager::`vector deleting destructor'(
        CCrossProcessMemoryManager *this,
        char a2)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((char *)this + 40);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

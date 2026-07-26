/*
 * XREFs of ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x1C0134590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C012DC48 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ClearKnobInStore(
        __int64 (__fastcall ***this)(RegistryKnobCollection *, __int64, KRegKey *),
        const struct KnobDescriptor *a2)
{
  __int64 (__fastcall **v2)(RegistryKnobCollection *, __int64, KRegKey *); // rax
  unsigned int v3; // ebx
  NTSTATUS v5; // eax
  KRegKey v7[2]; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  v2 = *this;
  v3 = 0;
  v8 = 0;
  *(_OWORD *)&v7[0].m_ptr = 0LL;
  v5 = (*v2)((RegistryKnobCollection *)this, 2LL, v7);
  if ( v5 || (v5 = KRegKey::DeleteValue(v7, (wchar_t *)a2->Name)) != 0 )
    v3 = v5;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7[1].m_ptr);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7[0].m_ptr);
  return v3;
}

/*
 * XREFs of ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0134600
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C0111B14 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0113A50 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z @ 0x1C012DCD8 (-SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::SetKnobInStore(
        RegistryKnobCollection *this,
        const struct KnobDescriptor *a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  NTSTATUS v6; // eax
  wchar_t *Name; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v4 = 0;
  v10 = 0;
  v9 = 0LL;
  v6 = KnobCollection::ValidateKnobValue(this, (unsigned __int64 *)&v11, a2);
  if ( v6
    || (v6 = (**(__int64 (__fastcall ***)(RegistryKnobCollection *, __int64, __int128 *))this)(this, 2LL, &v9)) != 0
    || ((Name = (wchar_t *)a2->Name, (a2->Flags & 4) == 0)
      ? (v6 = KRegKey::SetValueUlong((KRegKey *)&v9, Name, v11))
      : (v6 = KRegKey::SetValueUlong64((KRegKey *)&v9, Name, v11)),
        v6) )
  {
    v4 = v6;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v9 + 1);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v9);
  return v4;
}

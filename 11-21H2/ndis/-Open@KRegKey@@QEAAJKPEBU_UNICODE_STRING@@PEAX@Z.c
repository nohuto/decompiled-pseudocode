/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C010E4E8
 * Callers:
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     GetModuleServiceName @ 0x1C0135704 (GetModuleServiceName.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00296A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, struct _UNICODE_STRING *a3, void *a4)
{
  unsigned int v5; // ebx
  _OBJECT_ATTRIBUTES v7; // [rsp+20h] [rbp-38h] BYREF
  HANDLE v8; // [rsp+70h] [rbp+18h] BYREF

  v7.ObjectName = a3;
  *(_QWORD *)&v7.Length = 48LL;
  *(_QWORD *)&v7.Attributes = 576LL;
  v7.RootDirectory = a4;
  v8 = 0LL;
  *(_OWORD *)&v7.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v8, a2, &v7);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &this->m_ptr,
    v8);
  return v5;
}

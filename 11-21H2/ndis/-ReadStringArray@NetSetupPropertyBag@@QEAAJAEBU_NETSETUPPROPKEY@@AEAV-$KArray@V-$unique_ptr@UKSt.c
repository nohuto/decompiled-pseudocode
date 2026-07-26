/*
 * XREFs of ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C012E334
 * Callers:
 *     ndisBlowStringListIntoAtoms @ 0x1C0130658 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0110310 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C01105F4 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C012E028 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C012E4C0 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadStringArray(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r10d
  _UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF
  struct KRegKey v9; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v9.m_ptr = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, &v9);
  if ( v6 != -1073741772 )
  {
    if ( !v6 )
    {
      v8 = 0LL;
      v4 = KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
             &v9.m_ptr,
             &v8,
             a3,
             a3);
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  if ( !netsetupIsImpliedProperty((__int64)a2) )
  {
LABEL_5:
    v4 = v6;
    goto LABEL_7;
  }
  Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, 0LL);
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return v4;
}

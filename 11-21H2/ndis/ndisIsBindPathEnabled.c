/*
 * XREFs of ndisIsBindPathEnabled @ 0x1C0130C30
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C0130D84 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0130E28 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C0130EB8 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

__int64 __fastcall ndisIsBindPathEnabled(wchar_t *a1, char a2, bool *a3)
{
  unsigned int v3; // esi
  unsigned int Boolean; // eax
  const struct _NETSETUPPROPKEY *v8; // rbx
  KRegKey v9; // [rsp+20h] [rbp-60h] BYREF
  KRegKey *v10; // [rsp+28h] [rbp-58h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+44h] [rbp-3Ch]
  int v14; // [rsp+54h] [rbp-2Ch]
  __int128 v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-18h]
  char v17; // [rsp+6Ch] [rbp-14h] BYREF

  v3 = 0;
  v9.m_ptr = 0LL;
  Boolean = KRegKey::Open(&v9, 8u, a1, 0LL);
  if ( Boolean )
  {
    if ( Boolean == -1073741772 )
    {
LABEL_8:
      *a3 = a2 ^ 1;
      goto LABEL_4;
    }
  }
  else
  {
    v8 = (const struct _NETSETUPPROPKEY *)&v11;
    v12 = 80;
    v11 = xmmword_1C00DC4E0;
    v14 = 82;
    v16 = 84;
    v13 = xmmword_1C00DC498;
    v10 = &v9;
    v15 = xmmword_1C00DC588;
    while ( 1 )
    {
      Boolean = NetSetupPropertyBag::ReadBoolean((void ***)&v10, v8, a3);
      if ( Boolean != -1073741772 )
        break;
      v8 = (const struct _NETSETUPPROPKEY *)((char *)v8 + 20);
      if ( v8 == (const struct _NETSETUPPROPKEY *)&v17 )
        goto LABEL_8;
    }
  }
  v3 = Boolean;
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return v3;
}

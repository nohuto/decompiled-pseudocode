/*
 * XREFs of netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011103C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0112350 (ndisIfInitializePhase2.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C010F89C (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0111174 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C0111DC4 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int i; // r14d
  unsigned int SubkeyName; // eax
  UNICODE_STRING *v7; // rbx
  unsigned int v8; // esi
  KRegKey v10; // [rsp+28h] [rbp-E0h] BYREF
  PCUNICODE_STRING GuidString[3]; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t v12[256]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+288h] [rbp+180h] BYREF

  v13 = a3;
  v3 = 0;
  v10.m_ptr = 0LL;
  netsetupBuildStorePath(2LL, a2, v12);
  v4 = KRegKey::Open(&v10, 8u, v12, 0LL);
  if ( v4 == -1073741772 )
    goto LABEL_15;
  if ( v4 )
  {
    v3 = v4;
LABEL_15:
    v8 = v3;
    goto LABEL_14;
  }
  for ( i = 0; ; ++i )
  {
    GuidString[0] = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&v10, i, GuidString);
    v7 = (UNICODE_STRING *)GuidString[0];
    v8 = SubkeyName;
    if ( SubkeyName == -2147483622 )
      break;
    if ( SubkeyName )
      goto LABEL_12;
    *(_OWORD *)&GuidString[1] = 0LL;
    if ( !RtlGUIDFromString(GuidString[0], (GUID *)&GuidString[1]) )
    {
      v8 = lambda_3ed15a572a362cb111cc1d3010d8268d_::operator()(&v13, (struct _GUID *)&GuidString[1]);
      if ( v8 )
        goto LABEL_12;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0x7274534Bu);
  }
  v8 = 0;
LABEL_12:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x7274534Bu);
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v10.m_ptr);
  return v8;
}

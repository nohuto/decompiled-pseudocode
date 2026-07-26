/*
 * XREFs of netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C012F574
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C0130A54 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0111174 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C0111DC4 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01313BC (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 */

__int64 netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058_()
{
  unsigned int v0; // edi
  unsigned int v1; // eax
  unsigned int ProtocolById; // esi
  ULONG i; // r14d
  NTSTATUS SubkeyName; // eax
  void *v5; // rbx
  KRegKey v7; // [rsp+28h] [rbp-E0h] BYREF
  void *GuidString[3]; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t v9[256]; // [rsp+48h] [rbp-C0h] BYREF

  v0 = 0;
  v7.m_ptr = 0LL;
  netsetupBuildStorePath(4, 0);
  v1 = KRegKey::Open(&v7, 8u, v9, 0LL);
  if ( v1 == -1073741772 )
    goto LABEL_4;
  if ( v1 )
  {
    v0 = v1;
LABEL_4:
    ProtocolById = v0;
    goto LABEL_16;
  }
  for ( i = 0; ; ++i )
  {
    GuidString[0] = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&v7.m_ptr, i, GuidString);
    v5 = GuidString[0];
    ProtocolById = SubkeyName;
    if ( SubkeyName == -2147483622 )
      break;
    if ( SubkeyName )
      goto LABEL_14;
    *(_OWORD *)&GuidString[1] = 0LL;
    if ( !RtlGUIDFromString((PCUNICODE_STRING)GuidString[0], (GUID *)&GuidString[1]) )
    {
      ProtocolById = ndisReadProtocolById(0LL, &GuidString[1]);
      if ( ProtocolById )
        goto LABEL_14;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0x7274534Bu);
  }
  ProtocolById = 0;
LABEL_14:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x7274534Bu);
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7.m_ptr);
  return ProtocolById;
}

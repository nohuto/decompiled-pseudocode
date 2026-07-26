/*
 * XREFs of netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C013B31C
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C013C8D4 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6D0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011C6F4 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C01215D4 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2E0 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 */

__int64 netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058_()
{
  unsigned int v0; // edi
  unsigned int v1; // eax
  ULONG i; // esi
  NTSTATUS SubkeyName; // eax
  NTSTATUS v4; // ebx
  void *v5; // rbx
  unsigned int ProtocolById; // r14d
  HANDLE Handle; // [rsp+28h] [rbp-E0h] BYREF
  void *GuidString[3]; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t v10[256]; // [rsp+48h] [rbp-C0h] BYREF

  v0 = 0;
  Handle = 0LL;
  netsetupBuildStorePath(4, 0);
  v1 = KRegKey::Open((KRegKey *)&Handle, 8u, v10, 0LL);
  if ( v1 == -1073741772 )
    goto LABEL_18;
  if ( v1 )
  {
    v0 = v1;
LABEL_18:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v0;
  }
  for ( i = 0; ; ++i )
  {
    GuidString[0] = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&Handle, i, GuidString);
    v4 = SubkeyName;
    if ( SubkeyName == -2147483622 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(GuidString);
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return 0LL;
    }
    if ( SubkeyName )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(GuidString);
      v0 = v4;
      goto LABEL_18;
    }
    v5 = GuidString[0];
    *(_OWORD *)&GuidString[1] = 0LL;
    if ( !RtlGUIDFromString((PCUNICODE_STRING)GuidString[0], (GUID *)&GuidString[1]) )
    {
      ProtocolById = ndisReadProtocolById(0LL, &GuidString[1]);
      if ( ProtocolById )
        break;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0x7274534Bu);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return ProtocolById;
}

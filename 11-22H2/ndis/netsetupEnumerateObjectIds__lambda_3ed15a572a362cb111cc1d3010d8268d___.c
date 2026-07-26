/*
 * XREFs of netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011C598
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C011B540 (ndisIfInitializePhase2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6D0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011C6F4 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C011CF24 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C01215D4 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int i; // esi
  unsigned int SubkeyName; // eax
  unsigned int v7; // ebx
  void *v8; // rbx
  unsigned int v9; // r14d
  HANDLE Handle; // [rsp+28h] [rbp-E0h] BYREF
  void *GuidString[3]; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t v13[256]; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+288h] [rbp+180h] BYREF

  v14 = a3;
  v3 = 0;
  Handle = 0LL;
  netsetupBuildStorePath(2LL, a2, v13);
  v4 = KRegKey::Open((KRegKey *)&Handle, 8u, v13, 0LL);
  if ( v4 == -1073741772 )
    goto LABEL_19;
  if ( v4 )
  {
    v3 = v4;
LABEL_19:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v3;
  }
  for ( i = 0; ; ++i )
  {
    GuidString[0] = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&Handle, i, GuidString);
    v7 = SubkeyName;
    if ( SubkeyName == -2147483622 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(GuidString);
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return 0LL;
    }
    if ( SubkeyName )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(GuidString);
      v3 = v7;
      goto LABEL_19;
    }
    v8 = GuidString[0];
    *(_OWORD *)&GuidString[1] = 0LL;
    if ( !RtlGUIDFromString((PCUNICODE_STRING)GuidString[0], (GUID *)&GuidString[1]) )
    {
      v9 = lambda_3ed15a572a362cb111cc1d3010d8268d_::operator()(&v14, &GuidString[1]);
      if ( v9 )
        break;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0x7274534Bu);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return v9;
}

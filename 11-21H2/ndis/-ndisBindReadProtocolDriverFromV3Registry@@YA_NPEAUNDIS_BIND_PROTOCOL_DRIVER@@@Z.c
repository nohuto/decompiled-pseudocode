/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010FC08
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C010FBD4 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x1C0110AE0 (KRegKey--QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  char v2; // bl
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  signed int v5; // ecx
  __int16 v6; // dx
  Rtl::KString *value; // rdx
  int v8; // eax
  bool v10[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  KRegKey v12; // [rsp+48h] [rbp-C0h] BYREF
  KRegKey v13[2]; // [rsp+50h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+90h] [rbp-78h] BYREF
  wchar_t v16[256]; // [rsp+A8h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  KeyHandle = 0LL;
  *(_OWORD *)&v13[0].m_ptr = 0LL;
  v2 = 1;
  v3 = 0x7FFFLL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v5 = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    v6 = 2 * v3;
    v13[1].m_ptr = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(v13[0].m_ptr) = -2 - v6;
    WORD1(v13[0].m_ptr) = -v6;
  }
  if ( v5 < 0 )
    goto LABEL_17;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v13;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0
    || (value = a1->Name.__ptr_.__value_,
        v15 = 0LL,
        (int)KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___(&KeyHandle, value, &v15) < 0) )
  {
LABEL_17:
    v2 = 0;
    goto LABEL_15;
  }
  netsetupBuildObjectPath(4LL, &v15, 0LL, 1LL, v16);
  v12.m_ptr = 0LL;
  v8 = KRegKey::Open(&v12, 1u, v16, 0LL);
  if ( v8 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_1C00EC738 + 96) )
      goto LABEL_16;
    netsetupBuildObjectPath(4LL, &v15, 1LL, 1LL, v16);
    v8 = KRegKey::Open(&v12, 1u, v16, 0LL);
  }
  if ( v8 >= 0 )
  {
    v10[0] = 0;
    v13[0].m_ptr = &v12;
    if ( !(unsigned int)NetSetupPropertyBag::ReadBoolean(
                          (NetSetupPropertyBag *)v13,
                          (const struct _NETSETUPPROPKEY *)&unk_1C00D1A08,
                          v10) )
    {
      if ( !v10[0] )
        a1->ProtocolBindFlags |= 1u;
      goto LABEL_14;
    }
  }
LABEL_16:
  v2 = 0;
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v12.m_ptr);
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return v2;
}

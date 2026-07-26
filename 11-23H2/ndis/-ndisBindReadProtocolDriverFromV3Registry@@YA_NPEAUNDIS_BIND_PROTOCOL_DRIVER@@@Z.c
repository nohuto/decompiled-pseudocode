/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C011D264
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C011D230 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x1C011D460 (KRegKey--QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB2C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E0E4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  Rtl::KString *value; // rdx
  int v5; // eax
  bool v7[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  KRegKey Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle_8[2]; // [rsp+50h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+90h] [rbp-78h] BYREF
  wchar_t v13[256]; // [rsp+A8h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  KeyHandle = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  *(_OWORD *)Handle_8 = 0LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  if ( !v2 )
    goto LABEL_20;
  Handle_8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  LOWORD(Handle_8[0]) = 2 * (0x7FFF - v2);
  WORD1(Handle_8[0]) = LOWORD(Handle_8[0]) + 2;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Handle_8;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0 )
    goto LABEL_20;
  value = a1->Name.__ptr_.__value_;
  v12 = 0LL;
  if ( (int)KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___(&KeyHandle, value, &v12) < 0 )
    goto LABEL_20;
  netsetupBuildObjectPath(4LL, &v12, 0LL, 1LL, v13);
  Handle.m_ptr = 0LL;
  v5 = KRegKey::Open(&Handle, 1u, v13, 0LL);
  if ( v5 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_1C00F5730 + 96) )
    {
LABEL_19:
      KRegKey::~KRegKey(&Handle);
LABEL_20:
      KRegKey::~KRegKey((KRegKey *)&KeyHandle);
      return 0;
    }
    netsetupBuildObjectPath(4LL, &v12, 1LL, 1LL, v13);
    v5 = KRegKey::Open(&Handle, 1u, v13, 0LL);
  }
  if ( v5 < 0 )
    goto LABEL_19;
  v7[0] = 0;
  Handle_8[0] = &Handle;
  if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                       (NetSetupPropertyBag *)Handle_8,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00D9688,
                       v7) )
    goto LABEL_19;
  if ( !v7[0] )
    a1->ProtocolBindFlags |= 1u;
  if ( Handle.m_ptr )
    ZwClose(Handle.m_ptr);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 1;
}

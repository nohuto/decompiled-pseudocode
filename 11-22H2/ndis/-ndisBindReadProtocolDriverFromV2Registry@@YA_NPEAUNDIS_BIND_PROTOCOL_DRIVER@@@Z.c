/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C013A7C0
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C011D270 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002ECA4 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C011951C (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x1C013A324 (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  NTSTATUS v4; // eax
  Rtl::KString *value; // rdx
  const wchar_t *v6; // rax
  char v7; // bl
  __int64 v8; // rdx
  int v9; // eax
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v12; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING v14; // [rsp+90h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+D0h] [rbp-38h] BYREF
  wchar_t v17[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  Handle = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  v14 = 0LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  if ( !v2 )
    goto LABEL_28;
  v14.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  v14.Length = 2 * (0x7FFF - v2);
  v14.MaximumLength = v14.Length + 2;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v14;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  Handle = KeyHandle;
  if ( v4 < 0 )
    goto LABEL_28;
  value = a1->Name.__ptr_.__value_;
  v16 = 0LL;
  if ( (int)KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___(&Handle, &value->_UNICODE_STRING, &v16) < 0
    || RtlStringCchPrintfW(
         v17,
         0x12CuLL,
         (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%"
                     "02x%02x-%02x%02x%02x%02x%02x%02x}\\Kernel",
         (unsigned int)v16,
         WORD2(v16),
         WORD3(v16),
         BYTE8(v16),
         BYTE9(v16),
         BYTE10(v16),
         BYTE11(v16),
         BYTE12(v16),
         BYTE13(v16),
         BYTE14(v16),
         HIBYTE(v16)) < 0 )
  {
    goto LABEL_28;
  }
  KeyHandle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&KeyHandle, 1u, v17, 0LL) < 0 )
    goto LABEL_27;
  v14 = 0LL;
  v6 = L"NoStartAtBoot";
  v7 = 0;
  v8 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v8;
  }
  while ( v8 );
  if ( !v8 )
  {
LABEL_27:
    KRegKey::~KRegKey((KRegKey *)&KeyHandle);
LABEL_28:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return 0;
  }
  v14.Buffer = L"NoStartAtBoot";
  v14.Length = 2 * (0x7FFF - v8);
  v14.MaximumLength = v14.Length + 2;
  v12 = 0;
  if ( KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, &v14, &v12) != -1073741772 && v12 )
  {
    if ( v12 != 1 )
    {
      v9 = -1073739509;
      goto LABEL_19;
    }
    v7 = 1;
  }
  v9 = 0;
LABEL_19:
  if ( v9 < 0 )
    goto LABEL_27;
  if ( !v7 )
    a1->ProtocolBindFlags |= 1u;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return 1;
}

/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C012EA74
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C010FBD4 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002C654 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C010E340 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x1C012E604 (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v1; // r15
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  char v5; // r14
  signed int v6; // ecx
  __int16 v7; // dx
  Rtl::KString *value; // rdx
  const wchar_t *v9; // rax
  char v10; // bl
  int v11; // eax
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v14; // [rsp+80h] [rbp-88h] BYREF
  KRegKey v15[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING v16; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v18; // [rsp+D8h] [rbp-30h] BYREF
  wchar_t v19[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  v1 = 0x7FFFLL;
  KeyHandle = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  v5 = 1;
  *(_OWORD *)&v15[0].m_ptr = 0LL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v6 = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    v7 = 2 * v3;
    v15[1].m_ptr = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(v15[0].m_ptr) = -2 - v7;
    WORD1(v15[0].m_ptr) = -v7;
  }
  if ( v6 < 0 )
    goto LABEL_26;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0
    || (value = a1->Name.__ptr_.__value_,
        v18 = 0LL,
        (int)KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___(
               &KeyHandle,
               &value->_UNICODE_STRING,
               &v18) < 0)
    || RtlStringCchPrintfW(
         v19,
         0x12CuLL,
         (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%"
                     "02x%02x-%02x%02x%02x%02x%02x%02x}\\Kernel",
         (unsigned int)v18,
         WORD2(v18),
         WORD3(v18),
         BYTE8(v18),
         BYTE9(v18),
         BYTE10(v18),
         BYTE11(v18),
         BYTE12(v18),
         BYTE13(v18),
         BYTE14(v18),
         HIBYTE(v18)) < 0 )
  {
LABEL_26:
    v5 = 0;
    goto LABEL_27;
  }
  v15[0].m_ptr = 0LL;
  if ( (int)KRegKey::Open(v15, 1u, v19, 0LL) < 0 )
    goto LABEL_24;
  v16 = 0LL;
  v9 = L"NoStartAtBoot";
  v10 = 0;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v1;
  }
  while ( v1 );
  if ( !v1 )
    goto LABEL_24;
  v16.Buffer = L"NoStartAtBoot";
  v16.Length = -2 - 2 * v1;
  v16.MaximumLength = -2 * v1;
  v14 = 0;
  if ( KRegKey::QueryValueUlong(v15, &v16, &v14) != -1073741772 && v14 )
  {
    if ( v14 != 1 )
    {
      v11 = -1073739509;
      goto LABEL_21;
    }
    v10 = 1;
  }
  v11 = 0;
LABEL_21:
  if ( v11 >= 0 )
  {
    if ( !v10 )
      a1->ProtocolBindFlags |= 1u;
    goto LABEL_25;
  }
LABEL_24:
  v5 = 0;
LABEL_25:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v15[0].m_ptr);
LABEL_27:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return v5;
}

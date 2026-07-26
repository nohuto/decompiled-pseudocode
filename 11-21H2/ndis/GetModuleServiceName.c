/*
 * XREFs of GetModuleServiceName @ 0x1C0135704
 * Callers:
 *     CreateKModule @ 0x1C0135364 (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028D34 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B67C (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C010E4E8 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall GetModuleServiceName(unsigned int *a1, void **a2)
{
  __int64 v2; // r15
  __int64 v4; // r8
  const wchar_t *v5; // rax
  signed int v6; // edi
  __int16 v7; // r8
  NTSTATUS v8; // eax
  HANDLE v9; // rbx
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // r10d
  int v14; // r11d
  int v15; // edi
  int v16; // esi
  int v17; // r14d
  __int64 v18; // r9
  __int64 v19; // r8
  void *v20; // rbx
  const wchar_t *v21; // rax
  __int16 v22; // r15
  void *v23; // rcx
  int v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+60h] [rbp-A0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v29; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v30; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v31; // [rsp+A0h] [rbp-60h] BYREF
  void **v32; // [rsp+B0h] [rbp-50h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  char v34; // [rsp+F0h] [rbp-10h] BYREF

  v32 = a2;
  v29 = 0LL;
  v2 = 0x7FFFLL;
  v4 = 0x7FFFLL;
  v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\KLoader\\Modules";
  v28 = 0LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v7 = 2 * v4;
    *((_QWORD *)&v28 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\KLoader\\Modules";
    LOWORD(v28) = -2 - v7;
    WORD1(v28) = -v7;
  }
  if ( v6 < 0 )
    goto LABEL_8;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v9 = KeyHandle;
  v6 = v8;
  v29 = KeyHandle;
  if ( v8 )
  {
LABEL_8:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
    goto LABEL_32;
  }
  v10 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v12 = *((unsigned __int8 *)a1 + 12);
  v13 = *((unsigned __int8 *)a1 + 11);
  v14 = *((unsigned __int8 *)a1 + 10);
  v15 = *((unsigned __int8 *)a1 + 9);
  v16 = *((unsigned __int8 *)a1 + 8);
  v17 = *((unsigned __int16 *)a1 + 3);
  v18 = *((unsigned __int16 *)a1 + 2);
  v30.Buffer = (wchar_t *)&v34;
  v26 = *((unsigned __int8 *)a1 + 15);
  v25 = v12;
  v19 = *a1;
  *(_QWORD *)&v30.Length = 5111808LL;
  v6 = RtlUnicodeStringPrintf(
         &v30,
         L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         v19,
         v18,
         v17,
         v16,
         v15,
         v14,
         v13,
         v25,
         v11,
         v10,
         v26);
  if ( !v6 )
  {
    KeyHandle = 0LL;
    v6 = KRegKey::Open((KRegKey *)&KeyHandle, 1u, &v30, v9);
    if ( v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x10u,
          (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
          (__int64)a1);
LABEL_31:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
      goto LABEL_32;
    }
    v20 = 0LL;
    *(_QWORD *)&v28 = 0LL;
    v31 = 0LL;
    v21 = L"ServiceName";
    do
    {
      if ( !*v21 )
        break;
      ++v21;
      --v2;
    }
    while ( v2 );
    v6 = v2 == 0 ? 0xC000000D : 0;
    if ( v2 )
    {
      v22 = 2 * v2;
      v31.Buffer = L"ServiceName";
      v31.Length = -2 - v22;
      v31.MaximumLength = -v22;
    }
    if ( v6 >= 0 )
    {
      v6 = KRegKey::QueryValueString(&KeyHandle, &v31, (void **)&v28);
      if ( !v6 )
      {
        v23 = *v32;
        *v32 = (void *)v28;
        if ( v23 )
          ExFreePoolWithTag(v23, 0x7274534Bu);
        v6 = 0;
        goto LABEL_29;
      }
      v20 = (void *)v28;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x11u,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
        (__int64)a1);
LABEL_29:
    if ( v20 )
      ExFreePoolWithTag(v20, 0x7274534Bu);
    goto LABEL_31;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
      (__int64)a1);
LABEL_32:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v29);
  return (unsigned int)v6;
}

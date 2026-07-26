/*
 * XREFs of GetModuleServiceName @ 0x1C0141528
 * Callers:
 *     CreateKModule @ 0x1C0141160 (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028C30 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035B24 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6F0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116E78 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0119C14 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall GetModuleServiceName(unsigned int *a1, void **a2)
{
  __int64 v4; // r8
  const wchar_t *v5; // rax
  unsigned int v6; // edi
  NTSTATUS v7; // eax
  HANDLE v8; // rbx
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
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  void *v22; // rcx
  int v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+60h] [rbp-A0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  KRegKey v26; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v28; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v29; // [rsp+A0h] [rbp-60h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  char v31; // [rsp+E0h] [rbp-20h] BYREF

  v26.m_ptr = 0LL;
  v4 = 0x7FFFLL;
  v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\KLoader\\Modules";
  *(_OWORD *)Handle = 0LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = v4 == 0 ? 0xC000000D : 0;
  if ( !v4 )
    goto LABEL_6;
  Handle[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\KLoader\\Modules";
  LOWORD(Handle[0]) = 2 * (0x7FFF - v4);
  WORD1(Handle[0]) = LOWORD(Handle[0]) + 2;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  v8 = KeyHandle;
  v6 = v7;
  v26.m_ptr = KeyHandle;
  if ( v7 )
  {
LABEL_6:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
    goto LABEL_8;
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
  v28.Buffer = (wchar_t *)&v31;
  v24 = *((unsigned __int8 *)a1 + 15);
  v23 = v12;
  v19 = *a1;
  *(_QWORD *)&v28.Length = 5111808LL;
  v6 = RtlUnicodeStringPrintf(
         &v28,
         L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         v19,
         v18,
         v17,
         v16,
         v15,
         v14,
         v13,
         v23,
         v11,
         v10,
         v24);
  if ( v6 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xFu,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
        (__int64)a1);
    goto LABEL_8;
  }
  Handle[0] = 0LL;
  v6 = KRegKey::Open((KRegKey *)Handle, 1u, &v28, v8);
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
LABEL_15:
    KRegKey::~KRegKey((KRegKey *)Handle);
LABEL_8:
    KRegKey::~KRegKey(&v26);
    return v6;
  }
  KeyHandle = 0LL;
  v20 = 0x7FFFLL;
  v29 = 0LL;
  v21 = L"ServiceName";
  do
  {
    if ( !*v21 )
      break;
    ++v21;
    --v20;
  }
  while ( v20 );
  v6 = v20 == 0 ? 0xC000000D : 0;
  if ( !v20
    || (v29.Buffer = L"ServiceName",
        v29.Length = 2 * (0x7FFF - v20),
        v29.MaximumLength = v29.Length + 2,
        (v6 = KRegKey::QueryValueString(Handle, &v29, &KeyHandle)) != 0) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x11u,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
        (__int64)a1);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&KeyHandle);
    goto LABEL_15;
  }
  v22 = *a2;
  *a2 = KeyHandle;
  if ( v22 )
    ExFreePoolWithTag(v22, 0x7274534Bu);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v8 )
    ZwClose(v8);
  return 0LL;
}

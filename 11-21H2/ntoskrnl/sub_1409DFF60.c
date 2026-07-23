/*
 * XREFs of sub_1409DFF60 @ 0x1409DFF60
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_1409DFC30 @ 0x1409DFC30 (sub_1409DFC30.c)
 *     sub_1409E0DC0 @ 0x1409E0DC0 (sub_1409E0DC0.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409DFF60(unsigned __int8 *a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r14
  __int64 Pool2; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rdi
  NTSTATUS v11; // ebx
  _QWORD *v12; // rsi
  _DWORD *v13; // rbx
  __int64 v14; // r15
  unsigned int v15; // esi
  PCWSTR *v16; // r15
  _DWORD *v17; // r14
  __int64 CreateOptions; // [rsp+28h] [rbp-61h]
  unsigned int Data; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp+7h] BYREF

  KeyHandle = 0LL;
  v23[0] = L"Family";
  v23[1] = L"Model";
  v23[2] = L"Stepping";
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  Data = sub_140A56B08();
  v4 = -1LL;
  do
    ++v4;
  while ( aRegistryMachin_86[v4] );
  v5 = 2 * v4 + 514;
  v6 = v5;
  Pool2 = ExAllocatePool2(256LL, v5, 1350005829LL);
  v9 = (wchar_t *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v11 = sub_1409E0DC0(v8, Data, a2, v5, Pool2);
  if ( v11 >= 0 )
    goto LABEL_16;
  sub_1402E1280(
    v9,
    v6,
    L"%ws\\%ws:%d",
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
    L"Architecture",
    Data);
  v12 = v23;
  v13 = a2;
  v14 = 3LL;
  do
  {
    if ( *v13 != -1 )
    {
      LODWORD(CreateOptions) = *v13;
      sub_1402E1280(v9, v6, L"%ws-%ws:%d", v9, *v12, CreateOptions);
    }
    ++v13;
    ++v12;
    --v14;
  }
  while ( v14 );
  RtlInitUnicodeString(&DestinationString, v9);
  v15 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v11 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Architecture");
    v11 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v16 = (PCWSTR *)v23;
    v17 = a2;
    do
    {
      if ( *v17 != -1 )
      {
        RtlInitUnicodeString(&DestinationString, *v16);
        v11 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &a2[v15], 4u);
        if ( v11 < 0 )
          break;
      }
      ++v15;
      ++v17;
      ++v16;
    }
    while ( v15 < 3 );
    ZwClose(KeyHandle);
    if ( v11 >= 0 )
LABEL_16:
      sub_1409DFC30((__int64)v9, a1);
  }
  ExFreePoolWithTag(v9, 0x50777445u);
  return (unsigned int)v11;
}

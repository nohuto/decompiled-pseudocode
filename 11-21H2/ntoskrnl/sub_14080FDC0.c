/*
 * XREFs of sub_14080FDC0 @ 0x14080FDC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A5A64 @ 0x1403A5A64 (sub_1403A5A64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14055F10C @ 0x14055F10C (sub_14055F10C.c)
 *     sub_1406E6D40 @ 0x1406E6D40 (sub_1406E6D40.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     sub_1408100A4 @ 0x1408100A4 (sub_1408100A4.c)
 *     sub_14093FB40 @ 0x14093FB40 (sub_14093FB40.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14080FDC0()
{
  __int64 v0; // rbx
  int v1; // eax
  unsigned __int16 Length; // di
  wchar_t *Buffer; // rbx
  __int16 v4; // ax
  char v5; // r12
  void *v6; // rcx
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // r15
  NTSTATUS v8; // eax
  int v9; // ecx
  void *v10; // rcx
  __int64 result; // rax
  __int64 v12; // r14
  const WCHAR *v13; // rdx
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  __int16 v15; // r9
  ULONG v16; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING Name; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h]
  __int64 v20; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_NAME_INFORMATION v24; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t Str1[256]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _WORD v27[256]; // [rsp+4B8h] [rbp+3B0h] BYREF

  Name = 0LL;
  v17 = 0;
  v21 = 0LL;
  v20 = 0LL;
  DestinationString = 0LL;
  if ( byte_140C46C60 )
  {
    while ( 1 )
    {
LABEL_32:
      v16 = 0;
      result = sub_1403A5A64();
      v12 = result;
      if ( !result )
        return result;
      v0 = *(_QWORD *)(result + 24);
      v1 = *(unsigned __int16 *)(result - 6) - 48;
      v22 = v0;
      LODWORD(v19) = v1;
      if ( v0 )
      {
        RtlInitUnicodeString(&Name, 0LL);
        if ( *(_QWORD *)(v0 + 64) )
          Name = *(UNICODE_STRING *)(v0 + 56);
        Length = Name.Length;
        if ( Name.Length )
          goto LABEL_8;
        v16 = 0;
        if ( ObQueryNameString((PVOID)v0, &v24, 0x110u, &v16) >= 0 && v16 )
        {
          Name = v24.Name;
          goto LABEL_42;
        }
        v13 = &word_140867F00;
      }
      else
      {
        v13 = L"Application Popup";
      }
      RtlInitUnicodeString(&Name, v13);
LABEL_42:
      Length = Name.Length;
      if ( !Name.Length )
      {
        Buffer = Name.Buffer;
        goto LABEL_14;
      }
LABEL_8:
      Buffer = &Name.Buffer[((unsigned __int64)Length >> 1) - 1];
      if ( *Buffer == 92 )
        goto LABEL_12;
      do
      {
        if ( Buffer == Name.Buffer )
          break;
        --Buffer;
      }
      while ( *Buffer != 92 );
      if ( *Buffer == 92 )
LABEL_12:
        ++Buffer;
      v4 = LOWORD(Name.Buffer) - (_WORD)Buffer;
      Name.Buffer = Buffer;
      Length += v4;
      Name.Length = Length;
LABEL_14:
      v16 = 0;
      v5 = 0;
      v6 = *(void **)(v12 + 16);
      p_ObjectNameInfo = &ObjectNameInfo;
      if ( v6
        && ((v8 = ObQueryNameString(v6, &ObjectNameInfo, 0x110u, &v16), v8 != -1073741820)
         || (Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, v16, 538996553LL),
             v5 = 0,
             (p_ObjectNameInfo = Pool2) != 0LL)
         && (v5 = 1, v8 = ObQueryNameString(*(PVOID *)(v12 + 16), Pool2, v16, &v16), v8 != -1073741820))
        && v8 >= 0
        && v16 )
      {
        v21 = p_ObjectNameInfo->Name;
      }
      else
      {
        RtlInitUnicodeString(&v21, &word_140867F00);
      }
      Str1[0] = 0;
      v27[0] = 0;
      if ( Buffer )
        sub_1402D88AC(Str1, 256LL, (__int64)Buffer, (unsigned __int64)Length >> 1);
      if ( v21.Buffer )
        sub_1402D88AC(v27, 256LL, (__int64)v21.Buffer, (unsigned __int64)v21.Length >> 1);
      if ( v5 == 1 )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
      if ( (unsigned int)(*(_DWORD *)(v12 + 52) - 1074004004) <= 1 && !wcsicmp(Str1, L"NTFS") )
      {
        v15 = *(_WORD *)(v12 + 84);
        *(_WORD *)(v12 + 42) -= v15;
        v17 = v15;
        v20 = v12 + 120;
      }
      if ( (int)sub_1408100A4(v9, (int)v12 + 40, v19, (int)v12 + 32, (__int64)Str1, (__int64)v27, v17, v20) < 0 )
      {
        sub_14055F10C((__int64 *)v12);
        return sub_14093FB40();
      }
      _InterlockedExchangeAdd(&dword_140C46D00, -*(unsigned __int16 *)(v12 - 6));
      v10 = *(void **)(v12 + 16);
      if ( v10 )
        ObfDereferenceObject(v10);
      if ( v22 )
        ObfDereferenceObject(*(PVOID *)(v12 + 24));
      ExFreePoolWithTag((PVOID)(v12 - 8), 0);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"Eventlog-System");
  if ( (int)sub_1406E6D40((__int64)&DestinationString, &word_140CF7078) >= 0 )
  {
    byte_140C46C60 = 1;
    goto LABEL_32;
  }
  return sub_14093FB40();
}

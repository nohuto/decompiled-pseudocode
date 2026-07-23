/*
 * XREFs of sub_14082666C @ 0x14082666C
 * Callers:
 *     sub_140826000 @ 0x140826000 (sub_140826000.c)
 *     sub_1408646E8 @ 0x1408646E8 (sub_1408646E8.c)
 *     sub_14095C12C @ 0x14095C12C (sub_14095C12C.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140826850 @ 0x140826850 (sub_140826850.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_1408273E0 @ 0x1408273E0 (sub_1408273E0.c)
 *     sub_14095BDAC @ 0x14095BDAC (sub_14095BDAC.c)
 *     sub_140A22DB0 @ 0x140A22DB0 (sub_140A22DB0.c)
 *     sub_140A304B4 @ 0x140A304B4 (sub_140A304B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14082666C(PCWSTR Source, char a2, int a3)
{
  const WCHAR *v4; // rsi
  wchar_t *Pool2; // r14
  char v6; // r13
  int v8; // eax
  char *v9; // rdi
  int v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // r9d
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rcx
  PWCHAR UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r9d
  int v22; // eax
  UNICODE_STRING LinkTarget; // [rsp+68h] [rbp-61h] BYREF
  int v24; // [rsp+78h] [rbp-51h] BYREF
  int v25; // [rsp+7Ch] [rbp-4Dh] BYREF
  PVOID P; // [rsp+80h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-39h] BYREF
  HANDLE LinkHandle; // [rsp+98h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  UNICODE_STRING SearchString; // [rsp+E0h] [rbp+17h] BYREF

  P = 0LL;
  DirectoryHandle = 0LL;
  v4 = Source;
  LinkHandle = 0LL;
  Handle = 0LL;
  v25 = 0;
  v24 = 0;
  Pool2 = 0LL;
  v6 = 0;
  LinkTarget = 0LL;
  DestinationString = 0LL;
  SearchString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = sub_1408268AC(v4, (__int64)&P);
  v9 = (char *)P;
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( (*((_DWORD *)P + 16) & 1) != 0 )
    {
      v13 = a2 & 8;
    }
    else
    {
      v11 = *((unsigned __int16 *)P + 16) + 32LL;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, v11, 1650749520LL);
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_11;
      }
      v10 = sub_1402E0198(Pool2, v11 >> 1, L"%wZ\\%ws", v9 + 32, L"DriverDatabase");
      if ( v10 < 0 )
        goto LABEL_11;
      v13 = a2 & 8;
      v14 = (v13 != 0 ? 2 : 0) | 1;
      if ( (a2 & 0x40) == 0 )
        v14 = (a2 & 8) != 0 ? 2 : 0;
      v10 = sub_1408273E0(v14, (_DWORD)Source, a3, v12, (__int64)Pool2, v14);
      if ( v10 < 0 )
        goto LABEL_11;
      v6 = 1;
    }
    if ( !v13 )
    {
LABEL_10:
      sub_140826850();
      v9 = 0LL;
LABEL_11:
      v4 = Source;
      goto LABEL_12;
    }
    v10 = sub_14077198C(
            *(__int64 *)&qword_140D00AC0,
            *((_QWORD *)v9 + 3),
            7,
            *((_QWORD *)v9 + 9),
            0LL,
            (__int64)qword_14001CFC8,
            18,
            *((_QWORD *)v9 + 7),
            (unsigned int)*((unsigned __int16 *)v9 + 24) + 2,
            0);
    if ( v10 < 0 )
      goto LABEL_11;
    LinkTarget.Buffer = (wchar_t *)*((_QWORD *)v9 + 7);
    RtlInitUnicodeString(&SearchString, L"\\System32\\config\\");
    UnicodeSubstring = RtlFindUnicodeSubstring((PUNICODE_STRING)v9 + 3, &SearchString, 1u);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)((_DWORD)UnicodeSubstring - *((_DWORD *)v9 + 14)) >> 1);
    }
    else
    {
      LinkTarget.Length = *((_WORD *)v9 + 24);
      for ( i = LinkTarget.Length; i > 2u; LinkTarget.Length = i )
      {
        if ( LinkTarget.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || LinkTarget.Buffer[((unsigned __int64)i >> 1) - 1] != 92 )
      {
LABEL_34:
        LinkTarget.MaximumLength = i;
        if ( (a2 & 0x10) != 0 )
        {
          RtlInitUnicodeString(&SearchString, L"\\DriverStore\\Nodes");
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &SearchString;
          ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v10 = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( v10 < 0 )
            goto LABEL_11;
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v9 + 16);
          ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v10 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
          if ( v10 < 0 )
            goto LABEL_11;
        }
        if ( (unsigned int)sub_14077DA5C(
                             *(__int64 *)&qword_140D00AC0,
                             *((_QWORD *)v9 + 3),
                             7,
                             *((_QWORD *)v9 + 9),
                             0LL,
                             (__int64)qword_14001CFF8,
                             (__int64)&v25,
                             0LL,
                             0,
                             (__int64)&v24,
                             0) == -1073741275 )
        {
          v10 = RtlDuplicateUnicodeString(1u, &LinkTarget, &DestinationString);
          if ( v10 < 0 )
            goto LABEL_11;
          v10 = sub_14077198C(
                  *(__int64 *)&qword_140D00AC0,
                  *((_QWORD *)v9 + 3),
                  7,
                  *((_QWORD *)v9 + 9),
                  0LL,
                  (__int64)qword_14001CFF8,
                  18,
                  (__int64)DestinationString.Buffer,
                  (unsigned int)DestinationString.Length + 2,
                  0);
          if ( v10 < 0 )
            goto LABEL_11;
        }
        v19 = 0LL;
        if ( *(_QWORD *)&qword_140D00AC0 )
          v19 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
        v10 = sub_14077FFEC(v19, 2147483650LL, *((_QWORD *)v9 + 3), 0, 0x2000000u, (__int64)&Handle);
        if ( v10 < 0 )
          goto LABEL_11;
        v22 = sub_140A22DB0(v20, *((_QWORD *)v9 + 3), 3, v21, (__int64)Handle);
        v10 = v22;
        if ( v22 == 0x40000000 )
        {
          v10 = 0;
        }
        else if ( v22 < 0 )
        {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      i -= 2;
    }
    LinkTarget.Length = i;
    goto LABEL_34;
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  RtlFreeUnicodeString(&DestinationString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v9 )
  {
    if ( v6 )
      sub_140A304B4(v15, v4);
    sub_14095BDAC(v9);
  }
  return (unsigned int)v10;
}

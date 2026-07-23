/*
 * XREFs of sub_140642A44 @ 0x140642A44
 * Callers:
 *     sub_140372788 @ 0x140372788 (sub_140372788.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x14041BB80 (ZwQueryInformationToken.c)
 *     sub_140642CDC @ 0x140642CDC (sub_140642CDC.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140642A44(__int64 a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  int v6; // r15d
  __int64 *Pool2; // r14
  __int64 v8; // rcx
  NTSTATUS InformationToken; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // bx
  wchar_t *v12; // rax
  ULONG_PTR v13; // rdi
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  WCHAR TargetPath[264]; // [rsp+A0h] [rbp-60h] BYREF

  UnicodeString = 0LL;
  v6 = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 84LL, 5131347LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  ReturnLength[0] = 0;
  InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Pool2, 0x54u, ReturnLength);
  if ( InformationToken >= 0 )
  {
    v10 = *Pool2;
    LOBYTE(v8) = *(_BYTE *)(*Pool2 + 1);
    if ( (unsigned __int8)v8 < 2u || (_BYTE)v8 == 5 && *(_DWORD *)(v10 + 8) == 21 && *(_DWORD *)(v10 + 24) == 503 )
    {
      *a4 = 0;
    }
    else
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)*Pool2, 1u);
      if ( InformationToken >= 0 )
      {
        ReturnLength[0] = 0;
        InformationToken = RtlGetPersistedStateLocation(
                             L"GlobalizationUserSettings",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                             LocationTypeRegistry,
                             TargetPath,
                             0x208u,
                             ReturnLength);
        if ( InformationToken >= 0 )
        {
          v11 = LOWORD(ReturnLength[0]) + UnicodeString.Length + 4;
          v12 = (wchar_t *)ExAllocatePool2(256LL, v11, 5131347LL);
          v13 = (ULONG_PTR)v12;
          if ( v12 )
          {
            *(_QWORD *)&Destination.Length = 0LL;
            Destination.MaximumLength = v11;
            Destination.Buffer = v12;
            InformationToken = RtlAppendUnicodeToString(&Destination, TargetPath);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString(&Destination, &word_140439030);
              if ( InformationToken >= 0 )
              {
                InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                if ( InformationToken >= 0 )
                {
                  ObjectAttributes.RootDirectory = 0LL;
                  *(_QWORD *)ReturnLength = 0LL;
                  ObjectAttributes.ObjectName = &Destination;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey((PHANDLE)ReturnLength, 0x20019u, &ObjectAttributes) < 0 )
                  {
                    v6 = 1;
                    *a4 = 1;
                  }
                  else
                  {
                    ZwClose(*(HANDLE *)ReturnLength);
                    *a4 = 2;
                    InformationToken = ZwOpenKey(a3, 8u, &ObjectAttributes);
                  }
                }
              }
            }
            sub_140348B40(v13);
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
        RtlFreeUnicodeString(&UnicodeString);
      }
      if ( !v6 )
        goto LABEL_23;
    }
    InformationToken = sub_140642CDC(v8, a3);
  }
LABEL_23:
  sub_140348B40((ULONG_PTR)Pool2);
  return (unsigned int)InformationToken;
}

/*
 * XREFs of sub_140B0BE8C @ 0x140B0BE8C
 * Callers:
 *     sub_140B0B9A8 @ 0x140B0B9A8 (sub_140B0B9A8.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     sub_1403C4824 @ 0x1403C4824 (sub_1403C4824.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0CD58 @ 0x140B0CD58 (sub_140B0CD58.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 */

__int64 __fastcall sub_140B0BE8C(__int64 a1)
{
  NTSTATUS v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  const CHAR *v5; // rax
  GUID *Pool2; // rax
  GUID *v7; // rdi
  GUID *v8; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-98h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  char v12; // [rsp+40h] [rbp-78h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v12;
  v1 = 0;
  v3 = 0;
  DestinationString = 0LL;
  v4 = sub_140B0CD58(a1, "EntryTypeGuidDef");
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (const CHAR *)sub_140B0D2E8(a1, "EntryTypeGuidDef", v3, 0LL);
      if ( !v5 )
        return 0;
      RtlInitAnsiString(&DestinationString, v5);
      if ( RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0) < 0 )
        goto LABEL_12;
      Pool2 = (GUID *)ExAllocatePool2(256LL, 0x50uLL, 0x74694D45u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v1 = RtlGUIDFromString(&GuidString, Pool2);
      v8 = v7;
      if ( v1 < 0 || sub_1403C4824(v7) )
        break;
      *(_QWORD *)v7[4].Data4 = 0LL;
      v7[1].Data1 = 0;
      ++dword_140C54CFC;
      *(_QWORD *)&v7[3].Data1 = (char *)v7 + 40;
      *(_QWORD *)v7[2].Data4 = (char *)v7 + 40;
      *(_QWORD *)&v7[2].Data1 = (char *)v7 + 40;
      *(_QWORD *)&v7[4].Data1 = (char *)v7 + 56;
      *(_QWORD *)v7[3].Data4 = (char *)v7 + 56;
      *(_QWORD *)v7[1].Data4 = qword_140C48C60;
      qword_140C48C60 = (__int64)v7[1].Data4;
LABEL_8:
      if ( ++v3 >= v4 )
        return (unsigned int)v1;
    }
    ExFreePoolWithTag(v8, 0x74694D45u);
LABEL_12:
    v1 = 0;
    goto LABEL_8;
  }
  return (unsigned int)v1;
}

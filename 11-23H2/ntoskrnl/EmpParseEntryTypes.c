/*
 * XREFs of EmpParseEntryTypes @ 0x140B55B34
 * Callers:
 *     EmpParseInfDatabase @ 0x140B55840 (EmpParseInfDatabase.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6EE0 (RtlInitAnsiString.c)
 *     EmpSearchEntryDatabase @ 0x14038B62C (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406CF6F0 (RtlGUIDFromString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     EmpInfParseGetSectionLineCount @ 0x140B569FC (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140B56FA0 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseEntryTypes(__int64 a1)
{
  NTSTATUS v1; // ebx
  unsigned int v3; // esi
  unsigned int SectionLineCount; // ebp
  const CHAR *SectionLineIndex; // rax
  GUID *Pool2; // rax
  GUID *v7; // rdi
  GUID *v8; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-98h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  char v12; // [rsp+40h] [rbp-78h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v12;
  v1 = 0;
  v3 = 0;
  DestinationString = 0LL;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "EntryTypeGuidDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      SectionLineIndex = (const CHAR *)CmpGetSectionLineIndex(a1, "EntryTypeGuidDef", v3, 0LL);
      if ( !SectionLineIndex )
        return 0;
      RtlInitAnsiString(&DestinationString, SectionLineIndex);
      if ( RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0) < 0 )
        goto LABEL_12;
      Pool2 = (GUID *)ExAllocatePool2(256LL, 0x50uLL, 0x74694D45u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v1 = RtlGUIDFromString(&GuidString, Pool2);
      v8 = v7;
      if ( v1 < 0 || EmpSearchEntryDatabase(v7) )
        break;
      *(_QWORD *)v7[4].Data4 = 0LL;
      v7[1].Data1 = 0;
      ++EmpNumberOfEntryTypes;
      *(_QWORD *)&v7[3].Data1 = (char *)v7 + 40;
      *(_QWORD *)v7[2].Data4 = (char *)v7 + 40;
      *(_QWORD *)&v7[2].Data1 = (char *)v7 + 40;
      *(_QWORD *)&v7[4].Data1 = (char *)v7 + 56;
      *(_QWORD *)v7[3].Data4 = (char *)v7 + 56;
      *(_QWORD *)v7[1].Data4 = EmpEntryListHead;
      EmpEntryListHead = (__int64)v7[1].Data4;
LABEL_8:
      if ( ++v3 >= SectionLineCount )
        return (unsigned int)v1;
    }
    ExFreePoolWithTag(v8, 0x74694D45u);
LABEL_12:
    v1 = 0;
    goto LABEL_8;
  }
  return (unsigned int)v1;
}

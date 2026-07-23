/*
 * XREFs of sub_1409AC86C @ 0x1409AC86C
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409AC86C(__int64 a1)
{
  const UNICODE_STRING *v2; // rbx
  __int64 result; // rax
  unsigned __int16 v4; // si
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // rdi
  __int64 v7; // rbx
  NTSTATUS v8; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 v11; // [rsp+98h] [rbp+38h] BYREF
  HANDLE LinkHandle; // [rsp+A0h] [rbp+40h] BYREF

  v11 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v2 = (const UNICODE_STRING *)sub_140204738(a1);
  result = sub_1402DE190(0x14u, v2[79].Length, (__int16 *)&v11);
  if ( (int)result >= 0 )
  {
    v4 = v11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x70537350u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = PoolWithTag;
      RtlCopyUnicodeString(&DestinationString, &stru_140A38388);
      RtlAppendUnicodeStringToString(&DestinationString, v2 + 79);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38B80;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 528;
      v7 = PsAttachSiloToCurrentThread(a1);
      v8 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
      PsDetachSiloFromCurrentThread(v7);
      if ( v8 >= 0 )
        ZwClose(LinkHandle);
      ExFreePoolWithTag(v6, 0x70537350u);
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}

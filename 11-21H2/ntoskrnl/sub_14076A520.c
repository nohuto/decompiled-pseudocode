/*
 * XREFs of sub_14076A520 @ 0x14076A520
 * Callers:
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14078C9E8 @ 0x14078C9E8 (sub_14078C9E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_14076A520(wchar_t *Str2)
{
  WCHAR *v1; // rbx
  bool v2; // di
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  v1 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v2 = 0;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    v3 = sub_14078C9E8(
           512LL,
           1198550608LL,
           &SourceString,
           3LL,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage",
           &word_140865B20);
    v1 = (WCHAR *)SourceString;
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        if ( sub_14067B838(KeyHandle, L"Deny_Execute", 0, &P) >= 0 )
        {
          if ( !P )
            goto LABEL_11;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x47706E50u);
  return v2;
}

/*
 * XREFs of sub_1403DCE64 @ 0x1403DCE64
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 */

int sub_1403DCE64()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( (unsigned int)dword_140D050A4 >= 7 )
      {
        if ( (unsigned int)dword_140D050A4 > 0x46 )
          dword_140D050A4 = 70;
      }
      else
      {
        dword_140D050A4 = 7;
      }
    }
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( (unsigned int)dword_140D050A8 >= 6 )
      {
        if ( (unsigned int)dword_140D050A8 > 0x46 )
          dword_140D050A8 = 70;
      }
      else
      {
        dword_140D050A8 = 6;
      }
    }
    if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    {
      if ( dword_140D05074 )
      {
        if ( (unsigned int)dword_140D05074 > 0xA )
          dword_140D05074 = 10;
      }
      else
      {
        dword_140D05074 = 1;
      }
    }
    result = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    if ( result >= 0 )
    {
      result = dword_140D05080;
      if ( dword_140D05080 )
      {
        if ( (unsigned int)dword_140D05080 > 0x14 )
          dword_140D05080 = 20;
      }
      else
      {
        dword_140D05080 = 1;
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}

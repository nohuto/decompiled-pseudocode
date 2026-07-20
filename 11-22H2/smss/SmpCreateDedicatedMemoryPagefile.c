/*
 * XREFs of SmpCreateDedicatedMemoryPagefile @ 0x1400112B0
 * Callers:
 *     SmpCreatePagingFiles @ 0x140009EC4 (SmpCreatePagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

int SmpCreateDedicatedMemoryPagefile()
{
  int result; // eax
  union _LARGE_INTEGER InitialSize; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+50h] [rbp-30h] BYREF
  _DWORD KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF

  ValueName.Buffer = L"DedicatedMemoryPagefileSizeMB";
  *(_DWORD *)&ValueName.Length = 3932218;
  FileName.Buffer = L"Dedicated memory pagefile";
  *(_DWORD *)&FileName.Length = 3407922;
  result = NtQueryValueKey(
             SmpMmKey,
             &ValueName,
             KeyValuePartialInformationAlign64,
             KeyValueInformation,
             0x10u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyValueInformation[0] == 4 && KeyValueInformation[1] == 4 )
    {
      InitialSize.QuadPart = (unsigned __int64)KeyValueInformation[2] << 20;
      return NtCreatePagingFile(&FileName, &InitialSize, &InitialSize, 0x800000u);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}

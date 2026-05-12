/*
 * XREFs of ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1C0009F9C
 * Callers:
 *     ?ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z @ 0x1C0009E60 (-ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x1C0009EE8 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x1C0010BFC (-GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?ScTrimString@@YAXPEAD@Z @ 0x1C000A084 (-ScTrimString@@YAXPEAD@Z.c)
 */

__int64 __fastcall ScAnsiToUnicodeString(char *SourceString, struct _UNICODE_STRING *a2)
{
  ULONG v4; // eax
  NTSTATUS v5; // ebx
  PWSTR v6; // rcx
  _UNICODE_STRING v7; // xmm0
  PWSTR Buffer; // rcx
  _UNICODE_STRING v10; // [rsp+20h] [rbp-28h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v10.Length = 0LL;
  ScTrimString(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v10.MaximumLength = v4;
  v10.Buffer = (PWSTR)ExAllocatePool2(64LL, v4, 1833984851LL);
  if ( v10.Buffer )
  {
    v5 = RtlAnsiStringToUnicodeString(&v10, &DestinationString, 0);
    if ( v5 < 0 )
    {
      Buffer = v10.Buffer;
    }
    else
    {
      v6 = a2->Buffer;
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      v7 = v10;
      Buffer = 0LL;
      v10.Buffer = 0LL;
      *a2 = v7;
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}

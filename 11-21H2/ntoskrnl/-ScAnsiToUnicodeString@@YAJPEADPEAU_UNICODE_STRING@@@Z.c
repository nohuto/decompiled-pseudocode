/*
 * XREFs of ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406509F8
 * Callers:
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x140650AA8 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     ?GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z @ 0x140650ED8 (-GetFruIdDescPost@SC_DISK@@AEAAJPEAU_STORAGE_FRU_ID_DESCRIPTOR@@@Z.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ?ScTrimString@@YAXPEAD@Z @ 0x140650B5C (-ScTrimString@@YAXPEAD@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x14075A820 (RtlxAnsiStringToUnicodeSize.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x140930250 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall ScAnsiToUnicodeString(char *SourceString, struct _UNICODE_STRING *a2)
{
  ULONG v4; // eax
  unsigned int v5; // edx
  unsigned __int8 v6; // r8
  NTSTATUS v7; // ebx
  wchar_t *v8; // rcx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v11; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  ScTrimString(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v11.MaximumLength = v4;
  v11.Buffer = (wchar_t *)SC_ENV::Allocate(v4, v5, v6);
  if ( v11.Buffer )
  {
    v7 = RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0);
    if ( v7 < 0 )
    {
      Buffer = v11.Buffer;
    }
    else
    {
      v8 = a2->Buffer;
      if ( v8 )
        SC_ENV::Free(v8);
      Buffer = 0LL;
      *a2 = v11;
    }
    if ( Buffer )
      SC_ENV::Free(Buffer);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}

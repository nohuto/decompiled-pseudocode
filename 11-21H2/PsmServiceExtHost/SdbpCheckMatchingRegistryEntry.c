/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x18009A12C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x18009A000 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x180095038 (RtlStringCchPrintfW.c)
 *     SdbpCheckMatchingRegistryValue @ 0x18009A330 (SdbpCheckMatchingRegistryValue.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  unsigned int v10; // edi
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 SystemInformation; // [rsp+98h] [rbp-68h] BYREF
  int v16; // [rsp+A0h] [rbp-60h]
  WCHAR SourceString[264]; // [rsp+B0h] [rbp-50h] BYREF

  SourceString[0] = 0;
  KeyHandle = 0LL;
  SystemInformation = 0LL;
  *a9 = 0;
  v16 = 0;
  v10 = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( (int)RtlStringCchPrintfW(SourceString, 260LL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingRegistryEntry",
      1267,
      (unsigned int)"Failed to construct full key path");
    goto LABEL_10;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    goto LABEL_9;
  if ( ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingRegistryEntry",
      1302,
      (unsigned int)"Failed to get processor architecture [%x]");
    goto LABEL_10;
  }
  if ( (_WORD)SystemInformation == 9 && ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) >= 0 )
LABEL_9:
    v10 = SdbpCheckMatchingRegistryValue(KeyHandle, a2, a5, a6, Buf1, Size, (__int64)a9);
  else
    v10 = 1;
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}

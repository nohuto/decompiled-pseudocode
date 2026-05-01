/*
 * XREFs of AslRegistryOpenSubKey @ 0x18008DA24
 * Callers:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18008D6E8 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

NTSTATUS __fastcall AslRegistryOpenSubKey(PHANDLE KeyHandle, void *a2, const WCHAR *a3)
{
  NTSTATUS inited; // eax
  NTSTATUS v6; // ebx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *KeyHandle = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  v6 = inited;
  if ( inited < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryOpenSubKey",
      796,
      (unsigned int)"AslRegistryOpenSubKey passed bad Path [%x]",
      inited);
    return v6;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
  }
}

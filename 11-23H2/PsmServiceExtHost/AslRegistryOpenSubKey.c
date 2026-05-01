/*
 * XREFs of AslRegistryOpenSubKey @ 0x180098964
 * Callers:
 *     AslpProcessMatchRegNode @ 0x18009F728 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

NTSTATUS __fastcall AslRegistryOpenSubKey(PHANDLE KeyHandle, void *a2, const WCHAR *a3)
{
  NTSTATUS inited; // eax
  NTSTATUS v6; // ebx
  NTSTATUS v8; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *KeyHandle = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  v6 = inited;
  if ( inited >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    v8 = inited;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslRegistryOpenSubKey",
      796,
      (unsigned int)"AslRegistryOpenSubKey passed bad Path [%x]",
      v8);
    return v6;
  }
}

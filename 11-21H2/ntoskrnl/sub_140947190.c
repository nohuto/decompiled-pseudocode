/*
 * XREFs of sub_140947190 @ 0x140947190
 * Callers:
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_14076AD40 @ 0x14076AD40 (sub_14076AD40.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_140947190(PCWSTR SourceString, void *a2, __int64 a3, __int64 a4, PHANDLE KeyHandle)
{
  const WCHAR *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v6 = SourceString;
  DestinationString = 0LL;
  if ( !SourceString || !a2 || !KeyHandle )
    return -1073741811;
  *KeyHandle = 0LL;
  result = -1073741772;
  if ( *SourceString )
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, v6);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
      if ( result >= 0 )
        break;
      *KeyHandle = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
      v6 += v8 + 1;
    }
    while ( *v6 );
  }
  return result;
}

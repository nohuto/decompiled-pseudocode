/*
 * XREFs of BiOpenKeyNonBcd @ 0x140807B14
 * Callers:
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 *     BiLoadHive @ 0x140807084 (BiLoadHive.c)
 *     BiCleanupLoadedStores @ 0x140807BE4 (BiCleanupLoadedStores.c)
 *     BiDoesHiveKeyExist @ 0x140A5D458 (BiDoesHiveKeyExist.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwOpenKey @ 0x14041AFA0 (ZwOpenKey.c)
 */

__int64 __fastcall BiOpenKeyNonBcd(void *a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  unsigned int i; // edi
  NTSTATUS v9; // ebx
  HANDLE KeyHandle; // [rsp+28h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF

  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    if ( v9 < 0 )
    {
      if ( KeyHandle )
        ZwClose(KeyHandle);
    }
    else
    {
      *a4 = KeyHandle;
    }
    if ( v9 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v9;
}

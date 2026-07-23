/*
 * XREFs of BiLoadHive @ 0x140807354
 * Callers:
 *     BiAddStoreFromFile @ 0x140802938 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x14041D2B0 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x14041D2D0 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x14041EBD0 (ZwUnloadKey.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x140806378 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x140806404 (BiReleasePrivilege.c)
 *     BiOpenKeyNonBcd @ 0x140807DE4 (BiOpenKeyNonBcd.c)
 *     BiDoesHiveExist @ 0x140808100 (BiDoesHiveExist.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  HANDLE v6; // rdi
  int v7; // eax
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-D8h]
  __int64 v13; // [rsp+28h] [rbp-D0h]
  __int64 v14; // [rsp+30h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+70h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+B0h] [rbp-48h] BYREF

  memset(&SourceFile, 0, 44);
  memset(&TargetKey, 0, 44);
  v14 = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    Handle = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
      v8 = v7;
      if ( v7 < 0 )
      {
        BiLogMessage(4LL, L"Failed open key %ws. Status: %x", L"\\Registry\\Machine", (unsigned int)v7);
        v6 = Handle;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        TargetKey.Length = 48;
        v6 = Handle;
        TargetKey.RootDirectory = Handle;
        TargetKey.Attributes = 576;
        TargetKey.ObjectName = &DestinationString;
        *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v19, (PCWSTR)(a2 + 12));
        SourceFile.Length = 48;
        SourceFile.RootDirectory = 0LL;
        SourceFile.Attributes = 576;
        SourceFile.ObjectName = &v19;
        *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
        v9 = BiAcquirePrivilege(0x12u, (__int64)&v14);
        v8 = v9;
        if ( v9 < 0 )
        {
          BiLogMessage(
            4LL,
            L"Failed to acquire permissions to load hive. Status: %x",
            L"\\Registry\\Machine",
            (unsigned int)v9);
        }
        else
        {
          v8 = ZwLoadKey2(&TargetKey, &SourceFile, 0x1780u);
          if ( v8 < 0 )
            v8 = ZwLoadKey2(&TargetKey, &SourceFile, 0x1380u);
          if ( v8 < 0 )
            v8 = ZwLoadKey(&TargetKey, &SourceFile);
          BiReleasePrivilege((unsigned int *)&v14);
          if ( v8 < 0 )
          {
            v11 = 2LL;
            if ( v8 != -1073741790 )
              v11 = 4LL;
            LODWORD(v13) = v8;
            BiLogMessage(
              v11,
              L"Failed load key %ws. Flags: 0x%x File: %s Status: %x",
              SourceString,
              576LL,
              a2 + 12,
              v13,
              v14);
          }
          else
          {
            v8 = ZwOpenKey(a3, 0x20019u, &TargetKey);
            if ( v8 < 0 )
            {
              BiAcquirePrivilege(0x11u, (__int64)&v14);
              ZwUnloadKey(&TargetKey);
              BiReleasePrivilege((unsigned int *)&v14);
              LODWORD(v12) = v8;
              BiLogMessage(4LL, L"Failed open newly loaded key %ws. Flags: 0x%x Status: %x", SourceString, 576LL, v12);
            }
          }
        }
      }
    }
    else
    {
      v8 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v8;
}

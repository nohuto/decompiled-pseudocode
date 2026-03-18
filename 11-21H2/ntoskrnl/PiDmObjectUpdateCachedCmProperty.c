/*
 * XREFs of PiDmObjectUpdateCachedCmProperty @ 0x14077A624
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14077A710 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14077B6F4 (PiDmObjectUpdateCachedObjectProperty.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

void __fastcall PiDmObjectUpdateCachedCmProperty(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        PCWSTR SourceString,
        unsigned int a7)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // ecx
  int v11; // r8d
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  GUID Guid; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 == 1 )
  {
    Guid = 0LL;
    DestinationString = 0LL;
    if ( a4 == 9 )
    {
      if ( a7 )
      {
        if ( a5 == 1 && a7 >= 2 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
          {
            v8 = CmMapCmObjectTypeToPnpObjectType(1LL);
            PiDmObjectUpdateCachedObjectProperty(v8, a2, v9, 0, (__int64)&DEVPKEY_Device_ClassGuid, 13, &Guid, 16);
          }
        }
      }
      else
      {
        v10 = CmMapCmObjectTypeToPnpObjectType(1LL);
        PiDmObjectUpdateCachedObjectProperty(v10, a2, v11, 0, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, 0);
      }
    }
  }
}

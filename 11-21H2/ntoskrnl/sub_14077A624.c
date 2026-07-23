/*
 * XREFs of sub_14077A624 @ 0x14077A624
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 *     sub_14077B6F4 @ 0x14077B6F4 (sub_14077B6F4.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

void __fastcall sub_14077A624(int a1, int a2, __int64 a3, int a4, int a5, PCWSTR SourceString, unsigned int a7)
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
            v8 = sub_14077A710(1LL);
            sub_14077B6F4(v8, a2, v9, 0, (__int64)&stru_140010A18, 13, &Guid, 16);
          }
        }
      }
      else
      {
        v10 = sub_14077A710(1LL);
        sub_14077B6F4(v10, a2, v11, 0, (__int64)&stru_140010A18, 0, 0LL, 0);
      }
    }
  }
}

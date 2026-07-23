/*
 * XREFs of sub_140B2931C @ 0x140B2931C
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406C2A50 @ 0x1406C2A50 (sub_1406C2A50.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140B2940C @ 0x140B2940C (sub_140B2940C.c)
 */

bool sub_140B2931C()
{
  bool result; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  __int64 v2; // [rsp+30h] [rbp-30h]
  __int64 v3; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+4Ch] [rbp-14h]
  __int128 v7; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Handle = 0LL;
  v6 = 0;
  v2 = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  v3 = 0LL;
  p_DestinationString = &DestinationString;
  v5 = 528;
  v7 = 0LL;
  result = 0;
  if ( (int)sub_1406C2A50((__int64)&Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
    if ( (int)sub_1406C2A50((__int64)&Handle) >= 0 )
    {
      ObCloseHandle(Handle, 0);
      RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
      if ( (int)sub_1406C2A50((__int64)&Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        if ( (int)sub_140B2940C() >= 0 )
          return 1;
      }
    }
  }
  return result;
}

/*
 * XREFs of sub_140B2BC5C @ 0x140B2BC5C
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406A0F30 @ 0x1406A0F30 (sub_1406A0F30.c)
 *     sub_1406C4D40 @ 0x1406C4D40 (sub_1406C4D40.c)
 *     sub_1406E1680 @ 0x1406E1680 (sub_1406E1680.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     sub_1407B0FE0 @ 0x1407B0FE0 (sub_1407B0FE0.c)
 */

char __fastcall sub_140B2BC5C(__int64 a1, _STRING *a2)
{
  __int64 v2; // r9
  int v4; // eax
  int v5; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v9[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+54h] [rbp-ACh]
  __int128 v14; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING v15; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v9[1] = 0;
  v13 = 0;
  Handle = 0LL;
  v15 = 0LL;
  DestinationString = 0LL;
  if ( (int)sub_1402E0198(SourceString, 256LL, L"\\ArcName\\%S", v2) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 512;
  while ( 1 )
  {
    v9[0] = 48;
    p_DestinationString = &DestinationString;
    v10 = 0LL;
    v12 = 576;
    v14 = 0LL;
    v4 = sub_1406A0F30((unsigned __int64)&Handle, 983041, (__int64)v9);
    if ( v4 == -1073741788 )
      break;
    if ( v4 >= 0 )
    {
      DestinationString.Length = 0;
      v5 = sub_1407B0FE0(Handle, (unsigned __int64)&DestinationString, 0LL);
      ObCloseHandle(Handle, 0);
      if ( v5 >= 0 )
        continue;
    }
    return 0;
  }
  if ( RtlUnicodeStringToAnsiString(a2, &DestinationString, 0) < 0 )
    return 0;
  RtlInitUnicodeString(&v15, L"\\Device\\BootDevice");
  v9[0] = 48;
  p_DestinationString = &v15;
  v10 = 0LL;
  v12 = 576;
  v14 = 0LL;
  if ( (int)sub_1406A0F30((unsigned __int64)&Handle, 983041, (__int64)v9) < 0 )
    return 0;
  sub_1406E1680(Handle);
  ObCloseHandle(Handle, 0);
  v9[0] = 48;
  p_DestinationString = &v15;
  v10 = 0LL;
  v12 = 592;
  v14 = 0LL;
  sub_1406C4D40((unsigned __int64)&Handle, 983041, (__int64)v9, &DestinationString);
  ObCloseHandle(Handle, 0);
  return 1;
}

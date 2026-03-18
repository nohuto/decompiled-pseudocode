/*
 * XREFs of CheckDesktopPolicy @ 0x1C005FFC0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     RtlLoadStringOrError @ 0x1C00612C0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(const UNICODE_STRING *a1, const WCHAR *a2)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[160]; // [rsp+60h] [rbp-A0h] BYREF

  ResultLength = 0;
  v10 = gdwPolicyFlags & 6;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v14);
      a2 = (const WCHAR *)v14;
    }
    do
    {
      v5 = OpenCacheKeyEx(a1, 4LL, 131097LL, &v10);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
      v6 = ZwQueryValueKey(v5, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v5);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL, v7, v8, v9);
        return 1LL;
      }
    }
    while ( v10 );
  }
  return 0LL;
}

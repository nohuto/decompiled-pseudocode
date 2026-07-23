/*
 * XREFs of PipHardwareConfigClearStartOverrideCallback @ 0x140951F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchPrintfExW @ 0x14022B830 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041CC90 (ZwDeleteValueKey.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigClearStartOverrideCallback(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4)
{
  __int64 v7; // rcx
  HANDLE KeyHandle; // [rsp+40h] [rbp-258h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-250h] BYREF
  wchar_t pszDest[264]; // [rsp+60h] [rbp-238h] BYREF

  KeyHandle = 0LL;
  if ( RtlStringCchPrintfExW(pszDest, 0x104uLL, 0LL, 0LL, 0x800u, L"%s\\%s", a3, L"StartOverride") >= 0 )
  {
    v7 = a1 ? *(_QWORD *)(a1 + 224) : 0LL;
    if ( (int)SysCtxRegOpenKey(v7, a2, (__int64)pszDest, 0, 2u, (__int64)&KeyHandle) >= 0 )
    {
      DestinationString = 0LL;
      if ( RtlInitUnicodeStringEx(&DestinationString, a4) >= 0 )
        ZwDeleteValueKey(KeyHandle, &DestinationString);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0LL;
}

/*
 * XREFs of CompatCachepLookupCdb @ 0x18007AEC0
 * Callers:
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18004E44C (LdrpSendPostSnapNotifications.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180053E9C (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAD8C (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x180099AE0 (wcsrchr.c)
 *     NtApphelpCacheControl @ 0x1800A49F0 (NtApphelpCacheControl.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall CompatCachepLookupCdb(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  _QWORD v8[50]; // [rsp+20h] [rbp-198h] BYREF
  int v9; // [rsp+1D0h] [rbp+18h] BYREF

  memset(v8, 0, 0x188uLL);
  v4 = 0;
  v9 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( RtlInitUnicodeStringEx((PUNICODE_STRING)&v8[31], v6) < 0 )
    return 0LL;
  LODWORD(v8[48]) = 4;
  v8[47] = &v9;
  if ( (int)NtApphelpCacheControl(6LL, v8) >= 0 && (a2 & v9) != 0 )
    return 1;
  return v4;
}

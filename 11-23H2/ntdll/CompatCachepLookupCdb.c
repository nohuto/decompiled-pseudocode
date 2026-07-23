/*
 * XREFs of CompatCachepLookupCdb @ 0x18007427C
 * Callers:
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18002ED90 (LdrpSendPostSnapNotifications.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180081474 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAB20 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x1800953B0 (wcsrchr.c)
 *     NtApphelpCacheControl @ 0x1800A1830 (NtApphelpCacheControl.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CompatCachepLookupCdb(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  _BYTE v8[248]; // [rsp+20h] [rbp-198h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+118h] [rbp-A0h] BYREF
  int *v10; // [rsp+198h] [rbp-20h]
  int v11; // [rsp+1A0h] [rbp-18h]
  int v12; // [rsp+1D0h] [rbp+18h] BYREF

  memset_thunk_772440563353939046(v8, 0, 0x188uLL);
  v4 = 0;
  v12 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( RtlInitUnicodeStringEx(&DestinationString, v6) < 0 )
    return 0LL;
  v11 = 4;
  v10 = &v12;
  if ( (int)NtApphelpCacheControl(6LL, v8) >= 0 && (a2 & v12) != 0 )
    return 1;
  return v4;
}

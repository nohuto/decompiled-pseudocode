/*
 * XREFs of sub_1406F1A04 @ 0x1406F1A04
 * Callers:
 *     sub_1406F1774 @ 0x1406F1774 (sub_1406F1774.c)
 *     sub_1408364C4 @ 0x1408364C4 (sub_1408364C4.c)
 *     sub_1409BA71C @ 0x1409BA71C (sub_1409BA71C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 */

NTSTATUS __fastcall sub_1406F1A04(char a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-238h] BYREF
  WCHAR TargetPath[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140C4EF20 == 2 )
    goto LABEL_2;
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             LocationTypeRegistry,
             TargetPath,
             0x208u,
             BufferLengthOut);
  if ( result >= 0 )
  {
    dword_140C4EF20 = 1;
    LOBYTE(a3) = a1;
    result = sub_14077FDA0(0LL, TargetPath, a3, a2);
    if ( result != -1073741772 )
      return result;
    goto LABEL_2;
  }
  if ( result == -1073741772 )
  {
    dword_140C4EF20 = 2;
LABEL_2:
    LOBYTE(a3) = a1;
    return sub_14077FDA0(2LL, L"TimeZoneInformation", a3, a2);
  }
  return result;
}

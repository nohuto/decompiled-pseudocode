/*
 * XREFs of _GetOverlayPackageKeyForLanguage @ 0x18000B254
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B008 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x18000B480 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 */

int __fastcall GetOverlayPackageKeyForLanguage(PCWSTR Source, PHANDLE KeyHandle)
{
  int result; // eax
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Sourcea[256]; // [rsp+80h] [rbp-80h] BYREF
  char v8; // [rsp+280h] [rbp+180h] BYREF

  if ( !Source )
    return -1073741811;
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (wchar_t *)&v8;
  result = RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
  if ( result >= 0 )
  {
    result = RtlGetPersistedStateLocation(
               L"LanguageOverlayKeyName",
               0LL,
               L"Software\\Microsoft\\LanguageOverlay",
               LocationTypeRegistry,
               Sourcea,
               0x200u,
               0LL);
    if ( result >= 0 )
    {
      result = RtlAppendUnicodeToString(&Destination, Sourcea);
      if ( result >= 0 )
      {
        result = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( result >= 0 )
        {
          result = RtlAppendUnicodeToString(&Destination, L"OverlayPackages");
          if ( result >= 0 )
          {
            result = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( result >= 0 )
            {
              result = RtlAppendUnicodeToString(&Destination, Source);
              if ( result >= 0 )
              {
                *KeyHandle = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 64;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                return NtOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of SmpSaveRegistryValue @ 0x14000741C
 * Callers:
 *     SmpConfigureExistingPageFiles @ 0x1400070E0 (SmpConfigureExistingPageFiles.c)
 *     SmpConfigureOneTimeExecute @ 0x140007110 (SmpConfigureOneTimeExecute.c)
 *     SmpConfigureSubSystems @ 0x1400072F0 (SmpConfigureSubSystems.c)
 *     SmpConfigureDosDevices @ 0x1400073F0 (SmpConfigureDosDevices.c)
 *     SmpConfigureExcludeKnownDlls @ 0x140019250 (SmpConfigureExcludeKnownDlls.c)
 *     SmpConfigureExecute @ 0x1400192D0 (SmpConfigureExecute.c)
 *     SmpConfigureFileRenames @ 0x140019330 (SmpConfigureFileRenames.c)
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x1400079E0 (SmpSaveRegistryValue_U.c)
 */

__int64 __fastcall SmpSaveRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned int a4, __int64 a5)
{
  struct _UNICODE_STRING *v8; // r8
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v8 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(&v10, a3);
    v8 = &v10;
  }
  return SmpSaveRegistryValue_U(a1, &DestinationString, v8, a4, a5);
}

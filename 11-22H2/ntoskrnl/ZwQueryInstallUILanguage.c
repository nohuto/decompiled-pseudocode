/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14041D1E0
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1405F50A0 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140847160 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}

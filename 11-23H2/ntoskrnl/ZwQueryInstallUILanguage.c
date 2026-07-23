/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14041DC30
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1405F5580 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1408456D0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}

/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14041E240
 * Callers:
 *     sub_1406252C0 @ 0x1406252C0 (sub_1406252C0.c)
 *     sub_14083008C @ 0x14083008C (sub_14083008C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(InstallUILanguageId, v1);
}

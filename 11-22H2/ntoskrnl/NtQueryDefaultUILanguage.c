/*
 * XREFs of NtQueryDefaultUILanguage @ 0x1407FCEA0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1407FCEC0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(__int64 a1)
{
  return NtQueryInstallUILanguage(a1);
}

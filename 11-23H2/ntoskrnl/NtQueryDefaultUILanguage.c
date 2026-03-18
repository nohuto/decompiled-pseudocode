/*
 * XREFs of NtQueryDefaultUILanguage @ 0x1407FC7F0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1407FC810 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(__int64 a1)
{
  return NtQueryInstallUILanguage(a1);
}

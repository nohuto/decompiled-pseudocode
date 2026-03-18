/*
 * XREFs of NtQueryDefaultUILanguage @ 0x1407F49F0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1407F4A10 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(__int64 a1)
{
  return NtQueryInstallUILanguage(a1);
}

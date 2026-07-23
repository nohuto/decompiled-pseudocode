/*
 * XREFs of sub_1402ECB64 @ 0x1402ECB64
 * Callers:
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     sub_1402ED7E0 @ 0x1402ED7E0 (sub_1402ED7E0.c)
 */

__int64 __fastcall sub_1402ECB64(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = sub_1402ED7E0(a1, a2 + 1);
  *a2 = result;
  return result;
}

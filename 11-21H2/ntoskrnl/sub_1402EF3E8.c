/*
 * XREFs of sub_1402EF3E8 @ 0x1402EF3E8
 * Callers:
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402EF3E8(_DWORD *a1, char a2)
{
  if ( !a2 )
    return 0;
  if ( a1[48] == 2 && (int)a1[49] < 2 )
    return 1;
  return (a1[50] & 0x2000) == 0;
}

/*
 * XREFs of sub_1406E56E0 @ 0x1406E56E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409AFE9C @ 0x1409AFE9C (sub_1409AFE9C.c)
 */

__int64 __fastcall sub_1406E56E0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
    sub_1409AFE9C(a1);
  return 0LL;
}

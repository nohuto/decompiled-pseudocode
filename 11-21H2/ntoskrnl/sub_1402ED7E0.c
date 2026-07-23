/*
 * XREFs of sub_1402ED7E0 @ 0x1402ED7E0
 * Callers:
 *     sub_1402ECB64 @ 0x1402ECB64 (sub_1402ECB64.c)
 *     sub_1406A293C @ 0x1406A293C (sub_1406A293C.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402ED7E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int i; // r10d
  __int64 v4; // r9

  v2 = 0LL;
  for ( i = 0; i <= 0x24; ++i )
  {
    if ( ((1LL << i) & a1[8]) != 0 )
    {
      v4 = 3 * v2;
      *(_QWORD *)(a2 + 4 * v4) = (int)i;
      *(_DWORD *)(a2 + 4 * v4 + 8) = (((1LL << i) & a1[9]) != 0 ? 2 : 0) | (((1LL << i) & a1[10]) != 0);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v2;
}

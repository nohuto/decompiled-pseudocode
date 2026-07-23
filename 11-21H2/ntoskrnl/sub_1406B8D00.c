/*
 * XREFs of sub_1406B8D00 @ 0x1406B8D00
 * Callers:
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406B8D00(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx

  a2[3] = *(_DWORD *)(a3 + 264);
  a2[4] = *(_DWORD *)(a3 + 272);
  a2[2] = 0;
  *a2 = *(_DWORD *)(a1 + 56);
  v5 = (unsigned int)a2[1];
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    *a4 = v5;
  else
    a4[1] = v5;
  return 0LL;
}

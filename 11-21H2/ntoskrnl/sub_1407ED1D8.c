/*
 * XREFs of sub_1407ED1D8 @ 0x1407ED1D8
 * Callers:
 *     sub_1407ED16C @ 0x1407ED16C (sub_1407ED16C.c)
 *     sub_140842F74 @ 0x140842F74 (sub_140842F74.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ED29C @ 0x1407ED29C (sub_1407ED29C.c)
 */

__int64 __fastcall sub_1407ED1D8(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v6; // eax
  unsigned int v7; // eax
  const void *v8; // rsi

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) != 0 )
  {
    v8 = (const void *)(a1 + 28);
  }
  else
  {
    v6 = sub_140792CCC(a1, 0LL, 28673);
    if ( !v6
      || (v7 = sub_140792CCC(a1, v6, 36871)) == 0
      || (v8 = (const void *)(a1 + 28), !(unsigned int)sub_1407ED29C(a1, v7, a1 + 28, 16LL)) )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbGetDatabaseID");
      return v3;
    }
    *(_DWORD *)(a1 + 24) |= 2u;
    v2 = *(_DWORD *)(a1 + 24);
  }
  if ( (v2 & 2) != 0 )
  {
    memmove(a2, v8, 0x10uLL);
    return 1;
  }
  return v3;
}

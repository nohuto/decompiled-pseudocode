/*
 * XREFs of sub_1405C87C0 @ 0x1405C87C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405C87C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  int v5; // eax
  unsigned int v6; // r15d
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 33600);
  v3 = 0;
  if ( v2 && (v5 = *(_DWORD *)(v2 + 32), v5 == *(_DWORD *)(a2 + 4)) )
  {
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v7 = 344LL * v6 + v2 + 1104;
        *(_QWORD *)v7 = 2097153LL;
        memset((void *)(v7 + 8), 0, 0x100uLL);
        sub_140300030(v7, *(_WORD *)(v7 + 2), (unsigned __int16 *)(264LL * v6++ + a2 + 272));
      }
      while ( v6 < *(_DWORD *)(v2 + 32) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}

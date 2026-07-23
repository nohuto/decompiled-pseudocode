/*
 * XREFs of MiInsertDemotedPages @ 0x1402EA408
 * Callers:
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiDemoteLocalLargePage @ 0x1402E8440 (MiDemoteLocalLargePage.c)
 *     MiDemoteLargeFreePage @ 0x1403A0C48 (MiDemoteLargeFreePage.c)
 * Callees:
 *     MiInsertLargePageChain @ 0x1402D6B70 (MiInsertLargePageChain.c)
 */

void __fastcall MiInsertDemotedPages(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  unsigned int v8; // r12d
  int v10; // edi
  __int64 v11; // r15

  v5 = a5;
  v7 = a2;
  v8 = (*(_DWORD *)(a2 + 16) & 0x3E0LL) != 0;
  v10 = 0;
  if ( a3 != a4 )
  {
    do
    {
      v11 = (unsigned int)(a3 + 1);
      if ( (_DWORD)v11 == a4 )
        v10 = 1;
      if ( a5 )
        v5 = v7 + 48 * MiLargePageSizes[v11] * (0xAAAAAAAAAAAAAAABuLL * ((a5 - v7) >> 4) / MiLargePageSizes[v11]);
      MiInsertLargePageChain(a1, v7, v8, v5, a3, v10);
      a3 = v11;
      if ( a5 )
        v7 = v5;
    }
    while ( (_DWORD)v11 != a4 );
  }
}

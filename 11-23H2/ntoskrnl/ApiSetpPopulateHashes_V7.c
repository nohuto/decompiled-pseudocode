/*
 * XREFs of ApiSetpPopulateHashes_V7 @ 0x1404199A0
 * Callers:
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140418C9C (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140418D84 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140418E7C (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     qsort @ 0x1403DA610 (qsort.c)
 *     ApiSetpGetSearchKeyHash_V7 @ 0x1404182A0 (ApiSetpGetSearchKeyHash_V7.c)
 */

__int64 __fastcall ApiSetpPopulateHashes_V7(__int64 a1, unsigned int *a2)
{
  size_t v2; // rbp
  __int64 *v3; // rsi
  unsigned __int16 v4; // r15
  int v5; // r12d
  unsigned int v6; // edi
  size_t v9; // rdx
  void *v10; // rdi
  unsigned int v11; // r8d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r8
  int SearchKeyHash_V7; // eax
  int v22; // [rsp+68h] [rbp+10h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = a2[1];
  v3 = AsiPrimeArray;
  v4 = AsiPrimeArray[0];
  v5 = 0;
  v6 = 0;
  v22 = 0;
  v9 = (unsigned int)v2;
  if ( (_DWORD)v2 )
    goto LABEL_9;
  while ( 1 )
  {
    v10 = (void *)(a1 + a2[1] * (unsigned __int64)*((unsigned __int8 *)a2 + 10) - *(unsigned __int16 *)(a1 + 6) + *a2);
    qsort(v10, v9, 8uLL, AsiSortHashTableHelper);
    if ( (unsigned int)v2 <= 1 )
    {
LABEL_6:
      *((_WORD *)a2 + 4) = v4;
      return 1LL;
    }
    v11 = 1;
    while ( *((_DWORD *)v10 + 2 * v11 - 2) != *((_DWORD *)v10 + 2 * v11) )
    {
      if ( ++v11 >= (unsigned int)v2 )
        goto LABEL_6;
    }
    v3 = (__int64 *)((char *)v3 + 4);
    v22 = v5 + 1;
    if ( (unsigned int)(v5 + 1) >= 0x64 )
      return 0LL;
    v4 = *(_WORD *)v3;
    v6 = 0;
LABEL_9:
    v13 = 0LL;
    v23 = 0LL;
    do
    {
      v14 = *((unsigned __int8 *)a2 + 10);
      v15 = *(unsigned __int16 *)(a1 + 6);
      v16 = *a2;
      v17 = v16 + v14 * a2[1] + 8 * v13 - v15;
      v18 = v16 + v13 * v14 - v15;
      if ( (*((_BYTE *)a2 + 11) & 1) != 0 )
      {
        v19 = *(unsigned int *)(a1 + 16);
        v20 = 1;
      }
      else
      {
        v19 = *(unsigned int *)(a1 + 24);
        v20 = 0;
      }
      SearchKeyHash_V7 = ApiSetpGetSearchKeyHash_V7(
                           (unsigned __int8 *)(a1 + *(unsigned int *)(v18 + a1) + v19 - v15),
                           *(unsigned __int16 *)(v18 + a1 + 4),
                           v20,
                           v4);
      v13 = v23 + 1;
      *(_DWORD *)(v17 + a1 + 4) = v6++;
      *(_DWORD *)(v17 + a1) = SearchKeyHash_V7;
      ++v23;
    }
    while ( v6 < (unsigned int)v2 );
    v5 = v22;
    v9 = v2;
  }
}

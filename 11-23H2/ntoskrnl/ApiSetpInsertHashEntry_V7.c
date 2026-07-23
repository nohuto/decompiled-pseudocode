/*
 * XREFs of ApiSetpInsertHashEntry_V7 @ 0x1404197FC
 * Callers:
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140418C9C (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140418D84 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140418E7C (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     ApiSetpGetSearchKeyHash_V7 @ 0x1404182A0 (ApiSetpGetSearchKeyHash_V7.c)
 *     ApiSetpFindHashInsertionPoint_V7 @ 0x140419700 (ApiSetpFindHashInsertionPoint_V7.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall ApiSetpInsertHashEntry_V7(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned __int8 *a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // ebx
  unsigned int SearchKeyHash_V7; // eax
  unsigned int v11; // r15d
  __int64 result; // rax
  size_t v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // r11
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned int v22; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2[1];
  if ( a3 == v6 )
  {
    SearchKeyHash_V7 = ApiSetpGetSearchKeyHash_V7(a4, a5, a6, *((unsigned __int16 *)a2 + 4));
    v22 = 0;
    v11 = SearchKeyHash_V7;
    result = ApiSetpFindHashInsertionPoint_V7(a1, (__int64)a2, SearchKeyHash_V7, (int *)&v22);
    if ( (int)result < 0 )
      return result;
    if ( v6 != v22 )
      memmove(
        (void *)(*a2 + 8LL * v22 + *((unsigned __int8 *)a2 + 10) * (v6 + 1LL) - *(unsigned __int16 *)(a1 + 6) + a1 + 8),
        (const void *)(a1
                     + *a2
                     + 8LL * v22
                     + *((unsigned __int8 *)a2 + 10) * (unsigned __int64)v6
                     - *(unsigned __int16 *)(a1 + 6)),
        8LL * (v6 - v22));
    v13 = 8LL * v22;
    v14 = v13 + *((unsigned __int8 *)a2 + 10) * (a2[1] + 1LL) - *(unsigned __int16 *)(a1 + 6) + *a2;
    v15 = v22 == 0;
    *(_DWORD *)(v14 + a1) = v11;
    *(_DWORD *)(v14 + a1 + 4) = a3;
    if ( !v15 )
      memmove(
        (void *)(a1 + *a2 + *((unsigned __int8 *)a2 + 10) * (a2[1] + 1LL) - *(unsigned __int16 *)(a1 + 6)),
        (const void *)(a1 + *a2
                          + *((unsigned __int8 *)a2 + 10) * (unsigned __int64)a2[1]
                          - *(unsigned __int16 *)(a1 + 6)),
        v13);
    v16 = a2[1];
    if ( !(_DWORD)v16 )
      return 0LL;
    v17 = *(unsigned __int16 *)(a1 + 6);
    v18 = 1;
    v19 = *((unsigned __int8 *)a2 + 10) * (v16 + 1);
    if ( (unsigned int)(v16 + 1) <= 1 )
      return 0LL;
    v20 = *(_DWORD *)(v19 + *a2 - v17 + a1);
    while ( 1 )
    {
      v21 = *(_DWORD *)(*a2 + v19 + 8LL * v18 - v17 + a1);
      if ( v20 >= v21 )
        break;
      ++v18;
      v20 = v21;
      if ( v18 >= (int)v16 + 1 )
        return 0LL;
    }
  }
  return 3221225701LL;
}

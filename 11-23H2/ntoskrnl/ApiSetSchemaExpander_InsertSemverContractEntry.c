/*
 * XREFs of ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417E2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1404193F0 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetSchemaExpander_AllocateString @ 0x14041874C (ApiSetSchemaExpander_AllocateString.c)
 *     ApiSetSchemaExpander_AllocateStringAsWString @ 0x1404187D4 (ApiSetSchemaExpander_AllocateStringAsWString.c)
 *     ApiSetSchemaExpander_AllocateWString @ 0x140418870 (ApiSetSchemaExpander_AllocateWString.c)
 *     ApiSetSchemaExpander_AllocateWStringAsString @ 0x1404188F4 (ApiSetSchemaExpander_AllocateWStringAsString.c)
 *     ApiSetpInsertHashEntry_V7 @ 0x1404197FC (ApiSetpInsertHashEntry_V7.c)
 *     ApiSetpPopulateHashes_V7 @ 0x1404199A0 (ApiSetpPopulateHashes_V7.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertSemverContractEntry(
        __int64 a1,
        void *a2,
        __int16 a3,
        unsigned __int16 a4,
        char a5,
        _DWORD *a6)
{
  int v7; // r8d
  unsigned int v10; // r15d
  __int64 result; // rax
  char v12; // bp
  unsigned __int64 v13; // r9

  v7 = *(_DWORD *)(a1 + 168);
  v10 = a4;
  *a6 = v7;
  *(_DWORD *)(a1 + 168) = v7 + 1;
  result = ApiSetpInsertHashEntry_V7(
             *(_QWORD *)(a1 + 32),
             (unsigned int)*(_QWORD *)(a1 + 32) + 52,
             v7,
             (_DWORD)a2,
             a3,
             a5);
  v12 = 0;
  if ( (_DWORD)result == 0x40000000 )
  {
    v12 = 1;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  v13 = *(_QWORD *)(a1 + 32)
      + (unsigned int)*a6 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 62LL)
      - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL)
      + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 52LL);
  *(_OWORD *)v13 = 0LL;
  *(_DWORD *)(v13 + 16) = 0;
  *(_WORD *)(v13 + 4) = a3;
  *(_BYTE *)(v13 + 6) = v10 - a3;
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( a5 )
      result = ApiSetSchemaExpander_AllocateWString(a1, a2, v10, (_DWORD *)v13);
    else
      result = ApiSetSchemaExpander_AllocateStringAsWString(a1, (unsigned __int8 *)a2, v10, (_DWORD *)v13);
  }
  else if ( a5 )
  {
    result = ApiSetSchemaExpander_AllocateWStringAsString(a1, (char *)a2, v10, (_DWORD *)v13);
  }
  else
  {
    result = ApiSetSchemaExpander_AllocateString(a1, a2, v10, (_DWORD *)v13);
  }
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL);
    if ( v12 )
      return (unsigned int)ApiSetpPopulateHashes_V7(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 52LL) == 0
           ? 0xC0000001
           : 0;
    else
      return 0LL;
  }
  return result;
}

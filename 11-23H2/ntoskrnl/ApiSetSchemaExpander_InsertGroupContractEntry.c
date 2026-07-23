/*
 * XREFs of ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140418D84
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417E2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 * Callees:
 *     ApiSetSchemaExpander_AllocateString @ 0x14041874C (ApiSetSchemaExpander_AllocateString.c)
 *     ApiSetpInsertHashEntry_V7 @ 0x1404197FC (ApiSetpInsertHashEntry_V7.c)
 *     ApiSetpPopulateHashes_V7 @ 0x1404199A0 (ApiSetpPopulateHashes_V7.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertGroupContractEntry(
        __int64 a1,
        const void *a2,
        unsigned __int16 a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  int v6; // r8d
  __int64 result; // rax
  char v10; // di
  unsigned __int64 v11; // r9

  v4 = a3;
  v6 = *(_DWORD *)(a1 + 156);
  *a4 = v6;
  *(_DWORD *)(a1 + 156) = v6 + 1;
  result = ApiSetpInsertHashEntry_V7(
             *(_QWORD *)(a1 + 32),
             (unsigned int)*(_QWORD *)(a1 + 32) + 40,
             v6,
             (_DWORD)a2,
             v4,
             0);
  v10 = 0;
  if ( (_DWORD)result == 0x40000000 )
  {
    v10 = 1;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  v11 = *(_QWORD *)(a1 + 32)
      + (unsigned int)*a4 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 50LL)
      - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL)
      + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL);
  *(_OWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_WORD *)(v11 + 4) = v4;
  result = ApiSetSchemaExpander_AllocateString(a1, a2, v4, (_DWORD *)v11);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 44LL);
    if ( v10 )
      return (unsigned int)ApiSetpPopulateHashes_V7(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 40LL) == 0
           ? 0xC0000001
           : 0;
    else
      return 0LL;
  }
  return result;
}

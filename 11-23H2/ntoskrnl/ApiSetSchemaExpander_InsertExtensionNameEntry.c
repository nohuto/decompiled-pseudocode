/*
 * XREFs of ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140418C9C
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417E2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1404193F0 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetSchemaExpander_AllocateString @ 0x14041874C (ApiSetSchemaExpander_AllocateString.c)
 *     ApiSetpInsertHashEntry_V7 @ 0x1404197FC (ApiSetpInsertHashEntry_V7.c)
 *     ApiSetpPopulateHashes_V7 @ 0x1404199A0 (ApiSetpPopulateHashes_V7.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertExtensionNameEntry(__int64 a1, const void *a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebp
  __int64 result; // rax
  char v8; // di
  __int64 v9; // r9

  v3 = *(unsigned int *)(a1 + 192);
  v5 = a3;
  *(_DWORD *)(a1 + 192) = v3 + 1;
  result = ApiSetpInsertHashEntry_V7(
             *(_QWORD *)(a1 + 32),
             (unsigned int)*(_QWORD *)(a1 + 32) + 64,
             v3,
             (_DWORD)a2,
             a3,
             1);
  v8 = 0;
  if ( (_DWORD)result == 0x40000000 )
  {
    v8 = 1;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  v9 = *(_QWORD *)(a1 + 32)
     + v3 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 74LL)
     - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL)
     + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 64LL);
  *(_QWORD *)v9 = 0LL;
  *(_WORD *)(v9 + 4) = v5;
  result = ApiSetSchemaExpander_AllocateString(a1, a2, v5, (_DWORD *)v9);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
    if ( v8 )
      return (unsigned int)ApiSetpPopulateHashes_V7(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 64LL) == 0
           ? 0xC0000001
           : 0;
    else
      return 0LL;
  }
  return result;
}

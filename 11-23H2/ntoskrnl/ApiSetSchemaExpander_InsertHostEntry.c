/*
 * XREFs of ApiSetSchemaExpander_InsertHostEntry @ 0x140418E7C
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417E2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1404193F0 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetSchemaExpander_AllocateWString @ 0x140418870 (ApiSetSchemaExpander_AllocateWString.c)
 *     ApiSetpInsertHashEntry_V7 @ 0x1404197FC (ApiSetpInsertHashEntry_V7.c)
 *     ApiSetpPopulateHashes_V7 @ 0x1404199A0 (ApiSetpPopulateHashes_V7.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertHostEntry(__int64 a1, const void *a2, unsigned __int16 a3, _DWORD *a4)
{
  unsigned int v4; // esi
  int v6; // r8d
  __int64 result; // rax
  char v10; // di
  unsigned __int64 v11; // r9

  v4 = a3;
  v6 = *(_DWORD *)(a1 + 180);
  *a4 = v6;
  *(_DWORD *)(a1 + 180) = v6 + 1;
  result = ApiSetpInsertHashEntry_V7(
             *(_QWORD *)(a1 + 32),
             (unsigned int)*(_QWORD *)(a1 + 32) + 76,
             v6,
             (_DWORD)a2,
             v4,
             1);
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
      + (unsigned int)*a4 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 86LL)
      - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL)
      + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 76LL);
  *(_QWORD *)v11 = 0LL;
  *(_DWORD *)(v11 + 8) = 0;
  *(_WORD *)(v11 + 4) = v4;
  result = ApiSetSchemaExpander_AllocateWString(a1, a2, v4, (_DWORD *)v11);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL);
    if ( v10 )
      return (unsigned int)ApiSetpPopulateHashes_V7(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 76LL) == 0
           ? 0xC0000001
           : 0;
    else
      return 0LL;
  }
  return result;
}

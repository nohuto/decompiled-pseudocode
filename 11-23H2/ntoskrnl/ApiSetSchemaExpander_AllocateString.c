/*
 * XREFs of ApiSetSchemaExpander_AllocateString @ 0x14041874C
 * Callers:
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140418C9C (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140418D84 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall ApiSetSchemaExpander_AllocateString(__int64 a1, const void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // rsi
  __int64 result; // rax

  *a4 = 0;
  v5 = *(unsigned int *)(a1 + 76);
  if ( a3 + 1 > *(_DWORD *)(a1 + 216) - (int)v5 )
    return 2147483653LL;
  memmove(
    (void *)(v5
           + *(_QWORD *)(a1 + 32)
           + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 24LL)
           - (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL)),
    a2,
    a3 + 1LL);
  *(_DWORD *)(a1 + 76) += a3 + 1;
  result = 0LL;
  *a4 = v5;
  return result;
}

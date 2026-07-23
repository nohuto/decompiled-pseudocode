/*
 * XREFs of ApiSetSchemaExpander_AllocateWString @ 0x140418870
 * Callers:
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140418E7C (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall ApiSetSchemaExpander_AllocateWString(__int64 a1, const void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v6; // rdi
  size_t v8; // r8
  __int64 result; // rax

  *a4 = 0;
  v6 = *(unsigned int *)(a1 + 68);
  v8 = 2LL * a3;
  if ( v8 > (unsigned int)(*(_DWORD *)(a1 + 212) - v6) )
    return 2147483653LL;
  memmove(
    (void *)(v6
           + *(_QWORD *)(a1 + 32)
           + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 16LL)
           - (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL)),
    a2,
    v8);
  *(_DWORD *)(a1 + 68) += 2 * a3;
  result = 0LL;
  *a4 = v6;
  return result;
}

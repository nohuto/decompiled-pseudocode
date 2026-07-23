/*
 * XREFs of ApiSetSchemaExpander_AllocateStringAsWString @ 0x1404187D4
 * Callers:
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_AllocateStringAsWString(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned int a3,
        _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 result; // rax
  _WORD *v8; // rdx
  __int16 v9; // ax

  *a4 = 0;
  v5 = *(unsigned int *)(a1 + 68);
  v6 = a3;
  if ( 2 * (unsigned __int64)a3 > (unsigned int)(*(_DWORD *)(a1 + 212) - v5) )
    return 2147483653LL;
  v8 = (_WORD *)(v5
               + *(_QWORD *)(a1 + 32)
               + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 16LL)
               - (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL));
  for ( *v8 = 0; a3; --a3 )
  {
    v9 = *a2++;
    *v8++ = v9;
  }
  *(_DWORD *)(a1 + 68) += 2 * v6;
  result = 0LL;
  *a4 = v5;
  return result;
}

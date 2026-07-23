/*
 * XREFs of ApiSetSchemaExpander_AllocateWStringAsString @ 0x1404188F4
 * Callers:
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140418F70 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_AllocateWStringAsString(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  char v10; // al

  *a4 = 0;
  v4 = *(unsigned int *)(a1 + 76);
  if ( a3 + 1 > *(_DWORD *)(a1 + 216) - (int)v4 )
    return 2147483653LL;
  v8 = (_BYTE *)(v4
               + *(_QWORD *)(a1 + 32)
               + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 24LL)
               - (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 6LL));
  *v8 = 0;
  if ( a3 )
  {
    if ( a3 + 1 > 1 )
    {
      v9 = a3;
      do
      {
        v10 = *a2;
        a2 += 2;
        *v8++ = v10;
        --v9;
      }
      while ( v9 );
    }
    *v8 = 0;
  }
  *(_DWORD *)(a1 + 76) += a3 + 1;
  result = 0LL;
  *a4 = v4;
  return result;
}

/*
 * XREFs of ApiSetValidateSchemaFormat_V7 @ 0x140417460
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x140417648 (ApiSetComposeSchema_V7.c)
 *     ApiSetValidateSchemaFormat @ 0x1406146CC (ApiSetValidateSchemaFormat.c)
 * Callees:
 *     ApiSetValidateSchemaElements_V7 @ 0x140416F90 (ApiSetValidateSchemaElements_V7.c)
 *     ApiSetValidateSchemaHeader_V7 @ 0x1404174AC (ApiSetValidateSchemaHeader_V7.c)
 */

__int64 __fastcall ApiSetValidateSchemaFormat_V7(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1;
  if ( *(_BYTE *)a1 != 7 )
  {
    if ( *(_DWORD *)a1 != 6 )
      return 3221225485LL;
    if ( (*(_DWORD *)(a1 + 8) & 4) == 0 )
      return 3221225485LL;
    v1 = a1 + 28;
    if ( *(_BYTE *)(a1 + 28) != 7 )
      return 3221225485LL;
  }
  result = ApiSetValidateSchemaHeader_V7(v1);
  if ( (int)result >= 0 )
    return ApiSetValidateSchemaElements_V7(v1);
  return result;
}

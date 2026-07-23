/*
 * XREFs of ApiSetIsSchemaSealed @ 0x140615610
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140A0A06C (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

char __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  char result; // al
  int v2; // eax

  result = 0;
  if ( *(_DWORD *)a1 == 6 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( (v2 & 4) != 0 && *(_BYTE *)(a1 + 28) == 7 )
      LOBYTE(v2) = *(_BYTE *)(a1 + 30);
  }
  else
  {
    if ( *(_BYTE *)a1 != 7 )
      return result;
    LOBYTE(v2) = *(_BYTE *)(a1 + 2);
  }
  return v2 & 1;
}

/*
 * XREFs of WMultiStringToAscii @ 0x1C0001950
 * Callers:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0001870 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 */

char __fastcall WMultiStringToAscii(_WORD *a1, unsigned int a2)
{
  _BYTE *v2; // r9
  unsigned int v3; // r8d
  char result; // al

  v2 = a1;
  if ( a1 && a2 >= 4 )
  {
    v3 = 0;
    if ( a2 >> 1 == 1 )
      return NVMeZeroMemory(v2, a2 - v3);
    do
    {
      if ( !*a1 && !a1[1] )
        break;
      result = *(_BYTE *)a1;
      ++v3;
      *v2++ = *(_BYTE *)a1++;
    }
    while ( v3 < (a2 >> 1) - 1 );
    if ( a2 > v3 )
      return NVMeZeroMemory(v2, a2 - v3);
  }
  return result;
}

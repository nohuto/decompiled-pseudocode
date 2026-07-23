/*
 * XREFs of sub_140A28A2C @ 0x140A28A2C
 * Callers:
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_140A297B0 @ 0x140A297B0 (sub_140A297B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A28A2C(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = 0;
  if ( (*(_BYTE *)a1 & 0x7Fu) < 2 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( (v2 & 4) != 0 )
    {
      return 256;
    }
    else if ( (v2 & 2) != 0 )
    {
      return 257;
    }
  }
  else
  {
    return (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2);
  }
  return v1;
}

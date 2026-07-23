/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x140459BC0
 * Callers:
 *     sub_14023BC48 @ 0x14023BC48 (sub_14023BC48.c)
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     sub_140459B00 @ 0x140459B00 (sub_140459B00.c)
 *     sub_140549F88 @ 0x140549F88 (sub_140549F88.c)
 *     sub_14099DE60 @ 0x14099DE60 (sub_14099DE60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140C0CAF0 )
    return a1;
  v4 = dword_140D125E0;
  if ( !(_DWORD)NumOfElements )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 30;
    if ( v1 >= (unsigned int)NumOfElements )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}

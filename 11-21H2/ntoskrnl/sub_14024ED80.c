/*
 * XREFs of sub_14024ED80 @ 0x14024ED80
 * Callers:
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     sub_1405E805C @ 0x1405E805C (sub_1405E805C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024ED80(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  _DWORD *v4; // rdx

  v2 = 2;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return MEMORY[0xFFFFF780000003E8];
  result = 576LL;
  v4 = (_DWORD *)0xFFFFF7800000060CLL;
  do
  {
    if ( ((1LL << v2) & a1) != 0 )
    {
      if ( ((1LL << v2) & MEMORY[0xFFFFF780000005F8]) != 0 )
        LODWORD(result) = (result + 63) & 0xFFFFFFC0;
      result = (unsigned int)(*v4 + result);
    }
    ++v2;
    ++v4;
  }
  while ( v2 < 0x40 );
  return result;
}

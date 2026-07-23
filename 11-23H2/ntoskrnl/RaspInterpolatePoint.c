/*
 * XREFs of RaspInterpolatePoint @ 0x140387724
 * Callers:
 *     RaspCreateSegmentList @ 0x1403873DC (RaspCreateSegmentList.c)
 * Callees:
 *     RaspAllocateMemory @ 0x1403877AC (RaspAllocateMemory.c)
 */

__int64 __fastcall RaspInterpolatePoint(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v5; // r10
  __int64 v6; // r11

  result = RaspAllocateMemory(17LL);
  if ( result )
  {
    v5 = (_DWORD *)a2;
    v6 = 4LL;
    do
    {
      *(_DWORD *)((char *)v5 + result - a2) = (*v5 + *(_DWORD *)((char *)v5 + a1 - a2)) / 2;
      ++v5;
      --v6;
    }
    while ( v6 );
    *(_BYTE *)(result + 16) = *(_BYTE *)(a2 + 16) | *(_BYTE *)(a1 + 16) | 1;
  }
  return result;
}

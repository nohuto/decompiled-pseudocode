/*
 * XREFs of sub_140354C00 @ 0x140354C00
 * Callers:
 *     sub_140354A20 @ 0x140354A20 (sub_140354A20.c)
 *     sub_14045E800 @ 0x14045E800 (sub_14045E800.c)
 * Callees:
 *     sub_140356BCC @ 0x140356BCC (sub_140356BCC.c)
 */

__int64 __fastcall sub_140354C00(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 4);
  if ( (result & 2) == 0 )
  {
    *(_DWORD *)(a2 + 4) = result | 2;
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 140));
    if ( (_DWORD)result == 1 && !*(_BYTE *)(a1 + 136) )
    {
      result = *(_QWORD *)(a1 + 72);
      if ( !*(_DWORD *)result )
        return sub_140356BCC(a1, 0LL, 0LL, 0LL);
    }
  }
  return result;
}

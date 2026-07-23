/*
 * XREFs of sub_140A8CE34 @ 0x140A8CE34
 * Callers:
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 * Callees:
 *     sub_140A9BFC0 @ 0x140A9BFC0 (sub_140A9BFC0.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8CE34(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)dword_140D4E000;
  if ( !dword_140D4E000 )
  {
    result = sub_140A9BFC0(a1);
    if ( result )
    {
      _InterlockedIncrement((volatile signed __int32 *)(result + 20));
      ++*(_DWORD *)(result + 24);
      *(_DWORD *)(result + 56) |= 0x200000u;
      *(_DWORD *)(a1 + 16) |= 0x40000000u;
      if ( a2 )
      {
        *(_OWORD *)(result + 120) = *a2;
        *(_OWORD *)(result + 136) = a2[1];
        *(_OWORD *)(result + 152) = a2[2];
        *(_OWORD *)(result + 168) = a2[3];
      }
      else
      {
        *(_QWORD *)(result + 120) = 0LL;
      }
      return sub_140AA5BCC(result);
    }
  }
  return result;
}

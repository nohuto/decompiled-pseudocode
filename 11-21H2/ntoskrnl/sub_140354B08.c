/*
 * XREFs of sub_140354B08 @ 0x140354B08
 * Callers:
 *     sub_140354A90 @ 0x140354A90 (sub_140354A90.c)
 *     sub_14045E3C0 @ 0x14045E3C0 (sub_14045E3C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140354B08(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax

  v2 = 1;
  while ( 1 )
  {
    result = v2;
    if ( **(_DWORD **)&a2[2 * v2 + 14] )
      break;
    if ( ++v2 > 3 )
    {
      result = (unsigned int)(a2[47] - 1);
      if ( a2[44] == (_DWORD)result )
      {
        a2[1] &= ~2u;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 140));
      }
      return result;
    }
  }
  return result;
}

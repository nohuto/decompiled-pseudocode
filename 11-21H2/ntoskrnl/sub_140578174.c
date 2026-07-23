/*
 * XREFs of sub_140578174 @ 0x140578174
 * Callers:
 *     sub_140577F94 @ 0x140577F94 (sub_140577F94.c)
 *     sub_140578074 @ 0x140578074 (sub_140578074.c)
 * Callees:
 *     sub_140578370 @ 0x140578370 (sub_140578370.c)
 *     sub_140578398 @ 0x140578398 (sub_140578398.c)
 */

__int64 __fastcall sub_140578174(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // edx

  if ( *(_BYTE *)(a1 + 132) )
  {
    if ( *(_WORD *)(a1 + 72) == a2 )
    {
      if ( *(_QWORD *)(a1 + 136) == a3 )
      {
        return 0;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = a3;
        v4 = sub_140578398(a1);
        if ( v4 < 0 )
          sub_140578370(a1);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}

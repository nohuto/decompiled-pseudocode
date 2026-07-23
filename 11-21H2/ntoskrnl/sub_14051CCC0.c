/*
 * XREFs of sub_14051CCC0 @ 0x14051CCC0
 * Callers:
 *     sub_14051C710 @ 0x14051C710 (sub_14051C710.c)
 * Callees:
 *     sub_140509CE4 @ 0x140509CE4 (sub_140509CE4.c)
 *     sub_14051C8F0 @ 0x14051C8F0 (sub_14051C8F0.c)
 *     sub_14051CA0C @ 0x14051CA0C (sub_14051CA0C.c)
 */

__int64 __fastcall sub_14051CCC0(__int64 a1)
{
  unsigned int v2; // r10d
  __int16 v3; // cx
  int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx

  v2 = -1073741637;
  v3 = *(_WORD *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 2 )
  {
    if ( sub_140509CE4(a1, v3) )
    {
      v6 = v5;
      return (unsigned int)sub_14051C8F0(v6);
    }
  }
  else
  {
    if ( (v3 & 0xEF00) == 0x100 )
    {
      v6 = a1;
      if ( v4 == 1 )
        return (unsigned int)sub_14051CA0C(a1);
      return (unsigned int)sub_14051C8F0(v6);
    }
    if ( (v3 & 0xE800) == 0x800 && *(_DWORD *)a1 >= 3u )
      *(_DWORD *)(a1 + 272) |= 1u;
  }
  return v2;
}

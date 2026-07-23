/*
 * XREFs of sub_1409782F8 @ 0x1409782F8
 * Callers:
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409782F8(unsigned __int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx

  if ( a1 != -2LL )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (a1 & 0xFFFFFFFFFFFFFFFEuLL) == a2 )
        return 1LL;
    }
    else
    {
      v4 = 0;
      if ( *(_QWORD *)a1 )
      {
        v5 = 0LL;
        while ( *(_QWORD *)(a1 + 8 * v5 + 8) != a2 )
        {
          v5 = ++v4;
          if ( (unsigned __int64)v4 >= *(_QWORD *)a1 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}

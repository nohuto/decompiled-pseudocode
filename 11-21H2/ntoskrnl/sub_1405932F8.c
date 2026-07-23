/*
 * XREFs of sub_1405932F8 @ 0x1405932F8
 * Callers:
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_1405932F8(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  unsigned int v4; // edi
  unsigned int i; // ebx
  __int64 v6; // rdx

  if ( !qword_140C29CA8 )
    return 0LL;
  result = sub_140593218(a1, (__int64)qword_140C29CA8, 2000LL);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = dword_140C29CA0;
    for ( i = 0; i < v4; ++i )
    {
      v6 = *((_QWORD *)qword_140C29CA8 + 5 * (v4 - i) - 4);
      if ( !v6 )
        break;
      v3 = sub_140593218(a1, v6, *((unsigned __int16 *)qword_140C29CA8 + 20 * (v4 - i) - 19));
      if ( v3 < 0 )
        break;
    }
    return (unsigned int)v3;
  }
  return result;
}

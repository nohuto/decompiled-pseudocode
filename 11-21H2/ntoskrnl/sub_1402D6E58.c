/*
 * XREFs of sub_1402D6E58 @ 0x1402D6E58
 * Callers:
 *     sub_1402D6CE8 @ 0x1402D6CE8 (sub_1402D6CE8.c)
 * Callees:
 *     sub_1402D6EE8 @ 0x1402D6EE8 (sub_1402D6EE8.c)
 */

__int64 __fastcall sub_1402D6E58(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v6 = a3;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( (_DWORD)v7 )
  {
    if ( a1 < 0x7FFFFFFEFFFFLL && a1 + v7 >= 0x7FFFFFFEFFFFLL )
      return 3221225485LL;
    *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
    if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = a1 + v7;
    }
    else
    {
      v8 = sub_1402D6EE8(a5, a1);
      *a6 = v8;
      if ( !v8 )
        return 3221225485LL;
    }
    return 0LL;
  }
  return 3221225474LL;
}

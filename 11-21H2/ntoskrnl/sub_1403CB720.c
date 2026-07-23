/*
 * XREFs of sub_1403CB720 @ 0x1403CB720
 * Callers:
 *     sub_140781814 @ 0x140781814 (sub_140781814.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 * Callees:
 *     sub_1402E0620 @ 0x1402E0620 (sub_1402E0620.c)
 *     sub_1403CB7AC @ 0x1403CB7AC (sub_1403CB7AC.c)
 */

__int64 __fastcall sub_1403CB720(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  _WORD *v5; // r11
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  result = sub_1403CB7AC(a1, a2, &v6);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    if ( (unsigned __int64)(a2 - v6) <= 1 )
    {
      if ( !*v5 )
        return result;
      result = a1 != 0LL ? -2147483643 : -1073741811;
    }
    else
    {
      result = sub_1402E0620(&a1[v6], a2 - v6, &v6, (__int64)v5);
      if ( (int)result >= 0 )
        return result;
    }
    if ( (a2 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      *a1 = 0;
  }
  return result;
}

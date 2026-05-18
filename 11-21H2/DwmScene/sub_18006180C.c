/*
 * XREFs of sub_18006180C @ 0x18006180C
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_180060890 @ 0x180060890 (sub_180060890.c)
 *     sub_180060A60 @ 0x180060A60 (sub_180060A60.c)
 */

__int64 *__fastcall sub_18006180C(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  char *i; // r11
  __int64 *result; // rax

  v2 = (__int64 *)(a1 + 416);
  for ( i = *(char **)(a1 + 416); i != *(char **)(a1 + 424); i += 32 )
  {
    if ( sub_18001FE44(i, a2) )
      break;
  }
  result = (__int64 *)sub_180060A60((__int64)i);
  if ( result == *(__int64 **)(a1 + 424) )
  {
    if ( *(_QWORD *)(a1 + 424) == *(_QWORD *)(a1 + 432) )
    {
      return sub_180060890(v2, *(_QWORD **)(a1 + 424), (__int64)a2);
    }
    else
    {
      result = sub_1800129F4(*(__int64 **)(a1 + 424), (__int64)a2);
      v2[1] += 32LL;
    }
  }
  return result;
}

/*
 * XREFs of sub_1800032F0 @ 0x1800032F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003338 @ 0x180003338 (sub_180003338.c)
 */

__int64 __fastcall sub_1800032F0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  result = sub_180003338(a1, &v4, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}

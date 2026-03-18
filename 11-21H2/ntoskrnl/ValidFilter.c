/*
 * XREFs of ValidFilter @ 0x14076E8F0
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x140776CFC (PiDqQueryValidateQueryData.c)
 * Callees:
 *     ValidFilterExpression @ 0x1402DE3A4 (ValidFilterExpression.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     FilterEval @ 0x1407795E4 (FilterEval.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v7[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD *v8; // [rsp+40h] [rbp-48h]
  _OWORD v9[3]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0;
  v7[0] = 1;
  v7[1] = 0;
  v8 = v9;
  memset(v9, 0, sizeof(v9));
  if ( (unsigned int)FilterEval((unsigned int)GetPropertyFromPropArray, (unsigned int)v7, a1, a2, (__int64)&v6) != -1073741811 )
  {
    v4 = 0;
    if ( !a1 )
      return 1LL;
    while ( ValidFilterExpression(a2 + 56LL * v4) )
    {
      if ( ++v4 >= a1 )
        return 1LL;
    }
  }
  return 0LL;
}

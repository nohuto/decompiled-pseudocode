/*
 * XREFs of sub_14094A25C @ 0x14094A25C
 * Callers:
 *     sub_1407768EC @ 0x1407768EC (sub_1407768EC.c)
 * Callees:
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 */

__int64 __fastcall sub_14094A25C(unsigned int a1, _WORD *a2, unsigned int a3, unsigned int *a4)
{
  _WORD *v6; // r10
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  _WORD *v12; // [rsp+38h] [rbp-8h] BYREF

  v6 = a2;
  v7 = a1;
  result = 0LL;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  v9 = 2;
  if ( a3 >= 2 )
    *a2 = 0;
  v12 = a2;
  v10 = a3;
  v11 = a3;
  if ( (a1 & 1) != 0 )
  {
    v7 = a1 & 0xFFFFFFFE;
    v9 = 54;
    if ( a3 >= 0x36 )
    {
      result = sub_1402E04F4(v6, a3, L"DevQueryFlagUpdateResults ", &v12, &v11, 1024);
      if ( (int)result < 0 )
        return result;
      v6 = v12;
      v10 = v11;
    }
  }
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    v9 += 52;
    if ( v9 <= a3 )
    {
      result = sub_1402E04F4(v6, v10, L"DevQueryFlagAllProperties ", &v12, &v11, 1024);
      if ( (int)result < 0 )
        return result;
      v6 = v12;
      v10 = v11;
    }
  }
  if ( (v7 & 4) != 0 )
  {
    v7 &= ~4u;
    v9 += 42;
    if ( v9 <= a3 )
    {
      result = sub_1402E04F4(v6, v10, L"DevQueryFlagLocalize ", &v12, &v11, 1024);
      if ( (int)result < 0 )
        return result;
      v6 = v12;
      v10 = v11;
    }
  }
  if ( !v7
    || (v9 += 24, v9 > a3)
    || (result = sub_1402E04F4(v6, v10, L"<more flags>", &v12, &v11, 1024), (int)result >= 0) )
  {
    if ( a4 )
      *a4 = v9;
    if ( v9 < a3 )
      return 3221225507LL;
  }
  return result;
}

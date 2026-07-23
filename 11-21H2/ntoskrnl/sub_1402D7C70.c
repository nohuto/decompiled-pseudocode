/*
 * XREFs of sub_1402D7C70 @ 0x1402D7C70
 * Callers:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 *     sub_1402D6FB0 @ 0x1402D6FB0 (sub_1402D6FB0.c)
 * Callees:
 *     sub_140757C9C @ 0x140757C9C (sub_140757C9C.c)
 */

__int64 __fastcall sub_1402D7C70(void *a1, unsigned int *a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned int *v7; // rax
  __int64 result; // rax
  unsigned int *v9; // r8
  __int64 v10; // rdx

  v7 = a2;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !a5 )
  {
    result = sub_140757C9C(a1);
    if ( (int)result < 0 )
      return result;
    v7 = 0LL;
  }
  v9 = v7 + 1;
  v10 = *v7;
  if ( a5 && 12 * v10 + 4 > a3 )
    return 3221225595LL;
  while ( 1 )
  {
    if ( !(_DWORD)v10 )
      return 3221225737LL;
    LODWORD(v10) = v10 - 1;
    if ( a4 >= *v9 && a4 <= v9[1] )
      break;
    v9 += 3;
  }
  return 0LL;
}

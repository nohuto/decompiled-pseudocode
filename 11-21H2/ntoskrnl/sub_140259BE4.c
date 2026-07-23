/*
 * XREFs of sub_140259BE4 @ 0x140259BE4
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     sub_140A91690 @ 0x140A91690 (sub_140A91690.c)
 *     sub_140A92420 @ 0x140A92420 (sub_140A92420.c)
 */

__int64 __fastcall sub_140259BE4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  result = a3;
  v5 = a2;
  v6 = a1;
  if ( a2 && dword_140C1AE08 )
    result = sub_140A92420(a2, 1LL);
  if ( !result )
  {
    if ( !a4 || !dword_140C1AE08 )
      return result;
    sub_140A92420(v6, 2LL);
    v9 = 3LL;
    return sub_140A92420(v8, v9);
  }
  v7 = dword_140C1AE08;
  v10 = result;
  if ( dword_140C1AE08 )
  {
    sub_140A91690(&v10, a2, v5);
    result = v10;
  }
  if ( result && v7 )
  {
    v9 = 2LL;
    v8 = result;
    return sub_140A92420(v8, v9);
  }
  return result;
}

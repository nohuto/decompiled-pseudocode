/*
 * XREFs of sub_140549A48 @ 0x140549A48
 * Callers:
 *     sub_1405D0014 @ 0x1405D0014 (sub_1405D0014.c)
 * Callees:
 *     sub_14054D214 @ 0x14054D214 (sub_14054D214.c)
 *     sub_14054D4B8 @ 0x14054D4B8 (sub_14054D4B8.c)
 *     sub_14054E34C @ 0x14054E34C (sub_14054E34C.c)
 *     sub_1405D00BC @ 0x1405D00BC (sub_1405D00BC.c)
 */

__int64 __fastcall sub_140549A48(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  v11[0] = 0LL;
  v10 = 0;
  result = sub_14054D4B8(
             0LL,
             3LL,
             (char *)qword_140C48980 + 4096,
             (char *)qword_140C48980 + (unsigned int)((dword_140C48988 - 2) << 12) + 4096,
             (dword_140C48988 - 2) << 12,
             v11);
  if ( (int)result >= 0 )
  {
    do
    {
      LOBYTE(v12) = 0;
      LOBYTE(v8) = 1;
      v9 = sub_14054E34C(v8, 0LL, &v10, &v12);
      if ( v9 >= 0 )
        sub_1405D00BC(a2, v11[0], v10);
    }
    while ( !v9 );
    sub_14054D214(0LL, a3, a4);
    if ( v9 == -2147483622 )
      return 0;
    return (unsigned int)v9;
  }
  return result;
}

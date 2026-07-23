/*
 * XREFs of sub_140399210 @ 0x140399210
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D1C98 @ 0x1405D1C98 (sub_1405D1C98.c)
 *     sub_14099A918 @ 0x14099A918 (sub_14099A918.c)
 */

__int64 __fastcall sub_140399210(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // r9d
  _QWORD v12[26]; // [rsp+30h] [rbp-108h] BYREF

  result = (unsigned int)dword_140C542C0;
  v5 = 0LL;
  v6 = qword_140C21FA8;
  if ( qword_140D068A8 && dword_140C542C0 != -1 )
  {
    v8 = 26LL;
    v9 = (_QWORD *)(1008LL * (unsigned int)dword_140C542C0 + *(_QWORD *)(qword_140D068A8 + 48) + 200LL);
    do
    {
      v12[v5] = sub_14029394C(*v9 - *(_QWORD *)((char *)&unk_140C22600 + v5 * 8), qword_140D069F8, 0x989680uLL);
      ++v5;
      v9 += 4;
      --v8;
    }
    while ( v8 );
    sub_14099A918(v10, v12);
    return sub_1405D1C98(v6, a2, a3, v11, (__int64)v12);
  }
  return result;
}

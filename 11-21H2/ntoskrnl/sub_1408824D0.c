/*
 * XREFs of sub_1408824D0 @ 0x1408824D0
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405E29C8 @ 0x1405E29C8 (sub_1405E29C8.c)
 *     sub_140881C00 @ 0x140881C00 (sub_140881C00.c)
 */

__int64 __fastcall sub_1408824D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rdi
  ULONG_PTR v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // edi
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  signed __int64 v14[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v15[3]; // [rsp+38h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( v8 && *(_DWORD *)(v8 + 4) < 8u )
    sub_1405E29C8(v8, 3u);
  if ( v5 >= 0x7FFFFFFF0000LL )
  {
    v11 = -1073741819;
  }
  else
  {
    v14[1] = 4096LL;
    v14[0] = v5 & 0xFFFFFFFFFFFFF000uLL;
    v9 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( v9 != v7 )
      sub_14030D5C0(v7, 0LL, (__int64)v15, a4);
    v10 = v13;
    while ( 1 )
    {
      v13 = v10 & 0xFFFFFFFFFFFFFLL;
      v11 = sub_140881C00(v14, (__int64)&v13, v4);
      if ( v11 < 0 )
        break;
      v10 = v13;
      if ( (v13 & 0x10000000000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 16) = v13 & 0xFFFFFFFFFFFFFLL;
        break;
      }
    }
    if ( v9 != v7 )
      sub_1402D0930((__int64)v15, 0LL);
  }
  result = v11;
  *(_QWORD *)(a1 + 8) = v11;
  return result;
}

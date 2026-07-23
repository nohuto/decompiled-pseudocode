/*
 * XREFs of sub_1405F8DD0 @ 0x1405F8DD0
 * Callers:
 *     sub_1405F8ED4 @ 0x1405F8ED4 (sub_1405F8ED4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405F83FC @ 0x1405F83FC (sub_1405F83FC.c)
 *     sub_1405F8610 @ 0x1405F8610 (sub_1405F8610.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405FD830 @ 0x1405FD830 (sub_1405FD830.c)
 */

__int64 __fastcall sub_1405F8DD0(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2 << *(_DWORD *)(a1 + 812);
  v12 = 0LL;
  LOWORD(a3) = a3 - *(_WORD *)(a1 + 824);
  LODWORD(v12) = v4;
  WORD2(v12) = a3;
  v5 = (__int64)sub_1405F83FC(a1, (__int64)&v12, a3, 57005LL);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 28) |= 0xCu;
    v10 = 0LL;
    v11 = &v10;
    *(_QWORD *)v5 = *(_DWORD *)v5 & 7 | 8LL;
    *v11 = v5 | *(_DWORD *)v11 & 7;
    v11 = (__int64 *)v5;
    if ( (int)sub_1405F8610(a1, &v10) >= 0 )
      sub_1405FD830(*(_QWORD *)(a1 + 800));
    if ( (*(_DWORD *)(v7 + 28) & 1) == 0 )
    {
      *(_DWORD *)(v7 + 28) |= 1u;
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 )
        *(_DWORD *)(v8 + 4) = -1073741691;
      else
        *(_DWORD *)(v7 + 8) = -1073741691;
    }
    sub_1405F8978(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}

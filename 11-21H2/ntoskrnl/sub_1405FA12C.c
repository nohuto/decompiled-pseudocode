/*
 * XREFs of sub_1405FA12C @ 0x1405FA12C
 * Callers:
 *     sub_1405FA660 @ 0x1405FA660 (sub_1405FA660.c)
 * Callees:
 *     sub_140391E54 @ 0x140391E54 (sub_140391E54.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405F83FC @ 0x1405F83FC (sub_1405F83FC.c)
 *     sub_1405F8610 @ 0x1405F8610 (sub_1405F8610.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405FD830 @ 0x1405FD830 (sub_1405FD830.c)
 */

__int64 __fastcall sub_1405FA12C(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  _DWORD *v14; // [rsp+50h] [rbp-20h]
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v13 = a3;
  v12 = 0LL;
  HIDWORD(v14) = 0;
  v15 = 0LL;
  v5 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v14 = a2;
  else
    LODWORD(v14) = *a2;
  result = sub_140391E54(a1, a1 + 912, (__int64)&v12, a4, (__int64)&v15);
  if ( (int)result >= 1 )
  {
    v8 = (__int64)sub_1405F83FC(a1, (__int64)&v15, v7, v13);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v8 + 28) & 0xFFFFFFEF | (v5 != 0 ? 0x10 : 0) | 0xC;
      v11 = &v10;
      v10 = 0LL;
      *(_QWORD *)v8 = *(_DWORD *)v8 & 7 | 8LL;
      *v11 = v8 | *(_DWORD *)v11 & 7;
      v11 = (__int64 *)v8;
      if ( (int)sub_1405F8610(a1, &v10) >= 0 )
        sub_1405FD830(*(_QWORD *)(a1 + 800));
      result = sub_1405F8978(a1, v9);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}

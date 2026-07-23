/*
 * XREFs of sub_140A18474 @ 0x140A18474
 * Callers:
 *     sub_140A18FB4 @ 0x140A18FB4 (sub_140A18FB4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 *     sub_140A198FC @ 0x140A198FC (sub_140A198FC.c)
 */

__int64 __fastcall sub_140A18474(wchar_t **a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  CHAR v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    memset(v6, 0, sizeof(v6));
    v4 = sub_140A198FC(v6);
    if ( v4 >= 0 )
    {
      v5 = sub_140A14988(a1, v6);
      if ( v5 < 0 )
        sub_1406E0C3C(1LL, (__int64)"AslpFileGet16BitDescription");
      return (unsigned int)v5;
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"AslpFileGet16BitDescription");
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}

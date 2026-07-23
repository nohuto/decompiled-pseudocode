/*
 * XREFs of sub_14063EEB0 @ 0x14063EEB0
 * Callers:
 *     sub_14063EC3C @ 0x14063EC3C (sub_14063EC3C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14063EEB0(__int64 *a1)
{
  int v1; // edi
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+24h] [rbp-24h]

  v10 = 0LL;
  v1 = 0;
  if ( (*((_DWORD *)a1 + 8))-- == 1 )
  {
    v4 = a1[6];
    v9 = 1;
    sub_14042A5E0(v4, &v9);
    v1 = sub_14042A5E0(a1[23], 0LL);
    if ( v1 >= 0 )
    {
      v5 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
      sub_14042A5E0(a1[6], v6);
      sub_14042A5E0(a1[17], v7);
    }
  }
  return (unsigned int)v1;
}

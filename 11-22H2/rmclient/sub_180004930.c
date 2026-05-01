/*
 * XREFs of sub_180004930 @ 0x180004930
 * Callers:
 *     sub_180003C70 @ 0x180003C70 (sub_180003C70.c)
 *     sub_1800047B0 @ 0x1800047B0 (sub_1800047B0.c)
 * Callees:
 *     sub_180004900 @ 0x180004900 (sub_180004900.c)
 */

__int64 __fastcall sub_180004930(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // r8
  __int64 v8; // r10

  if ( *a2 == 1861104927 && a2[1] == 1111453026 && a2[2] == 531659156 && a2[3] == 1769381788 )
  {
    *a3 = a1;
    return 0LL;
  }
  else if ( sub_180004900(a2, &xmmword_180026200) )
  {
    *v5 = v6;
    return 0LL;
  }
  else if ( sub_180004900(v4, &xmmword_1800261F0) )
  {
    *v7 = v8 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}

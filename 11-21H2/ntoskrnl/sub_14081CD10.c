/*
 * XREFs of sub_14081CD10 @ 0x14081CD10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14081CD10(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v6 = 20;
  v9 = 0;
  v8 = 0LL;
  v2 = ExQueryWnfStateData(a1, &v7, &v8, &v6);
  if ( v2 >= 0 && v6 == 20 )
  {
    sub_140A48330(v1);
    sub_1407525EC((LPCGUID)sub_140010660, 0x14u, &v8);
    sub_140A47CF8(v4, v3);
  }
  return (unsigned int)v2;
}

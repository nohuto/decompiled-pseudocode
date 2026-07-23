/*
 * XREFs of sub_14050EEBC @ 0x14050EEBC
 * Callers:
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050EEBC(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]

  v1 = *(_DWORD *)(a1 + 48);
  v6[1] = 0;
  v6[2] = v1;
  v2 = *(_DWORD *)(a1 + 4);
  v7 = 0LL;
  LODWORD(v7) = v2;
  v3 = *(_DWORD *)(a1 + 52);
  v4 = *(_QWORD *)(a1 + 64);
  v6[3] = v3;
  v6[0] = 1;
  return sub_14042A5E0(v4, v6);
}

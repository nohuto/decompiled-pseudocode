/*
 * XREFs of sub_14098C9B0 @ 0x14098C9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 */

__int64 __fastcall sub_14098C9B0(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  __int128 v4; // xmm0
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = 0x4094B817BA3E0F4DLL - *a1;
  if ( *a1 == 0x4094B817BA3E0F4DLL )
    v3 = 0xF3A0E67963D5D1A2uLL - a1[1];
  if ( v3 || a3 != 4 || !a2 )
    return 3221225485LL;
  v4 = *(_OWORD *)a1;
  v7 = *a2;
  v6 = v4;
  sub_140828EBC(0, 20, (__int64)&v6);
  sub_14036AAC4((__int64)&unk_140C23FC0, DelayedWorkQueue);
  return 0LL;
}

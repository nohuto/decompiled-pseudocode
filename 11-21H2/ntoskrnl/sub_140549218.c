/*
 * XREFs of sub_140549218 @ 0x140549218
 * Callers:
 *     sub_140548790 @ 0x140548790 (sub_140548790.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140549218(unsigned int a1, int a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+48h] [rbp-40h]
  int v9; // [rsp+4Ch] [rbp-3Ch]
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+64h] [rbp-24h]

  v13 = 0;
  v7 = -1LL;
  v9 = 0x40000000;
  v10 = 71LL;
  v8 = a1;
  v11 = a1;
  v12 = a2;
  while ( 1 )
  {
    v2 = HvlInvokeFastExtendedHypercall(65666LL, (__int64)&v7, 0x28u, 0LL, 0);
    if ( !sub_140459C2A(v2) )
      break;
    if ( (int)sub_1405438E8(v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return sub_14054CA70(v4);
}

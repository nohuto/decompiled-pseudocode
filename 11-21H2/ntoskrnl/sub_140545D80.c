/*
 * XREFs of sub_140545D80 @ 0x140545D80
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140545D80(int *a1)
{
  int v2; // eax
  char v3; // cl
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  v9[1] = 0LL;
  v12 = 0LL;
  v9[0] = -1LL;
  v10 = *((_BYTE *)a1 + 4) != 0;
  v2 = *a1;
  v3 = *((_BYTE *)a1 + 8);
  v11 = v2;
  LODWORD(v12) = *((_BYTE *)a1 + 9) & 1 | (2 * (v3 & 1));
  while ( 1 )
  {
    v4 = HvlInvokeFastExtendedHypercall(65713LL, (__int64)v9, 0x20u, 0LL, 0);
    if ( !sub_140459C2A(v4) )
      break;
    if ( (int)sub_1405438E8(v6, v5, v7) < 0 )
      return 3221225626LL;
  }
  return sub_14054CA70(v6);
}

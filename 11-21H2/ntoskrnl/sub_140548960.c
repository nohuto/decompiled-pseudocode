/*
 * XREFs of sub_140548960 @ 0x140548960
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548960(int a1, int a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // r8
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+54h] [rbp-24h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  v14 = 0LL;
  v10[0] = a1;
  v10[1] = a2;
  v11 = a3 >> 12;
  v12 = a4;
  if ( byte_140D05016 )
    v5 = a5;
  else
    v5 = (unsigned __int8)byte_140D0CBD0[2 * a5 + 1] | ((unsigned __int8)byte_140D0CBD0[2 * a5] << 6);
  v13 = v5;
  while ( 1 )
  {
    LOWORD(v6) = HvlInvokeFastExtendedHypercall(65703LL, (__int64)v10, 0x20u, 0LL, 0);
    if ( (dword_140D0688C & 2) == 0 || !sub_140459C2A(v6) )
      break;
    if ( (int)sub_1405438E8(v7, v6, v8) < 0 )
      return 3221225626LL;
  }
  return sub_14054CA70((unsigned __int16)v6);
}

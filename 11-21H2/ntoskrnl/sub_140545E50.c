/*
 * XREFs of sub_140545E50 @ 0x140545E50
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140545E50(__int64 a1, int *a2)
{
  __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v7[1] = 0LL;
  v7[0] = -1LL;
  v8 = *((_BYTE *)a2 + 4) != 0;
  v9 = *a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    v10 = 0x4000000000000000LL;
    LOWORD(v10) = *(_WORD *)(a1 + 12);
    WORD1(v10) = *(_WORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 != 4 )
    return 3221225659LL;
  if ( *(_QWORD *)(a1 + 8) > 0x1FFFFFFFFFFFFFFFuLL )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 8);
LABEL_7:
  while ( 1 )
  {
    v3 = HvlInvokeFastExtendedHypercall(65714LL, (__int64)v7, 0x20u, 0LL, 0);
    if ( !sub_140459C2A(v3) )
      break;
    if ( (int)sub_1405438E8(v5, v4, v6) < 0 )
      return 3221225626LL;
  }
  return sub_14054CA70(v5);
}

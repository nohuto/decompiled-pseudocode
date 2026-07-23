/*
 * XREFs of sub_1404175E0 @ 0x1404175E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_1404175E0(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  if ( (dword_140D0688C & 2) != 0 && (dword_140D068B8 & 0x400) != 0 )
    return 0LL;
  v7 = 0;
  v5 = -1LL;
  v6 = a1;
  v8 = a2;
  v9 = a3;
  v4 = HvlInvokeFastExtendedHypercall(65795LL, (__int64)&v5, 0x20u, 0LL, 0);
  return sub_14054CA70(v4);
}

/*
 * XREFs of sub_140546040 @ 0x140546040
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140546040(int *a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v4 = *((_BYTE *)a1 + 4) != 0;
  v5 = *a1;
  v1 = HvlInvokeFastExtendedHypercall(65733LL, (__int64)v3, 0x18u, 0LL, 0);
  return sub_14054CA70(v1);
}

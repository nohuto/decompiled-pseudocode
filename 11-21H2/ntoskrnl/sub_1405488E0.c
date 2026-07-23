/*
 * XREFs of sub_1405488E0 @ 0x1405488E0
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_1405488E0(int a1, int a2)
{
  __int64 v2; // rdx
  __int16 v3; // cx
  __int64 v4; // r8
  _DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  while ( 1 )
  {
    LOWORD(v2) = HvlInvokeFastExtendedHypercall(65693LL, (__int64)v6, 8u, 0LL, 0);
    if ( (dword_140D0688C & 2) == 0 || !sub_140459C2A(v2) )
      break;
    if ( (int)sub_1405438E8(v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return sub_14054CA70((unsigned __int16)v2);
}

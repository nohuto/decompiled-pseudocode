/*
 * XREFs of sub_140548FF0 @ 0x140548FF0
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548FF0(int a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int16 v4; // cx
  __int64 v5; // r8
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[1] = a1;
  v7[0] = a2;
  v8 = a3;
  while ( 1 )
  {
    LOWORD(v3) = HvlInvokeFastExtendedHypercall(65695LL, (__int64)v7, 0x10u, 0LL, 0);
    if ( (dword_140D0688C & 2) == 0 || !sub_140459C2A(v3) )
      break;
    if ( (int)sub_1405438E8(v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return sub_14054CA70((unsigned __int16)v3);
}

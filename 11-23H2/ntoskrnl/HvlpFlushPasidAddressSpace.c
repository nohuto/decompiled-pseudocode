/*
 * XREFs of HvlpFlushPasidAddressSpace @ 0x1405462B0
 * Callers:
 *     HvlFlushPasid @ 0x140543E50 (HvlFlushPasid.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405463BC (HvlpSlowFlushPasidAddressList.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403CC1B0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpFlushPasidAddressSpace(int a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = 0LL;
  v3[1] = a1;
  v3[0] = a2;
  return HvcallFastExtended(65696LL, (__int64)v3, 0x10u, 0LL, 0);
}

/*
 * XREFs of sub_140549B18 @ 0x140549B18
 * Callers:
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 sub_140549B18()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  *(_DWORD *)sub_14039DF90((PHYSICAL_ADDRESS *)&v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvlInvokeHypercall(135) != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v2);
  return v0;
}

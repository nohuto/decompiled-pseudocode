/*
 * XREFs of sub_140549FDC @ 0x140549FDC
 * Callers:
 *     Callback @ 0x14054A150 (Callback.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_140549FDC(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v4, 1, 0LL, 40LL);
  v2[1] = *a1;
  *(_DWORD *)v2 = 2;
  LODWORD(a1) = (unsigned __int16)HvlInvokeHypercall(111) != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v4);
  return (unsigned int)a1;
}

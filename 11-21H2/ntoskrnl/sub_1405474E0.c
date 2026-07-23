/*
 * XREFs of sub_1405474E0 @ 0x1405474E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_1405474E0(int a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v5, 1, 0LL, 32LL);
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  *(_DWORD *)v2 = a1;
  *((_DWORD *)v2 + 1) = 65538;
  v3 = (unsigned __int16)HvlInvokeHypercall(137) != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v5);
  return v3;
}

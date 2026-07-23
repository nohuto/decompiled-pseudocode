/*
 * XREFs of sub_1405458A0 @ 0x1405458A0
 * Callers:
 *     sub_140546FE0 @ 0x140546FE0 (sub_140546FE0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_1405458A0(int a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v4 = sub_14039DF90((PHYSICAL_ADDRESS *)&v8, 1, 0LL, 240LL);
  *v4 = -1LL;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 2) = a1;
  v4 += 2;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  *((_OWORD *)v4 + 6) = a2[6];
  v4 += 16;
  v5 = a2[7];
  a2 += 8;
  *((_OWORD *)v4 - 1) = v5;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  v6 = (unsigned __int16)HvlInvokeHypercall(153) != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v8);
  return v6;
}

/*
 * XREFs of sub_14054A3D8 @ 0x14054A3D8
 * Callers:
 *     sub_140549824 @ 0x140549824 (sub_140549824.c)
 *     sub_140549E34 @ 0x140549E34 (sub_140549E34.c)
 *     sub_140549E8C @ 0x140549E8C (sub_140549E8C.c)
 *     sub_140549F30 @ 0x140549F30 (sub_140549F30.c)
 *     sub_140549F88 @ 0x140549F88 (sub_140549F88.c)
 *     sub_14054A2E0 @ 0x14054A2E0 (sub_14054A2E0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_14054A3D8(_OWORD *a1)
{
  _OWORD *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v7, 1, 0LL, 408LL);
  v3 = 3LL;
  do
  {
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    v2[6] = a1[6];
    v2 += 8;
    v4 = a1[7];
    a1 += 8;
    *(v2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *v2 = *a1;
  *((_QWORD *)v2 + 2) = *((_QWORD *)a1 + 2);
  v5 = (unsigned __int16)HvlInvokeHypercall(156) != 0 ? 0xC0000001 : 0;
  sub_14039D8F0((__int64)&v7);
  return v5;
}

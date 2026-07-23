/*
 * XREFs of sub_140549C24 @ 0x140549C24
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

__int64 __fastcall sub_140549C24(__int128 *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int128 v12; // xmm0
  _QWORD *v13; // rsi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]

  v23 = 0LL;
  LODWORD(v24) = 0;
  v20 = 0LL;
  LODWORD(v21) = 0;
  v9 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v22, 1, 0LL, 88LL);
  v11 = sub_14039DF90((PHYSICAL_ADDRESS *)&v19, 2, 0LL, 32LL);
  v12 = *a1;
  v13 = v11;
  v14 = a1[1];
  *(_DWORD *)((char *)v10 + 81) = 0;
  *(_WORD *)((char *)v10 + 85) = 0;
  *((_BYTE *)v10 + 87) = 0;
  *(_OWORD *)v10 = v12;
  *((_BYTE *)v10 + 80) = 0;
  v15 = a1[2];
  *((_OWORD *)v10 + 1) = v14;
  v16 = a1[3];
  *((_OWORD *)v10 + 2) = v15;
  v17 = a1[4];
  *((_OWORD *)v10 + 3) = v16;
  *((_OWORD *)v10 + 4) = v17;
  if ( (unsigned __int16)HvlInvokeHypercall(134) )
  {
    v9 = -1073741823;
  }
  else
  {
    *a2 = *v13;
    *a3 = v13[1];
    *a4 = v13[2];
    *a5 = v13[3];
  }
  sub_14039D8F0((__int64)&v19);
  sub_14039D8F0((__int64)&v22);
  return v9;
}

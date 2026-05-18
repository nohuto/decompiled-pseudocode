/*
 * XREFs of sub_180011424 @ 0x180011424
 * Callers:
 *     sub_18001808C @ 0x18001808C (sub_18001808C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DEA94 @ 0x1800DEA94 (sub_1800DEA94.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180011424(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5,
        int a6,
        unsigned int a7,
        float X)
{
  unsigned int v11; // ebx
  float v12; // xmm0_4
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF

  v11 = a7;
  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v15[0] = *a3;
  v15[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16[0] = *a2;
  v16[1] = a2[1];
  ((void (__fastcall *)(__int64, _OWORD *, _QWORD *, _QWORD *))sub_1800DEA94)(a1, v16, v15, v14);
  *(_QWORD *)a1 = &RenderOutputDwm::`vftable';
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1704) = a5;
  *(_DWORD *)(a1 + 1708) = a6;
  if ( a7 <= 1 )
    v11 = 1;
  *(_DWORD *)(a1 + 1712) = v11;
  v12 = fmaxf(X, 0.0);
  *(float *)(a1 + 1716) = fminf(v12, 1.0);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a1;
}

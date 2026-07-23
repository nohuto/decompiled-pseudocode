/*
 * XREFs of sub_1405432A8 @ 0x1405432A8
 * Callers:
 *     sub_140A032A0 @ 0x140A032A0 (sub_140A032A0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405432A8(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v15 = 0LL;
  LODWORD(v16) = 0;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v7 = 0;
  v14 = 0LL;
  v11 = 0LL;
  v8 = sub_14039DF90((PHYSICAL_ADDRESS *)&v14, 1, (__int64)v18, 1032LL);
  v9 = sub_14039DF90((PHYSICAL_ADDRESS *)&v11, 2, (__int64)v17, 72LL);
  *v8 = 0LL;
  if ( !(unsigned __int16)HvlInvokeHypercall(147) )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v9 + 1);
    a1[1] = *(_OWORD *)(v9 + 3);
    a1[2] = *(_OWORD *)(v9 + 5);
    a1[3] = *(_OWORD *)(v9 + 7);
    *a4 = *((_DWORD *)v9 + 1);
    *a3 = *(_DWORD *)v9;
  }
  sub_14039D8F0((__int64)&v11);
  sub_14039D8F0((__int64)&v14);
  return v7;
}

/*
 * XREFs of sub_180067640 @ 0x180067640
 * Callers:
 *     sub_180054530 @ 0x180054530 (sub_180054530.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_1800673A0 @ 0x1800673A0 (sub_1800673A0.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180067640(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 **v19; // rcx
  char v20; // bl
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 *v26[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v28[2]; // [rsp+48h] [rbp-21h] BYREF
  int v29; // [rsp+58h] [rbp-11h]
  __int64 v30; // [rsp+60h] [rbp-9h]
  _QWORD *v31; // [rsp+68h] [rbp-1h]
  __int64 v32; // [rsp+70h] [rbp+7h]
  __int64 v33; // [rsp+78h] [rbp+Fh]

  v30 = a1;
  v33 = a2;
  v31 = a3;
  v32 = a4;
  v29 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18001875C((__int64 *)(a1 + 16), a2);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v27 = (__int64 *)sub_180011088(0x40uLL);
  sub_18001DE8C(v27, (__int64 *)&v27);
  sub_18001DE8C((__int64 *)(v8 + 8), (__int64 *)&v27);
  sub_18001DE8C((__int64 *)(v9 + 16), (__int64 *)&v27);
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v28[0] = (__int64 *)sub_180011088(0x48uLL);
  sub_18001DE8C(v28[0], (__int64 *)v28);
  sub_18001DE8C((__int64 *)(v11 + 8), (__int64 *)v28);
  sub_18001DE8C((__int64 *)(v12 + 16), (__int64 *)v28);
  *(_WORD *)(v13 + 24) = 257;
  *(_QWORD *)(a1 + 80) = v13;
  memset((void *)(a1 + 96), 0, 0xA0uLL);
  sub_18000C8D4(a1 + 96, 16LL, 10LL);
  memset((void *)(a1 + 256), 0, 0xA0uLL);
  sub_18000C8D4(a1 + 256, 16LL, 10LL);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v26[0] = (__int64 *)sub_180011088(0x48uLL);
  sub_18001DE8C(v26[0], (__int64 *)v26);
  sub_18001DE8C((__int64 *)(v14 + 8), (__int64 *)v26);
  sub_18001DE8C((__int64 *)(v15 + 16), (__int64 *)v26);
  *(_WORD *)(v16 + 24) = 257;
  *(_QWORD *)(a1 + 416) = v16;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  v17 = a3[1];
  if ( v17 )
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
  *(_QWORD *)(a1 + 440) = *a3;
  *(_QWORD *)(a1 + 448) = a3[1];
  if ( *(_QWORD *)a4 )
  {
    v18 = *(_QWORD *)(a4 + 8);
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v18 = *(_QWORD *)(a4 + 8);
    }
    v26[0] = *(__int64 **)a4;
    v26[1] = (__int64 *)v18;
    v19 = v26;
    v20 = 1;
  }
  else
  {
    v19 = (__int64 **)sub_1800673A0(v28);
    v20 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v19;
  *(_QWORD *)(a1 + 464) = v19[1];
  *v19 = 0LL;
  v19[1] = 0LL;
  if ( (v20 & 2) != 0 )
  {
    v20 &= ~2u;
    sub_180010910((__int64)v28);
  }
  if ( (v20 & 1) != 0 )
    sub_180010910((__int64)v26);
  sub_1800FC230(a1 + 472);
  v26[0] = (__int64 *)(a1 + 480);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  v26[0] = (__int64 *)sub_180011088(0x30uLL);
  sub_18001DE8C(v26[0], (__int64 *)v26);
  sub_18001DE8C((__int64 *)(v21 + 8), (__int64 *)v26);
  sub_18001DE8C((__int64 *)(v22 + 16), (__int64 *)v26);
  *(_WORD *)(v23 + 24) = 257;
  *(_QWORD *)(a1 + 480) = v23;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  v24 = *(_QWORD *)(a2 + 24);
  if ( v24 >= 0x10 )
    sub_180010884(*(char **)a2, v24 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_180010910((__int64)a3);
  sub_180010910(a4);
  return a1;
}

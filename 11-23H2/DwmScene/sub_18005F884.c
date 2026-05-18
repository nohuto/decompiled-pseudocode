/*
 * XREFs of sub_18005F884 @ 0x18005F884
 * Callers:
 *     sub_18004E2F8 @ 0x18004E2F8 (sub_18004E2F8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18004E6D8 @ 0x18004E6D8 (sub_18004E6D8.c)
 *     sub_18004E718 @ 0x18004E718 (sub_18004E718.c)
 *     sub_18005ED08 @ 0x18005ED08 (sub_18005ED08.c)
 *     sub_18005F568 @ 0x18005F568 (sub_18005F568.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18005F884(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  _QWORD *v17; // [rsp+50h] [rbp-68h]
  _QWORD *v18; // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  __int64 v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h]

  v16 = a1;
  v21 = a2;
  v17 = a3;
  v18 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_180017648((_QWORD *)(a1 + 16), a2);
  sub_18004E718((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_18004E6D8((__int64 *)(a1 + 80));
  memset((void *)(a1 + 96), 0, 0xA0uLL);
  sub_18000C8C8(a1 + 96, 16LL, 10LL);
  memset((void *)(a1 + 256), 0, 0xA0uLL);
  sub_18000C8C8(a1 + 256, 16LL, 10LL);
  v14 = a1 + 416;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v8 = sub_18001C190();
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 416) = v8;
  *(_DWORD *)(a1 + 432) = 0;
  sub_18001246C((_QWORD *)(a1 + 440), a3);
  if ( *a4 )
  {
    v9 = sub_18001246C(&v19, a4);
    v10 = 1;
  }
  else
  {
    v9 = sub_18005F568(&v14);
    v10 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v9;
  *(_QWORD *)(a1 + 464) = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v15 )
      sub_180010530(v15);
  }
  if ( (v10 & 1) != 0 && v20 )
    sub_180010530(v20);
  sub_1800E0D60(a1 + 472);
  v14 = a1 + 480;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = sub_18005ED08();
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  sub_180011B24(a2);
  v11 = a3[1];
  if ( v11 )
    sub_180010530(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010530(v12);
  return a1;
}

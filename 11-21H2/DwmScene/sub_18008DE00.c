/*
 * XREFs of sub_18008DE00 @ 0x18008DE00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180012520 @ 0x180012520 (sub_180012520.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180069460 @ 0x180069460 (sub_180069460.c)
 *     sub_180088A5C @ 0x180088A5C (sub_180088A5C.c)
 *     sub_180088B98 @ 0x180088B98 (sub_180088B98.c)
 *     sub_180088D8C @ 0x180088D8C (sub_180088D8C.c)
 *     sub_1800932CC @ 0x1800932CC (sub_1800932CC.c)
 *     sub_180093844 @ 0x180093844 (sub_180093844.c)
 *     sub_1800B6DE4 @ 0x1800B6DE4 (sub_1800B6DE4.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18008DE00(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rbx
  _OWORD *v14; // rdi
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C0h] BYREF
  char *v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+58h] [rbp-A8h]
  char *v20; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h]
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  char *v23; // [rsp+90h] [rbp-70h] BYREF
  char *v24; // [rsp+98h] [rbp-68h]
  char *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-48h] BYREF
  char *v28[3]; // [rsp+C8h] [rbp-38h] BYREF
  char *v29[3]; // [rsp+E0h] [rbp-20h] BYREF
  char *v30[3]; // [rsp+F8h] [rbp-8h] BYREF
  char *v31[3]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v32[48]; // [rsp+128h] [rbp+28h] BYREF

  v4 = a1[8];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a1[8];
  }
  v26[0] = a1[7];
  v26[1] = v4;
  sub_180069460(v26[0], v16, 9);
  sub_180010910((__int64)v26);
  if ( sub_1800122C0(v16) )
  {
    v27 = 0LL;
    sub_18000C8D4((__int64)v32, 16LL, 3LL);
    v5 = *a2;
    v22 = 0LL;
    v6 = *(_QWORD *)(v5 + 64);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
        if ( v8 == v7 )
        {
          v22 = *(_OWORD *)(v5 + 56);
          break;
        }
      }
    }
    v9 = v22;
    v17 = 0LL;
    v10 = *(_QWORD *)(v22 + 80);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
        if ( v12 == v11 )
        {
          v13 = *(_QWORD *)(v9 + 72);
          v17 = *(_OWORD *)(v9 + 72);
          goto LABEL_15;
        }
      }
    }
    v13 = v17;
LABEL_15:
    sub_180010910((__int64)&v22);
    sub_180012520(v13, (__int64)&v20);
    sub_180088B98(v13, (__int64)&v18);
    sub_1800B6DE4((unsigned int)&v20, (unsigned int)&v18, (_DWORD)a1 + 112, (unsigned int)&v27, (__int64)v32);
    sub_180088A5C((__int64 *)v31, a1[22] + 496LL, a1[22] + 544LL);
    sub_180093844(v16[0], &qword_1801F4F98, v31);
    sub_180088A5C((__int64 *)v30, a1[22] + 544LL, a1[22] + 592LL);
    sub_180093844(v16[0], &qword_1801F4FB8, v30);
    sub_180088A5C((__int64 *)v29, a1[22] + 448LL, a1[22] + 496LL);
    sub_180093844(v16[0], &qword_1801F5038, v29);
    sub_180088A5C((__int64 *)v28, a1[22] + 352LL, a1[22] + 400LL);
    sub_180093844(v16[0], &qword_1801F4FF8, v28);
    v14 = (_OWORD *)a1[22];
    v23 = (char *)sub_180011088(0xC0uLL);
    v24 = v23;
    v25 = v23 + 192;
    v24 = (char *)sub_180088D8C(v14, v14 + 12, v23);
    sub_1800932CC(v16[0], &qword_1801F4FD8, &v23);
    if ( v23 )
      sub_180010884(v23, (v25 - v23) & 0xFFFFFFFFFFFFFFC0uLL);
    if ( v28[0] )
      sub_180010884(v28[0], (v28[2] - v28[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v29[0] )
      sub_180010884(v29[0], (v29[2] - v29[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v30[0] )
      sub_180010884(v30[0], (v30[2] - v30[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v31[0] )
      sub_180010884(v31[0], (v31[2] - v31[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v18 )
    {
      sub_1800126E8((__int64)v18, v19);
      sub_180010884(v18, (*((_QWORD *)&v19 + 1) - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = 0LL;
      v19 = 0LL;
    }
    if ( v20 )
    {
      sub_1800126E8((__int64)v20, v21);
      sub_180010884(v20, (*((_QWORD *)&v21 + 1) - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF0uLL);
      v20 = 0LL;
      v21 = 0LL;
    }
    sub_180010910((__int64)&v17);
    sub_18000B4C0((__int64)v32, 16LL, 3LL);
    sub_180010910((__int64)&v27);
  }
  return sub_180010910((__int64)v16);
}

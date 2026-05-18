/*
 * XREFs of sub_1800B4E58 @ 0x1800B4E58
 * Callers:
 *     sub_1800B2D54 @ 0x1800B2D54 (sub_1800B2D54.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180028864 @ 0x180028864 (sub_180028864.c)
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B4044 @ 0x1800B4044 (sub_1800B4044.c)
 *     sub_1800B4100 @ 0x1800B4100 (sub_1800B4100.c)
 *     sub_1800B4D68 @ 0x1800B4D68 (sub_1800B4D68.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800B4E58(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v23[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  char v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  char *v37[2]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v38[176]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v39[176]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v40[216]; // [rsp+268h] [rbp+168h] BYREF
  __int64 *v41; // [rsp+350h] [rbp+250h] BYREF
  _QWORD *v42; // [rsp+360h] [rbp+260h]

  v42 = a3;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v37[1] = 0LL;
  v41 = (__int64 *)sub_180011088(0x58uLL);
  sub_18001DE8C(v41, (__int64 *)&v41);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v41);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v41);
  *(_WORD *)(v8 + 24) = 257;
  v37[0] = (char *)v8;
  sub_1800B4D68(a1 + 928, (__int64)v23);
  sub_18002CCFC((__int64)v37, (__int64)v37, *((char **)v37[0] + 1));
  sub_180010884(v37[0], 0x58uLL);
  *(_QWORD *)(a1 + 1056) = a2;
  v9 = (__int64 *)sub_180028864(*(_QWORD *)(a1 + 912), (__int64)v38);
  sub_1800B3E48(a1, v9);
  sub_1800B3DDC((__int64)v38);
  if ( sub_1800B4028() )
  {
    v18 = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a3[1];
    }
    *(_QWORD *)&v18 = *a3;
    *((_QWORD *)&v18 + 1) = v10;
    sub_1800B4044((_QWORD *)a1, (__int64 *)&v18);
  }
  v11 = (__int64 *)sub_180028864(*(_QWORD *)(a1 + 912), (__int64)v39);
  sub_1800B3E48(a1 + 704, v11);
  sub_1800B3DDC((__int64)v39);
  if ( sub_1800B4028() )
  {
    v19 = 0LL;
    v12 = a3[1];
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = a3[1];
    }
    *(_QWORD *)&v19 = *a3;
    *((_QWORD *)&v19 + 1) = v12;
    sub_1800B4044((_QWORD *)(a1 + 704), (__int64 *)&v19);
  }
  v13 = (__int64 *)sub_180028864(*(_QWORD *)(a1 + 912), (__int64)v40);
  sub_1800B3E48(a1 + 176, v13);
  sub_1800B3DDC((__int64)v40);
  if ( sub_1800B4028() )
  {
    v20 = 0LL;
    v14 = a3[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = a3[1];
    }
    *(_QWORD *)&v20 = *a3;
    *((_QWORD *)&v20 + 1) = v14;
    v21 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = a3[1];
    }
    *(_QWORD *)&v21 = *a3;
    *((_QWORD *)&v21 + 1) = v14;
    sub_1800B4100((_QWORD *)(a1 + 176), (__int64 *)&v21, (__int64 *)&v20);
  }
  *(_DWORD *)(a1 + 920) = 1;
  v15 = *a3;
  v16 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v22[0] = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 896) = v15;
  v22[1] = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 904) = v16;
  sub_180010910((__int64)v22);
  return sub_180010910((__int64)a3);
}

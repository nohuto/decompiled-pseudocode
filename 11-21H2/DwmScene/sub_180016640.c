/*
 * XREFs of sub_180016640 @ 0x180016640
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 *     sub_18003C220 @ 0x18003C220 (sub_18003C220.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180016640(__int64 *a1, _OWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v14[6]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[88]; // [rsp+C0h] [rbp-40h] BYREF
  char *v16; // [rsp+118h] [rbp+18h]
  __int128 v17; // [rsp+120h] [rbp+20h]
  _BYTE v18[80]; // [rsp+130h] [rbp+30h] BYREF

  v14[0] = *a2;
  v14[1] = a2[1];
  v14[2] = a2[2];
  v14[3] = a2[3];
  v14[4] = a2[4];
  v14[5] = a2[5];
  sub_18003C220(v15, v14);
  v11 = 0LL;
  v8 = v7[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = v7[1];
  }
  *(_QWORD *)&v11 = *v7;
  *((_QWORD *)&v11 + 1) = v8;
  v12 = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a3[1];
  }
  *(_QWORD *)&v12 = *a3;
  *((_QWORD *)&v12 + 1) = v9;
  v13 = 0LL;
  sub_180016260(a1, (__int64)v15, &v13, &v12, &v11);
  sub_180010910((__int64)v18);
  if ( v16 )
  {
    sub_180010884(v16, (*((_QWORD *)&v17 + 1) - (_QWORD)v16) & 0xFFFFFFFFFFFFFFFCuLL);
    v16 = 0LL;
    v17 = 0LL;
  }
  sub_180010910((__int64)a3);
  sub_180010910(a4);
  return a1;
}

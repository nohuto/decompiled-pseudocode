/*
 * XREFs of sub_18001808C @ 0x18001808C
 * Callers:
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 * Callees:
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 */

__int64 __fastcall sub_18001808C(
        __int64 a1,
        __int128 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        float *a8)
{
  float X; // xmm2_4
  unsigned int v10; // r11d
  int v11; // ebx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm1
  int v20[4]; // [rsp+40h] [rbp-40h] BYREF
  int v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  int v23[4]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v24; // [rsp+70h] [rbp-10h]

  *(_OWORD *)v20 = 0LL;
  X = *a8;
  v10 = *a7;
  v11 = *a6;
  v12 = *a5;
  v13 = *a4;
  *a4 = 0LL;
  *(_QWORD *)v21 = v13;
  v14 = a4[1];
  a4[1] = 0LL;
  v15 = a3[1];
  v22 = v14;
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a3[1];
  }
  v16 = *a2;
  v17 = *a3;
  v18 = a2[1];
  *(_QWORD *)&v20[2] = v15;
  *(_OWORD *)v23 = v16;
  v24 = v18;
  *(_QWORD *)v20 = v17;
  return sub_180011424(a1, v23, v20, v21, v12, v11, v10, X);
}

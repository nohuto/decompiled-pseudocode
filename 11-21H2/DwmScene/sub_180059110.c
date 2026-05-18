/*
 * XREFs of sub_180059110 @ 0x180059110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800185A8 @ 0x1800185A8 (sub_1800185A8.c)
 *     sub_180058C5C @ 0x180058C5C (sub_180058C5C.c)
 *     sub_180058D64 @ 0x180058D64 (sub_180058D64.c)
 *     sub_180059724 @ 0x180059724 (sub_180059724.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059110(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v16[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-10h] BYREF

  v17 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v17 = *a2;
  *((_QWORD *)&v17 + 1) = v4;
  sub_18008E620(a1, &v17);
  sub_1800185A8(v16, a2);
  v5 = (_DWORD *)v16[0];
  *(_DWORD *)(v16[0] + 92) = *(_DWORD *)(a1 + 92);
  v5[24] = *(_DWORD *)(a1 + 96);
  v5[25] = *(_DWORD *)(a1 + 100);
  v5[26] = *(_DWORD *)(a1 + 104);
  sub_180058C5C(v5 + 27, (_DWORD *)(a1 + 108));
  sub_180058D64(v5 + 64, (_DWORD *)(a1 + 256));
  v6 = v5 + 108;
  v7 = *(_QWORD *)(a1 + 440);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 440);
    v5 = (_DWORD *)v16[0];
  }
  v8 = *(_QWORD *)(a1 + 432);
  v18[0] = *v6;
  *v6 = v8;
  v18[1] = v6[1];
  v6[1] = v7;
  sub_180010910((__int64)v18);
  v9 = v5 + 112;
  v10 = *(_QWORD *)(a1 + 456);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 456);
    v5 = (_DWORD *)v16[0];
  }
  v11 = *(_QWORD *)(a1 + 448);
  v19[0] = *v9;
  *v9 = v11;
  v19[1] = v9[1];
  v9[1] = v10;
  sub_180010910((__int64)v19);
  v12 = v5 + 128;
  v13 = *(_QWORD *)(a1 + 520);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *(_QWORD *)(a1 + 520);
    v5 = (_DWORD *)v16[0];
  }
  v14 = *(_QWORD *)(a1 + 512);
  v20[0] = *v12;
  *v12 = v14;
  v20[1] = v12[1];
  v12[1] = v13;
  sub_180010910((__int64)v20);
  v5[132] = *(_DWORD *)(a1 + 528);
  sub_180059724(v5);
  sub_180010910((__int64)v16);
  return sub_180010910((__int64)a2);
}

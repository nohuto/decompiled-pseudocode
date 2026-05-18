/*
 * XREFs of sub_1800A6E20 @ 0x1800A6E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18006BE58 @ 0x18006BE58 (sub_18006BE58.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A6E20(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF

  v10 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  sub_18008E620(a1, (__int64)&v10);
  sub_18006BE58(v11, a2);
  v5 = (_DWORD *)v11[0];
  *(_DWORD *)(v11[0] + 112) = *(_DWORD *)(a1 + 112);
  v5[29] = *(_DWORD *)(a1 + 116);
  v5[30] = *(_DWORD *)(a1 + 120);
  v5[31] = *(_DWORD *)(a1 + 124);
  v5[32] = *(_DWORD *)(a1 + 128);
  v5[33] = *(_DWORD *)(a1 + 132);
  v5[22] = *(_DWORD *)(a1 + 88);
  v6 = v5 + 24;
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 104);
    v5 = (_DWORD *)v11[0];
  }
  v8 = *(_QWORD *)(a1 + 96);
  v12[0] = *v6;
  *v6 = v8;
  v12[1] = v6[1];
  v6[1] = v7;
  sub_180010910((__int64)v12);
  v5[35] = *(_DWORD *)(a1 + 140);
  v5[36] = *(_DWORD *)(a1 + 144);
  v5[37] = *(_DWORD *)(a1 + 148);
  v5[34] = *(_DWORD *)(a1 + 136);
  v5[38] = *(_DWORD *)(a1 + 152);
  v5[39] = *(_DWORD *)(a1 + 156);
  v5[40] = *(_DWORD *)(a1 + 160);
  v5[41] = *(_DWORD *)(a1 + 164);
  sub_180010910((__int64)v11);
  return sub_180010910((__int64)a2);
}

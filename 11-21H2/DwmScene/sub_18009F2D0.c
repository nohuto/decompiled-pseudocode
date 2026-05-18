/*
 * XREFs of sub_18009F2D0 @ 0x18009F2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180020AFC @ 0x180020AFC (sub_180020AFC.c)
 *     sub_18006BEC0 @ 0x18006BEC0 (sub_18006BEC0.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009F2D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
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
  sub_18006BEC0(v11, a2);
  v5 = v11[0];
  *(_BYTE *)(v11[0] + 88) = *(_BYTE *)(a1 + 88);
  v6 = (_QWORD *)(v5 + 96);
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 104);
    v5 = v11[0];
  }
  v8 = *(_QWORD *)(a1 + 96);
  v12[0] = *v6;
  *v6 = v8;
  v12[1] = v6[1];
  v6[1] = v7;
  sub_180010910((__int64)v12);
  if ( v5 + 112 != a1 + 112 )
    sub_180020AFC(v5 + 112, a1 + 112);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(v5 + 152) = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  sub_180010910((__int64)v11);
  return sub_180010910((__int64)a2);
}

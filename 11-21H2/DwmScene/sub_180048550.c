/*
 * XREFs of sub_180048550 @ 0x180048550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001298C @ 0x18001298C (sub_18001298C.c)
 *     sub_18008E620 @ 0x18008E620 (sub_18008E620.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180048550(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v7 = *a2;
  *((_QWORD *)&v7 + 1) = v4;
  sub_18008E620(a1, &v7);
  sub_18001298C(v8, a2);
  v5 = v8[0];
  *(_DWORD *)(v8[0] + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(v5 + 124) = *(_BYTE *)(a1 + 124);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 108) = *(_DWORD *)(a1 + 108);
  sub_180010910((__int64)v8);
  return sub_180010910((__int64)a2);
}

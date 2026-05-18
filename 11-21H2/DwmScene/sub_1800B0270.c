/*
 * XREFs of sub_1800B0270 @ 0x1800B0270
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B0270(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::VertexBufferState::`vftable';
  v4 = 15LL;
  sub_18000C8D4(a1 + 8, 16LL, 15LL);
  sub_18000C8D4(a1 + 248, 16LL, 15LL);
  sub_18000C8D4(a1 + 488, 16LL, 15LL);
  *(_BYTE *)(a1 + 1088) = 1;
  v5 = (__int64 *)(a2 + 768);
  v6 = a1 + 488 - a2;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = *v5;
    }
    v9[0] = *(__int64 *)((char *)v5 + v6 - 768);
    *(__int64 *)((char *)v5 + v6 - 768) = *(v5 - 1);
    v9[1] = *(__int64 *)((char *)v5 + v6 - 760);
    *(__int64 *)((char *)v5 + v6 - 760) = v7;
    sub_180010910((__int64)v9);
    v5 += 2;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)(a1 + 848) = *(_OWORD *)(a2 + 1000);
  *(_OWORD *)(a1 + 864) = *(_OWORD *)(a2 + 1016);
  *(_OWORD *)(a1 + 880) = *(_OWORD *)(a2 + 1032);
  *(_QWORD *)(a1 + 896) = *(_QWORD *)(a2 + 1048);
  *(_DWORD *)(a1 + 904) = *(_DWORD *)(a2 + 1056);
  *(_OWORD *)(a1 + 1028) = *(_OWORD *)(a2 + 1060);
  *(_OWORD *)(a1 + 1044) = *(_OWORD *)(a2 + 1076);
  *(_OWORD *)(a1 + 1060) = *(_OWORD *)(a2 + 1092);
  *(_QWORD *)(a1 + 1076) = *(_QWORD *)(a2 + 1108);
  *(_DWORD *)(a1 + 1084) = *(_DWORD *)(a2 + 1116);
  return a1;
}

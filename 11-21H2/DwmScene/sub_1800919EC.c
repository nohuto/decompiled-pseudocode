/*
 * XREFs of sub_1800919EC @ 0x1800919EC
 * Callers:
 *     sub_18008E894 @ 0x18008E894 (sub_18008E894.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18009079C @ 0x18009079C (sub_18009079C.c)
 *     sub_1800908B4 @ 0x1800908B4 (sub_1800908B4.c)
 *     sub_180091CE8 @ 0x180091CE8 (sub_180091CE8.c)
 *     sub_180093A34 @ 0x180093A34 (sub_180093A34.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800919EC(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 *v11; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = sub_18009079C(*a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = v4[1];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *(_QWORD *)(a1 + 16) = *v4;
  *(_QWORD *)(a1 + 24) = v4[1];
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  v11 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v11 = (__int64 *)sub_180011088(0x28uLL);
  sub_18001DE8C(v11, (__int64 *)&v11);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v11);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v11);
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v8;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = sub_1800908B4(*a2);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242);
  v9 = *a2;
  if ( a1 + 32 != *a2 + 80 )
  {
    sub_180093A34(a1 + 32, *a2 + 80);
    v9 = *a2;
  }
  sub_180091CE8(a1 + 56, v9 + 104);
  return a1;
}

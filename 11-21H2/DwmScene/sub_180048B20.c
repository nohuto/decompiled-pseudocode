/*
 * XREFs of sub_180048B20 @ 0x180048B20
 * Callers:
 *     sub_180066E60 @ 0x180066E60 (sub_180066E60.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180048B20(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v6 = (__int64 *)a1;
  sub_18002B33C((__int64 *)a1, 0, 10);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  *(_WORD *)(a1 + 112) = 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 192) = _InterlockedIncrement64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F7518));
  v7 = a1 + 200;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v6 = (__int64 *)sub_180011088(0x28uLL);
  sub_18001DE8C(v6, (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v6);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v4;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 192) |= 0xFFFFFFFF00000000uLL;
  return a1;
}

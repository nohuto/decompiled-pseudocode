/*
 * XREFs of sub_18005C8A4 @ 0x18005C8A4
 * Callers:
 *     sub_18001815C @ 0x18001815C (sub_18001815C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005C8A4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  signed __int64 v5; // rcx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  v7 = (__int64 *)a1;
  sub_18002B33C((__int64 *)a1, 1, 11);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  v8 = a1 + 112;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v7 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v7, (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v7);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 112) = v4;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F7520), 1uLL);
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = (v5 + 1) | 0xFFFFFFFF00000000uLL;
  return a1;
}

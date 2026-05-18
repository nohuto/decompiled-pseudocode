/*
 * XREFs of sub_180051C0C @ 0x180051C0C
 * Callers:
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 * Callees:
 *     sub_1800513C0 @ 0x1800513C0 (sub_1800513C0.c)
 *     sub_1800514C8 @ 0x1800514C8 (sub_1800514C8.c)
 *     sub_180051948 @ 0x180051948 (sub_180051948.c)
 *     sub_180051D20 @ 0x180051D20 (sub_180051D20.c)
 *     sub_1800A3B3C @ 0x1800A3B3C (sub_1800A3B3C.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 *     sub_1800A3DDC @ 0x1800A3DDC (sub_1800A3DDC.c)
 */

__int64 __fastcall sub_180051C0C(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __m128 *v10; // r9
  __m128 *v11; // r10
  __m128 v13; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[168]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = (_DWORD *)sub_1800A3D78(v14, a2, a1 + 256, a2);
  sub_1800514C8(v3, v2);
  sub_1800A3DDC(v4, v5);
  v7 = (_DWORD *)sub_1800A3B3C(v14, v6);
  sub_1800513C0((_DWORD *)(v8 + 108), v7);
  sub_180051D20(v9);
  v13 = *v10;
  return sub_180051948(v11, &v13);
}

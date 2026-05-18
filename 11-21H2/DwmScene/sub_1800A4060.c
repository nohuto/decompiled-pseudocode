/*
 * XREFs of sub_1800A4060 @ 0x1800A4060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010EC0 @ 0x180010EC0 (sub_180010EC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 */

__int64 __fastcall sub_1800A4060(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rax
  __int128 v11; // kr00_16
  __int64 v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15[4]; // [rsp+40h] [rbp-20h] BYREF

  v10 = sub_18002850C(a2);
  sub_180010EC0(v10, &v14);
  v11 = v14;
  v15[0] = *(_QWORD *)(a1 + 200);
  v15[1] = *(_QWORD *)(a1 + 208);
  v14 = 0LL;
  *(_OWORD *)(a1 + 200) = v11;
  sub_180010910((__int64)v15);
  sub_180010910((__int64)&v14);
  v12 = *(_QWORD *)(a1 + 200);
  v15[2] = 0LL;
  v15[3] = 15LL;
  LOBYTE(v15[0]) = 0;
  sub_180012190(v15, "ImageProcessingEffectPlanarReflection", 0x25uLL);
  sub_18002BC44(v12, v15);
  return sub_18002A240(*(_QWORD *)(a1 + 200), a3, a4, a5, a6, a2);
}

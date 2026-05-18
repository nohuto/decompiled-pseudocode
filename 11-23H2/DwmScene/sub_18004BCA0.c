/*
 * XREFs of sub_18004BCA0 @ 0x18004BCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800160D8 @ 0x1800160D8 (sub_1800160D8.c)
 *     sub_180048B00 @ 0x180048B00 (sub_180048B00.c)
 *     sub_18004BDC0 @ 0x18004BDC0 (sub_18004BDC0.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_180081460 @ 0x180081460 (sub_180081460.c)
 */

__int64 __fastcall sub_18004BCA0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 *v11; // rax
  int v12; // ebx
  _QWORD *v13; // rax
  __int16 v14; // r10
  int v15; // r11d
  __int64 v17; // [rsp+68h] [rbp-40h] BYREF
  __int64 v18; // [rsp+70h] [rbp-38h]

  sub_180081460(a1, &v17);
  if ( v18 )
    sub_180010530(v18);
  v10 = sub_18008141C(a1);
  v11 = sub_1800160D8(v10, &v17);
  sub_180011020((_QWORD *)(a1 + 88), v11);
  if ( v18 )
    sub_180010530(v18);
  sub_180048B00(*(_QWORD *)(a1 + 88), a4);
  v12 = *(_DWORD *)(a4 + 16);
  v13 = sub_18001246C(&v17, (_QWORD *)(a1 + 88));
  sub_18004BDC0(a1, a2, a3, a6, (__int64)v13, v12, v15, a4 + 116, a4 + 180, a4 + 192, (v14 & 0x200) != 0);
  return a2;
}

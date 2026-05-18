/*
 * XREFs of sub_180044798 @ 0x180044798
 * Callers:
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 *     sub_180095E20 @ 0x180095E20 (sub_180095E20.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_1800435A8 @ 0x1800435A8 (sub_1800435A8.c)
 *     sub_180043BCC @ 0x180043BCC (sub_180043BCC.c)
 *     sub_18004FAF8 @ 0x18004FAF8 (sub_18004FAF8.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 */

char __fastcall sub_180044798(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  char result; // al
  __int64 *v13; // rax
  _BYTE v14[8]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v15; // [rsp+30h] [rbp-31h]
  __int64 v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h]
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  __int64 v19; // [rsp+50h] [rbp-11h]
  _DWORD v20[6]; // [rsp+58h] [rbp-9h] BYREF
  char v21; // [rsp+70h] [rbp+Fh]
  __int128 v22; // [rsp+74h] [rbp+13h]
  __int128 v23; // [rsp+84h] [rbp+23h]
  char v24; // [rsp+94h] [rbp+33h]
  bool v25; // [rsp+95h] [rbp+34h]
  char v26; // [rsp+96h] [rbp+35h]
  __int16 v27; // [rsp+97h] [rbp+36h]
  int v28; // [rsp+9Ch] [rbp+3Bh]

  v8 = (_QWORD *)sub_180026B04(a1, &v16);
  v9 = (_QWORD *)sub_180060D9C(*v8, v14);
  v10 = sub_18004FAF8(*v9);
  if ( v15 )
    sub_180010530(v15);
  if ( v17 )
    sub_180010530(v17);
  v20[0] = 0;
  v20[3] = 0;
  v20[4] = 0;
  v20[5] = 0;
  v11 = *(_QWORD *)(a1 + 168);
  v21 = 0;
  v25 = a3 == 1;
  v24 = 1;
  v27 = 256;
  v28 = 3;
  v26 = 0;
  v20[2] = a2;
  v20[1] = a4;
  v22 = 0LL;
  v23 = 0LL;
  if ( !v11 || (result = sub_180043BCC(*(_QWORD *)(v11 + 112), (__int64)v20)) == 0 )
  {
    v13 = sub_1800435A8(v10, &v18);
    sub_180011020((_QWORD *)(a1 + 168), v13);
    if ( v19 )
      sub_180010530(v19);
    return sub_1800883E0(*(_QWORD *)(a1 + 168), v20, 0LL);
  }
  return result;
}

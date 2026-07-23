/*
 * XREFs of sub_140789CFC @ 0x140789CFC
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A3C0 @ 0x14078A3C0 (sub_14078A3C0.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 */

__int64 __fastcall sub_140789CFC(
        __int64 a1,
        __int64 a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v6; // r14
  int v9; // ebx
  int v10; // ecx
  SIZE_T Length; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch] BYREF
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h]
  int v17[2]; // [rsp+68h] [rbp-8h]

  v6 = (_DWORD *)a6;
  v14 = 0;
  v13 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  v15 = 0LL;
  *(_QWORD *)v17 = 0LL;
  v16 = 0LL;
  v9 = sub_14078A1A8(a1, a2, a5, &v15);
  if ( v9 >= 0 )
  {
    if ( (_QWORD)v16 && *(_QWORD *)((char *)&v15 + 4) == 0x100000000LL && !HIDWORD(v16) && a3 && a4 >= 0x14 )
      v10 = sub_14078A470(qword_140D00AC0, v16, 0, (unsigned int)&v14, (__int64)&v13, (__int64)&a6);
    else
      v10 = -1073741811;
    LODWORD(Length) = a4;
    v9 = sub_14078A3C0(v10, v14, v13, a6, v17[0], a3, Length, (__int64)v6);
  }
  sub_1406BACAC((__int64)&v15);
  return (unsigned int)v9;
}

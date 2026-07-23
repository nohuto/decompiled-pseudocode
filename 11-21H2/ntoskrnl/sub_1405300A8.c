/*
 * XREFs of sub_1405300A8 @ 0x1405300A8
 * Callers:
 *     sub_140530270 @ 0x140530270 (sub_140530270.c)
 * Callees:
 *     sub_14052E940 @ 0x14052E940 (sub_14052E940.c)
 *     sub_14052EA40 @ 0x14052EA40 (sub_14052EA40.c)
 *     sub_14052EA60 @ 0x14052EA60 (sub_14052EA60.c)
 *     sub_14052FEA0 @ 0x14052FEA0 (sub_14052FEA0.c)
 *     sub_14052FFE0 @ 0x14052FFE0 (sub_14052FFE0.c)
 */

_QWORD *__fastcall sub_1405300A8(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        _QWORD *a10)
{
  __int64 *v10; // rsi
  __int64 v13; // rcx
  char v14; // di
  int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int16 v19; // r10
  __int64 v20; // r9
  _QWORD *result; // rax
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  v26 = a2;
  v10 = a4;
  if ( !a4 )
    v10 = sub_14052EA60(a1, a2);
  v13 = 0LL;
  v14 = 0;
  v25 = 0LL;
  if ( a7 )
  {
    v15 = *(_DWORD *)(a7 + 4);
    if ( v15 == 1 )
    {
      v14 = 1;
      sub_14052E940(a1, &v26, (unsigned __int64 *)&v25);
      v13 = v25;
      goto LABEL_11;
    }
    if ( v15 )
    {
      v13 = *(_QWORD *)(a7 + 40) >> 12;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 319) )
        goto LABEL_11;
      v13 = *(__int64 *)(a1 + 328) >> 12;
    }
    v14 = 1;
  }
LABEL_11:
  v16 = sub_14052EA40(v13, 0, v14);
  sub_14052FFE0(a1, (__int64)v10, v18, v16, v19, v17);
  sub_14052FEA0(a1, a2, v10, v20, v22, v23, v24, a9);
  result = a10;
  if ( a10 )
    *a10 = 0x10000LL;
  return result;
}

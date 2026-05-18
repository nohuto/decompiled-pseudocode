/*
 * XREFs of sub_18002AAE4 @ 0x18002AAE4
 * Callers:
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 * Callees:
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_18002A644 @ 0x18002A644 (sub_18002A644.c)
 */

__int64 __fastcall sub_18002AAE4(__int64 *a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 v4; // r15
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-30h]

  v4 = *a1;
  v16 = 0;
  v9 = v4;
  v10 = *(_QWORD *)(v4 + 8);
  v15 = v10;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v15 = v10;
    if ( (unsigned __int8)sub_18001C7B4((_QWORD *)(v10 + 32), a3) )
    {
      v16 = 0;
      v10 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v9 = v10;
      v16 = 1;
      v10 = *(_QWORD *)v10;
    }
  }
  if ( *(_BYTE *)(v9 + 25) || (unsigned __int8)sub_18001C7B4(a3, (_QWORD *)(v9 + 32)) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DDFC();
    v11 = sub_18002A644(v14, (__int64)a1, v4, (__int64)a3, a4);
    v12 = v11[1];
    v11[1] = 0LL;
    sub_18001D32C((__int64)v14);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v15, v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

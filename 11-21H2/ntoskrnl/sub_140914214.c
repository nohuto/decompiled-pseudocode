/*
 * XREFs of sub_140914214 @ 0x140914214
 * Callers:
 *     sub_140914BEC @ 0x140914BEC (sub_140914BEC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406AD650 @ 0x1406AD650 (sub_1406AD650.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079B8C0 @ 0x14079B8C0 (sub_14079B8C0.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_140914214(ULONG_PTR a1, unsigned __int16 *a2, unsigned int a3, int *a4)
{
  unsigned int v8; // r14d
  int v9; // eax
  _WORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int16 v12; // ax
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  void *v16; // [rsp+40h] [rbp-28h] BYREF

  v15 = 0LL;
  v14 = -1;
  v16 = 0LL;
  sub_1407C97FC(&v15);
  v8 = (unsigned __int16)sub_1406AD650(a2) + 20;
  v9 = sub_14079C8A4(a1, v8, a3, &v14, (__int64)&v16, (__int64)&v15);
  v10 = v16;
  v11 = v9;
  if ( v9 >= 0 )
  {
    memset(v16, 0, v8);
    *v10 = 27510;
    v10[8] = 2;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = -1;
    *((_DWORD *)v10 + 3) = 0;
    v12 = sub_14079B8C0((_BYTE *)v10 + 20, a2);
    v10[1] = v12;
    if ( v12 < *a2 )
      v10[8] |= 1u;
    v11 = 0;
    *a4 = v14;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      sub_1406BF450(a1, &v15);
    else
      sub_1407C97C0(a1, (unsigned int *)&v15);
  }
  return v11;
}

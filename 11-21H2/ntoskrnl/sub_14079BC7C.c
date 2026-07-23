/*
 * XREFs of sub_14079BC7C @ 0x14079BC7C
 * Callers:
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14065DE48 @ 0x14065DE48 (sub_14065DE48.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14079BC7C(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        int a4,
        int *a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  const void *v10; // rsi
  unsigned int v11; // r12d
  int v12; // r14d
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  void *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v17 = -1;
  v8 = BugCheckParameter4;
  sub_1407C97FC(&v14);
  v16 = 0LL;
  sub_1407C97FC(&v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v9 = sub_1406BF400(BugCheckParameter3, v8, &v14);
  else
    v9 = sub_1407C9820(BugCheckParameter3);
  v10 = (const void *)v9;
  v11 = -4 - *(_DWORD *)(v9 - 4);
  v12 = sub_14079C8A4(a3, v11, a4, (unsigned int)&v17, (__int64)&v16, (__int64)&v15);
  if ( v12 >= 0 )
  {
    memmove(v16, v10, v11);
    v12 = 0;
    *a5 = v17;
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      sub_1406BF450(a3, &v15);
    else
      sub_1407C97C0(a3, &v15);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v14);
  else
    sub_1407C97C0(BugCheckParameter3, &v14);
  return (unsigned int)v12;
}

/*
 * XREFs of sub_14082A974 @ 0x14082A974
 * Callers:
 *     sub_14082A864 @ 0x14082A864 (sub_14082A864.c)
 * Callees:
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 *     sub_1403853B0 @ 0x1403853B0 (sub_1403853B0.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 *     sub_1403C2810 @ 0x1403C2810 (sub_1403C2810.c)
 */

ULONG_PTR __fastcall sub_14082A974(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // ebp
  int v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  ULONG_PTR result; // rax
  unsigned __int64 v15; // rax
  int v16; // edx
  ULONG_PTR v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  if ( !a3 )
  {
    v5 = a1 << 25 >> 16;
    if ( (unsigned int)sub_1402FDD20(v5) )
    {
      v15 = v4;
      do
        v15 = sub_140313C70(v15);
      while ( v16 != 1 );
      v6 = sub_140317A10(v15);
      v7 = sub_1403B8520(v5);
    }
    else
    {
      v17 = sub_140317A10(v4);
      v6 = v17;
      v7 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
    }
    v8 = 3;
    v9 = ((v6 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v6 < 0 )
      v9 = (v6 & 0x800) != 0 ? 4 : 1;
    goto LABEL_6;
  }
  *a2 = 0LL;
  v9 = 6;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x44000000000LL) >> 4);
  v8 = 3;
  if ( a3 != 3 )
  {
LABEL_6:
    v10 = sub_140313C70(v4);
    v17 = sub_1403853B0(v10, v11, 0, 0LL);
    v12 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_7;
  }
  v12 = -1LL;
LABEL_7:
  v13 = sub_1402CBD10(v4, v7, v9 | (a3 != 0 ? -1744830464 : -1879048192)) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v12 = *((_QWORD *)PsInitialSystemProcess + 5) >> 12;
    sub_14027CCE4(v7, v4, v12, 2560);
  }
  result = sub_1403853B0(v4, a3, 1, v13);
  if ( a3 == 3 )
  {
    sub_1403C2810(v4);
    do
    {
      v4 = v4 << 25 >> 16;
      --v8;
    }
    while ( v8 );
    return sub_14036CB28(v4, v4);
  }
  return result;
}

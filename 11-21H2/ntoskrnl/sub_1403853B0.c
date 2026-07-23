/*
 * XREFs of sub_1403853B0 @ 0x1403853B0
 * Callers:
 *     sub_1403852C0 @ 0x1403852C0 (sub_1403852C0.c)
 *     sub_14082A864 @ 0x14082A864 (sub_14082A864.c)
 *     sub_14082A974 @ 0x14082A974 (sub_14082A974.c)
 *     sub_140978B04 @ 0x140978B04 (sub_140978B04.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall sub_1403853B0(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // r15
  __int64 v10; // r14
  ULONG_PTR v11; // rdi
  _QWORD *v12; // rsi
  ULONG_PTR v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  ULONG_PTR BugCheckParameter4; // rax
  BOOL v18; // r14d
  ULONG_PTR v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h]
  __int128 v22; // [rsp+50h] [rbp-10h]
  unsigned __int8 v23; // [rsp+A8h] [rbp+48h] BYREF
  int v24; // [rsp+B0h] [rbp+50h]

  v24 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = a2;
  v20 = a2;
  v7 = a2;
  v22 = 0LL;
  v8 = *(_QWORD *)(v5 + 1928);
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      BugCheckParameter2[v6] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v6;
    }
    while ( v6 < 4 );
  }
  v9 = 17;
  v10 = a2;
  v11 = 0LL;
  v23 = 17;
  v19 = 0LL;
  v12 = (_QWORD *)v8;
  while ( 1 )
  {
    v13 = BugCheckParameter2[--v10];
    if ( v10 == 3 )
    {
      v12 += (v13 >> 3) & 0x1FF;
    }
    else
    {
      if ( v9 != 17 )
        sub_1402BEDD0(v8, v9);
      v14 = sub_140317A10((unsigned __int64)&v19);
      v15 = sub_1402CC7C0((v14 >> 12) & 0xFFFFFFFFFFLL, &v23, 0x80000000);
      v9 = v23;
      v8 = v15;
      v7 = v20;
      v12 = (_QWORD *)(v15 + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( v24 && v10 == v7 )
      break;
    BugCheckParameter4 = sub_140317A10((unsigned __int64)v12);
    v19 = BugCheckParameter4;
    v11 = BugCheckParameter4;
    if ( v10 && (BugCheckParameter4 & 1) != 0 && (BugCheckParameter4 & 0x80u) != 0LL )
      KeBugCheckEx(0x1Au, 0x3606uLL, v13, 0LL, BugCheckParameter4);
    v7 = v20;
    if ( v10 == v20 )
      goto LABEL_14;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v10 )
      a4 |= 0x100uLL;
    v18 = 0;
    if ( sub_140317A80((unsigned __int64)v12) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C51864) && (a4 & 1) != 0 )
          a4 |= 0x8000000000000000uLL;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (a4 & 1) != 0 )
          a4 |= 0x8000000000000000uLL;
        v11 = v19;
        v9 = v23;
      }
    }
  }
  else
  {
    v18 = 0;
    if ( sub_140317A80((unsigned __int64)v12) )
      v18 = sub_140229550() != 0;
  }
  *v12 = a4;
  if ( v18 )
    sub_1402294F0((__int64)v12, a4);
LABEL_14:
  if ( v9 != 17 )
    sub_1402BEDD0(v8, v9);
  return v11;
}

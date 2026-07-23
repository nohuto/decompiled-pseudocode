/*
 * XREFs of sub_1405A8748 @ 0x1405A8748
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 */

__int64 __fastcall sub_1405A8748(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // r13
  unsigned int v10; // ebx
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int8 v15; // al
  __int64 v16; // r9
  unsigned __int8 v17; // r15
  bool v18; // zf
  unsigned __int64 v19; // rax
  unsigned __int8 v21[8]; // [rsp+80h] [rbp+28h]

  if ( a5 != 4096 )
    return 3221225715LL;
  v7 = a6;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v11 = v8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v15 = sub_1402CF4F0(v14);
  v21[0] = v15;
  if ( v8 > v9 )
    goto LABEL_27;
  v17 = v15;
  do
  {
    if ( (v11 & 0x78) != 0 || v11 == v8 )
    {
      if ( !v13 )
        goto LABEL_20;
      goto LABEL_18;
    }
    if ( sub_1403531F0(v14) || KeShouldYieldProcessor() )
    {
LABEL_14:
      if ( v13 )
        sub_14020D8D0(v14, v13);
      sub_1402B0CE0(v14, v17);
      sub_1402CF4F0(v14);
      goto LABEL_20;
    }
    if ( v13 )
    {
      if ( (unsigned int)sub_140274C80(v14, v13) )
        goto LABEL_14;
LABEL_18:
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_21;
      sub_14020D8D0(v14, v13);
    }
LABEL_20:
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LOBYTE(v16) = v17;
    sub_14032CE60(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v16, 0);
LABEL_21:
    v18 = (sub_140317A10(v11) & 1) == 0;
    v19 = v12 + 1;
    if ( !v18 )
      v19 = v12;
    v11 += 8LL;
    v12 = v19;
  }
  while ( v11 <= v9 );
  v7 = a6;
  if ( v13 )
    sub_14020D8D0(v14, v13);
  v15 = v21[0];
LABEL_27:
  sub_1402B0CE0(v14, v15);
  if ( v12 )
    return (unsigned int)sub_1405A7D28(a2, v12, v8, v9, v7);
  return v10;
}

/*
 * XREFs of sub_140A7FE00 @ 0x140A7FE00
 * Callers:
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 * Callees:
 *     sub_14020C4B8 @ 0x14020C4B8 (sub_14020C4B8.c)
 *     sub_1402AACD0 @ 0x1402AACD0 (sub_1402AACD0.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 *     sub_140A80FC8 @ 0x140A80FC8 (sub_140A80FC8.c)
 *     sub_140A8CDBC @ 0x140A8CDBC (sub_140A8CDBC.c)
 *     sub_140A8CE34 @ 0x140A8CE34 (sub_140A8CE34.c)
 */

__int64 __fastcall sub_140A7FE00(__int64 a1, char a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  char v12; // bp
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax

  v5 = a3;
  if ( (qword_140D01450 & 0x10) == 0 )
    return sub_1402AACD0(a1, a2, a3);
  v8 = sub_140A80FC8(0LL);
  v10 = (_QWORD *)v8;
  if ( v8 )
    v11 = v8 + 24;
  else
    v11 = 0LL;
  v12 = a2 + 2;
  LOBYTE(v9) = v12;
  v13 = sub_140A8CDBC(v9, v5, a4, v11);
  if ( !v13 )
  {
    v14 = sub_1402AACD0(a1, v12, v5);
    v13 = v14;
    if ( v14 )
      sub_140A8CE34(v14, v11);
  }
  if ( v10 )
    *v10 = v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 184) -= 144LL;
    v15 = *(_QWORD *)(v13 + 184);
    *(_BYTE *)(v13 + 67) -= 2;
    *(_BYTE *)(v13 + 66) -= 2;
    *(_QWORD *)(v13 + 200) = v15;
    if ( sub_14020C4B8() )
      sub_140556BE4(v13);
  }
  return v13;
}

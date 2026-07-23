/*
 * XREFs of sub_1405AA07C @ 0x1405AA07C
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405A9744 @ 0x1405A9744 (sub_1405A9744.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_1405AC9A0 @ 0x1405AC9A0 (sub_1405AC9A0.c)
 */

char __fastcall sub_1405AA07C(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // r9
  unsigned __int8 v12; // r12
  char result; // al
  __int64 v14; // rdi
  int v15; // r15d
  BOOL v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8

  v9 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    LOBYTE(v11) = sub_1402CF4F0(v9);
    v12 = v11;
    sub_14032CE60(a1, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x7F, v11, 0);
  }
  else
  {
    v12 = 17;
  }
  if ( a4 )
  {
    result = sub_14033DBC0(a1, a2);
LABEL_21:
    LODWORD(v17) = 0;
    goto LABEL_22;
  }
  v14 = sub_140317A10(a1);
  v15 = 0;
  v16 = sub_140317A80(a1);
  v17 = 0LL;
  v18 = 1LL;
  if ( v16 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v15 = v18;
      if ( HIBYTE(word_140C51864) != (_BYTE)v17 )
        goto LABEL_13;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( ((unsigned __int8)a2 & (unsigned __int8)v18) != 0 )
      a2 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *(_QWORD *)a1 = a2;
  if ( v15 )
  {
    sub_1402294F0(a1, a2);
    v17 = 0LL;
  }
  v19 = (unsigned int)v17;
  if ( v14 )
  {
    if ( (v14 & 0xC00) == 0x800 )
      v18 = v17;
  }
  else
  {
    v19 = (unsigned int)v18;
  }
  result = v18 | v19;
  if ( v18 | (unsigned int)v19 )
  {
    result = sub_1405AC9A0(v10, v18, v19);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v17 )
  {
    sub_14020D8D0(v9, v10);
    return sub_1402B0CE0(v9, v12);
  }
  return result;
}

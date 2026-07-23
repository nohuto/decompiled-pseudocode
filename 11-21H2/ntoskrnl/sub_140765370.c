/*
 * XREFs of sub_140765370 @ 0x140765370
 * Callers:
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 * Callees:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_1409426FC @ 0x1409426FC (sub_1409426FC.c)
 */

char __fastcall sub_140765370(int a1, __int64 a2, char a3, int a4, char a5)
{
  char v9; // r8
  _QWORD **v10; // rax
  int v11; // r8d
  _QWORD *i; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = 0LL;
  if ( a4 != 2 && !a5 )
  {
    LOBYTE(v10) = sub_1402DEAB0(a2);
    goto LABEL_5;
  }
  v9 = 1;
  if ( *(_DWORD *)(a2 + 300) == 784 )
    goto LABEL_11;
  if ( *(_DWORD *)(a2 + 300) == 785 )
  {
    if ( a3 )
    {
      sub_14025B96C(a2);
      sub_1402DE844(a2, 784);
    }
LABEL_11:
    v9 = 0;
  }
  LOBYTE(v10) = v9;
LABEL_5:
  if ( (_BYTE)v10 )
  {
    sub_1402DE844(a2, 785 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v11) = 1;
      sub_140765370(a1, (_DWORD)i, v11, a4, 1);
    }
    v10 = (_QWORD **)sub_14076BBF4(*(_QWORD *)(a2 + 32));
    v13 = v10;
    v14 = *v10;
    while ( v14 != v13 )
    {
      sub_1409426FC(v14, v16, &v17);
      LOBYTE(v10) = v16[0];
      v14 = (_QWORD *)*v14;
      if ( v16[0] )
        LOBYTE(v10) = sub_140765370(a1, *(_QWORD *)(*(_QWORD *)(v16[0] + 312LL) + 40LL), 0, 1, 0);
    }
  }
  return (char)v10;
}

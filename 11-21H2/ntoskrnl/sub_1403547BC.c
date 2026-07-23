/*
 * XREFs of sub_1403547BC @ 0x1403547BC
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 *     sub_1407D454C @ 0x1407D454C (sub_1407D454C.c)
 */

__int64 __fastcall sub_1403547BC(unsigned int a1, __int64 *a2, char a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v12; // rcx

  v4 = a1 + 44LL;
  if ( v4 >= 0x2C )
  {
    v6 = sub_1407D454C(v4, 1097692225LL);
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_WORD *)(v6 + 36) = 1;
      *(_WORD *)(v6 + 38) = a3 & 2;
      v8 = v6 + 16;
      *(_QWORD *)(v6 + 24) = v6 + 16;
      *(_QWORD *)(v6 + 16) = v6 + 16;
      *(_DWORD *)(v6 + 32) = 0;
      v9 = sub_1402EF324();
      if ( !v9 )
      {
        v10 = v8;
LABEL_5:
        *a2 = v10;
        return v7;
      }
      v10 = sub_1407D454C(24LL, 1282241601LL);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 20) = 1;
        *(_DWORD *)(v10 + 16) = v9;
        v12 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
          __fastfail(3u);
        *(_QWORD *)v10 = v12;
        *(_QWORD *)(v10 + 8) = v8;
        *(_QWORD *)(v12 + 8) = v10;
        *(_QWORD *)v8 = v10;
        goto LABEL_5;
      }
      sub_1406AB544(v7);
    }
  }
  return 0LL;
}

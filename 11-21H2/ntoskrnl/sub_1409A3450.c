/*
 * XREFs of sub_1409A3450 @ 0x1409A3450
 * Callers:
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1409A1D08 @ 0x1409A1D08 (sub_1409A1D08.c)
 *     sub_1409A3E48 @ 0x1409A3E48 (sub_1409A3E48.c)
 *     sub_1409A4084 @ 0x1409A4084 (sub_1409A4084.c)
 *     sub_1409A4C38 @ 0x1409A4C38 (sub_1409A4C38.c)
 *     sub_1409A50A0 @ 0x1409A50A0 (sub_1409A50A0.c)
 *     sub_1409A5540 @ 0x1409A5540 (sub_1409A5540.c)
 *     sub_1409AA334 @ 0x1409AA334 (sub_1409AA334.c)
 */

void __fastcall sub_1409A3450(unsigned int *a1, char *a2, _BYTE *a3)
{
  unsigned int *v3; // r15
  unsigned int *v4; // rbx
  char v5; // bp
  char v9; // r10
  unsigned int *v10; // r14
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  void ***v14; // rax
  bool v15; // zf
  char v16; // dl
  char v17; // al
  _QWORD *v18; // rax
  void **v19; // rcx
  unsigned int v20; // eax
  unsigned int *i; // rcx
  __int64 v22; // rdx
  char v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+18h]
  void ***v26; // [rsp+88h] [rbp+20h]

  v3 = a1 + 10;
  v24 = 0;
  v4 = (unsigned int *)*((_QWORD *)a1 + 5);
  v5 = 0;
  v23 = 0;
  *a2 = 0;
  *a3 = 0;
  if ( v4 != a1 + 10 )
  {
    v9 = 1;
    do
    {
      v10 = v4 + 9;
      v11 = v4;
      v12 = v4[9];
      if ( ((unsigned __int8)v12 & (unsigned __int8)v9) != 0 )
      {
        v13 = *a1;
        v14 = (void ***)(v4 + 2);
        v4 = (unsigned int *)*((_QWORD *)v4 + 1);
        v26 = v14;
        v25 = v11[7];
        sub_1409AA334(v11, v13, v25);
        if ( (*v10 & 0x10) != 0 )
        {
          v15 = (unsigned __int8)sub_1409A50A0(a1, 0LL, 26LL) == 0;
          v17 = v16 + 1;
          if ( !v15 )
            *a2 = v17;
        }
        else
        {
          v17 = 1;
        }
        if ( v11[8] )
          v5 = v17;
        if ( sub_1409A1D08((__int64)a1, (__int64)v11) )
          *a3 = 1;
        v18 = *(_QWORD **)v11;
        if ( *(unsigned int **)(*(_QWORD *)v11 + 8LL) != v11 || (v19 = *v26, **v26 != v11) )
          __fastfail(3u);
        *v19 = v18;
        v18[1] = v19;
        *((_QWORD *)v11 + 2) = 0LL;
        sub_1409A5540(a1);
        _bittestandreset(*((signed __int32 **)a1 + 8), v25);
        v20 = *v10;
        *((_QWORD *)v11 + 2) = 0LL;
        v11[6] = 1417180244;
        *v10 = v20 & 0xFFFFFFFC | 2;
        ObfDereferenceObject(v11);
        v9 = 1;
      }
      else if ( (v12 & 4) != 0 )
      {
        *v10 = v12 & 0xFFFFFFFB;
        sub_1409A3E48(a1, v4, &v24, &v23);
        if ( v23 )
        {
          for ( i = (unsigned int *)*((_QWORD *)a1 + 12); i != a1 + 24; i = *(unsigned int **)i )
          {
            if ( i[149] == v4[7] )
              i[150] |= 0x40u;
          }
          sub_1409A4084(a1, v4);
          v9 = 1;
          *a3 = 1;
        }
        else
        {
          v9 = 1;
        }
        if ( v24 )
        {
          v22 = *v10 >> 4;
          LOBYTE(v22) = (*v10 & 0x10) != 0;
          if ( (unsigned __int8)sub_1409A50A0(a1, v22, v4[11]) )
            *a2 = v9;
        }
      }
      v4 = *(unsigned int **)v4;
    }
    while ( v4 != v3 );
    if ( v5 )
      sub_1409A4C38(a1);
  }
}

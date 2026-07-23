/*
 * XREFs of sub_14065B994 @ 0x14065B994
 * Callers:
 *     sub_14065B900 @ 0x14065B900 (sub_14065B900.c)
 * Callees:
 *     sub_14065BB1C @ 0x14065BB1C (sub_14065BB1C.c)
 *     sub_14065C51C @ 0x14065C51C (sub_14065C51C.c)
 *     sub_14069F130 @ 0x14069F130 (sub_14069F130.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065B994(__int64 a1)
{
  unsigned int v1; // ebx
  __int16 v3; // si
  __int64 v4; // r14
  __int16 v5; // bp
  __int64 v6; // r15
  __int64 v7; // rcx
  __int16 i; // bp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // rsi
  ULONG_PTR v19; // rdx
  __int64 v20; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4) )
  {
    for ( i = 0; i <= *(__int16 *)a1; ++i )
    {
      v10 = sub_14069F1CC(a1 + 8);
      if ( *(_QWORD *)(v10 + 16) )
      {
        v11 = sub_14069F130(a1);
        sub_14065BB1C(v11);
        if ( *(_QWORD *)(v10 + 16) )
        {
          v12 = *(_QWORD *)v10;
          v13 = v10 + 24;
          if ( (*(_BYTE *)(*(_QWORD *)v10 + 140LL) & 1) != 0 )
            sub_1406BF450(v12, v13);
          else
            sub_1407C97C0(v12, v13);
        }
        *(_OWORD *)v10 = 0LL;
        *(_OWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)(v10 + 8) = -1;
        sub_1407C97FC(v10 + 24);
      }
    }
  }
  v3 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 4) = 1;
  v4 = 0LL;
  v5 = -1;
  if ( v3 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v6 = sub_14069F130(a1);
    v7 = *(_QWORD *)(v6 + 120);
    if ( v7 && (!v4 || (int)sub_14065C51C(v7, v4) < 0) )
    {
      v4 = *(_QWORD *)(v6 + 120);
      v5 = v3;
    }
    --v3;
  }
  while ( v3 >= 0 );
  if ( v4 )
  {
    for ( ; v5 >= 0; --v5 )
    {
      v14 = sub_14069F130(a1);
      v15 = *(_QWORD *)(v14 + 120);
      if ( v15 && (v15 == v4 || !(unsigned int)sub_14065C51C(v15, v4)) )
      {
        v16 = sub_14069F1CC(a1 + 8);
        v17 = *(_QWORD *)v14;
        v18 = v16;
        v19 = *(unsigned int *)(v14 + 112);
        *(_QWORD *)v16 = *(_QWORD *)v14;
        *(_DWORD *)(v16 + 8) = v19;
        if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
          v20 = sub_1406BF400(v17, v19);
        else
          v20 = sub_1407C9820(v17);
        *(_QWORD *)(v18 + 16) = v20;
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v1;
}

/*
 * XREFs of sub_1409A1190 @ 0x1409A1190
 * Callers:
 *     sub_1409A1590 @ 0x1409A1590 (sub_1409A1590.c)
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_1407F1648 @ 0x1407F1648 (sub_1407F1648.c)
 *     sub_1409A0CF0 @ 0x1409A0CF0 (sub_1409A0CF0.c)
 */

__int64 __fastcall sub_1409A1190(ULONG *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rdx
  ULONG **v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  ULONG_PTR *v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD **i; // rdi

  v1 = 0;
  if ( a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C828, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(ULONG **)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = (ULONG **)*((_QWORD *)a1 + 1), *v4 != a1) )
LABEL_17:
      __fastfail(3u);
    *v4 = (ULONG *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    sub_14036C0A0((ULONG_PTR)&stru_140C1C828);
    v5 = a1 + 10;
    while ( 1 )
    {
      v6 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
        break;
      if ( (_QWORD *)v6[1] != v5 )
        goto LABEL_17;
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_17;
      *v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      v8 = &qword_140C1C840 + 4 * *((int *)v6 + 10);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v8, 0LL);
      v9 = v6[2];
      if ( *(_QWORD **)(v9 + 8) != v6 + 2 )
        goto LABEL_17;
      v10 = (_QWORD *)v6[3];
      if ( (_QWORD *)*v10 != v6 + 2 )
        goto LABEL_17;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      sub_14036C0A0((ULONG_PTR)v8);
      sub_1407F1648((_QWORD *)v6[15]);
    }
    for ( i = (_QWORD **)(a1 + 14); *i != i; sub_1409A0CF0(*i) )
      ;
    sub_140346D64(a1, a1[6]);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}

/*
 * XREFs of sub_14076BC20 @ 0x14076BC20
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x140942640 (IoSetDependency.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14076BDD4 @ 0x14076BDD4 (sub_14076BDD4.c)
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 *     sub_140942730 @ 0x140942730 (sub_140942730.c)
 */

void sub_14076BC20()
{
  __int64 v0; // rcx
  __int64 *v1; // rbx
  __int64 *v2; // rdi
  __int64 *v3; // r11
  _QWORD *v4; // rbp
  _QWORD *v5; // r11
  _QWORD **v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  ExAcquireFastMutex(&stru_140C46160);
  LOBYTE(v0) = 1;
  sub_1407756F4(v0);
LABEL_2:
  v1 = (__int64 *)qword_140C46A80;
  while ( 1 )
  {
    if ( v1 == &qword_140C46A80 )
      goto LABEL_4;
    v2 = v1 - 9;
    v3 = v1;
    v4 = (_QWORD *)*(v1 - 3);
    v1 = (__int64 *)*v1;
    if ( !v4 )
      break;
    if ( (unsigned __int8)sub_14076BDD4(v4) )
    {
      v14 = 0LL;
      v6 = (_QWORD **)sub_140775110(v4);
      v7 = *v6;
      if ( *v6 == v6 )
      {
LABEL_8:
        v8 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) != v5 )
          goto LABEL_13;
        v9 = (_QWORD *)v5[1];
        if ( (_QWORD *)*v9 != v5 )
          goto LABEL_13;
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v5[1] = v5;
        *v5 = v5;
        v10 = (*((_DWORD *)v2 + 22))-- == 1;
        if ( v10 )
          sub_14085CA14(v2);
        ExReleaseResourceLite(&stru_140C46AC0);
        sub_140775698(0LL);
        LOBYTE(v11) = 1;
        sub_14080DBCC(*(_QWORD *)(v4[39] + 40LL), v11);
        ObfDereferenceObjectWithTag(v4, 0x44706E50u);
        LOBYTE(v12) = 1;
        sub_1407756F4(v12);
        goto LABEL_2;
      }
      while ( 1 )
      {
        sub_140942730(v7, &v14, 0LL);
        if ( !(unsigned __int8)sub_14076BDD4(v14) )
          break;
        v7 = (_QWORD *)*v7;
        if ( v7 == v6 )
          goto LABEL_8;
      }
    }
  }
  if ( (__int64 *)v1[1] != v3 || (v13 = (__int64 **)v3[1], *v13 != v3) )
LABEL_13:
    __fastfail(3u);
  *v13 = v1;
  v1[1] = (__int64)v13;
  v3[1] = (__int64)v3;
  *v3 = (__int64)v3;
  v10 = (*((_DWORD *)v2 + 22))-- == 1;
  if ( v10 )
    sub_14085CA14(v2);
LABEL_4:
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0LL);
  KeReleaseGuardedMutex(&stru_140C46160);
}

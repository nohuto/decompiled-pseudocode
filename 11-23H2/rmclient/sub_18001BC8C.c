/*
 * XREFs of sub_18001BC8C @ 0x18001BC8C
 * Callers:
 *     sub_18000238C @ 0x18000238C (sub_18000238C.c)
 *     sub_18001C150 @ 0x18001C150 (sub_18001C150.c)
 *     sub_18001C170 @ 0x18001C170 (sub_18001C170.c)
 * Callees:
 *     sub_180003928 @ 0x180003928 (sub_180003928.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     sub_1800191D0 @ 0x1800191D0 (sub_1800191D0.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 *     sub_18001ADFC @ 0x18001ADFC (sub_18001ADFC.c)
 */

__int64 __fastcall sub_18001BC8C(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // r14
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rbx
  RTL_SRWLOCK v7; // rax
  _QWORD *v8; // rcx
  bool v9; // r13
  __int64 v10; // rax
  int v11; // r12d
  __int64 *v13; // r12
  __int64 v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // [rsp+20h] [rbp-10h]
  volatile signed __int32 *v17; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+80h] [rbp+50h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0;
  v5 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v7.Ptr = a1->Ptr;
  v18 = v2;
  if ( !v7.Ptr )
  {
    sub_1800191D0(&v18);
LABEL_11:
    sub_18000A570(&v17);
    return v4;
  }
  v8 = (_QWORD *)*((_QWORD *)v7.Ptr + 2);
  v9 = 0;
  v10 = *((_QWORD *)v7.Ptr + 3) - (_QWORD)v8;
  v18 = 0LL;
  v16 = (v10 >> 3) - 1;
  v19 = v16;
  if ( v10 >> 3 == 1 )
  {
    v9 = *v8 == a2;
LABEL_21:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      sub_18001ADFC(&v17, (char *)a1);
      sub_18001ADFC((volatile signed __int32 **)a1, (char *)&v18);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v5 = v17;
    }
    goto LABEL_25;
  }
  v11 = sub_18001AB4C((volatile signed __int32 **)&v18, (unsigned __int64 *)&v19);
  if ( v11 < 0 )
  {
    if ( v18 )
      sub_180004C40((volatile signed __int32 *)v18);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    v4 = v11;
    goto LABEL_11;
  }
  v13 = (__int64 *)*((_QWORD *)a1->Ptr + 2);
  if ( v13 != *((__int64 **)a1->Ptr + 3) )
  {
    v14 = v16;
    v15 = (__int64 *)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v13 )
      {
        if ( !v14 )
          break;
        sub_180003928(v18, *v13, *v15++);
        --v14;
      }
      else
      {
        v9 = 1;
      }
      ++v13;
    }
    while ( v13 != *((__int64 **)a1->Ptr + 3) );
    v5 = v17;
    v2 = a1 + 2;
    goto LABEL_21;
  }
LABEL_25:
  if ( v18 )
    sub_180004C40((volatile signed __int32 *)v18);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v5 )
    sub_180004C40(v5);
  return 0LL;
}

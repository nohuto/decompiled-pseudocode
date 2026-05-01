/*
 * XREFs of sub_18001BE48 @ 0x18001BE48
 * Callers:
 *     sub_18000246C @ 0x18000246C (sub_18000246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 * Callees:
 *     sub_180003928 @ 0x180003928 (sub_180003928.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     sub_1800191D0 @ 0x1800191D0 (sub_1800191D0.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 *     sub_18001ADFC @ 0x18001ADFC (sub_18001ADFC.c)
 */

__int64 __fastcall sub_18001BE48(RTL_SRWLOCK *a1, __int64 a2)
{
  unsigned int v2; // r14d
  volatile signed __int32 *v4; // rdi
  _QWORD *v5; // rcx
  RTL_SRWLOCK *v6; // rbx
  bool v7; // r12
  __int64 v8; // r13
  __int64 v9; // r13
  int v10; // ebx
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *v14; // rdi
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+40h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  v15 = a1;
  v2 = 0;
  v16 = 0LL;
  v4 = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  v15 = &SRWLock;
  if ( !qword_180032C48 )
  {
    sub_1800191D0(&v15);
LABEL_9:
    sub_18000A570(&v16);
    return v2;
  }
  v5 = *(_QWORD **)(qword_180032C48 + 16);
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(qword_180032C48 + 24) - (_QWORD)v5;
  v15 = 0LL;
  v9 = (v8 >> 3) - 1;
  v17 = v9;
  if ( !v9 )
  {
    v7 = *v5 == a2;
LABEL_19:
    if ( v7 )
    {
      AcquireSRWLockExclusive(&stru_180032C50);
      sub_18001ADFC(&v16, (char *)&qword_180032C48);
      sub_18001ADFC((volatile signed __int32 **)&qword_180032C48, (char *)&v15);
      ReleaseSRWLockExclusive(&stru_180032C50);
      v4 = v16;
      v6 = v15;
    }
    goto LABEL_21;
  }
  v10 = sub_18001AB4C((volatile signed __int32 **)&v15, (unsigned __int64 *)&v17);
  if ( v10 < 0 )
  {
    if ( v15 )
      sub_180004C40((volatile signed __int32 *)v15);
    ReleaseSRWLockExclusive(&SRWLock);
    v2 = v10;
    goto LABEL_9;
  }
  v12 = qword_180032C48;
  v6 = v15;
  v13 = *(__int64 **)(qword_180032C48 + 16);
  if ( v13 != *(__int64 **)(qword_180032C48 + 24) )
  {
    v14 = *(__int64 **)(qword_180032C48 + 32);
    do
    {
      if ( v7 || a2 != *v13 )
      {
        if ( !v9 )
          break;
        sub_180003928(v6, *v13, *v14);
        v12 = qword_180032C48;
        ++v14;
        --v9;
      }
      else
      {
        v7 = 1;
      }
      ++v13;
    }
    while ( v13 != *(__int64 **)(v12 + 24) );
    v4 = v16;
    goto LABEL_19;
  }
LABEL_21:
  if ( v6 )
    sub_180004C40((volatile signed __int32 *)v6);
  ReleaseSRWLockExclusive(&SRWLock);
  if ( v4 )
    sub_180004C40(v4);
  return 0LL;
}

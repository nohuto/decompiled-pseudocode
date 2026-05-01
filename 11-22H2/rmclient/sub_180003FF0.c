/*
 * XREFs of sub_180003FF0 @ 0x180003FF0
 * Callers:
 *     sub_180003CE8 @ 0x180003CE8 (sub_180003CE8.c)
 * Callees:
 *     sub_180003928 @ 0x180003928 (sub_180003928.c)
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003FF0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rax
  int v8; // ebx
  _QWORD *v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 *v14; // r14
  __int64 *i; // r15
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  v17 = 0LL;
  if ( qword_180032C48 )
    v7 = ((__int64)(*(_QWORD *)(qword_180032C48 + 24) - *(_QWORD *)(qword_180032C48 + 16)) >> 3) + 1;
  else
    v7 = 1LL;
  v18 = v7;
  v8 = sub_180004B70(&v17, &v18);
  if ( v8 < 0 )
  {
    if ( v17 )
      sub_180004C40(v17);
    ReleaseSRWLockExclusive(&SRWLock);
    sub_18000A570(&v16);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v17;
    if ( qword_180032C48 )
    {
      v14 = *(__int64 **)(qword_180032C48 + 16);
      for ( i = *(__int64 **)(qword_180032C48 + 32); v14 != *(__int64 **)(qword_180032C48 + 24); ++v14 )
        sub_180003928(v9, *v14, *i++);
    }
    *a4 = a2;
    v10 = (__int64 *)v9[3];
    if ( *v10 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = *v10;
      *v10 = a2;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    *(_QWORD *)(v9[4] + 8 * ((__int64)(v9[3] - v9[2]) >> 3)) = a3;
    v9[3] += 8LL;
    AcquireSRWLockExclusive(&stru_180032C50);
    v12 = qword_180032C48;
    qword_180032C48 = (__int64)v9;
    ReleaseSRWLockExclusive(&stru_180032C50);
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v12 )
      sub_180004C40(v12);
    return 0LL;
  }
}

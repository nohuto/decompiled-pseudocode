/*
 * XREFs of sub_1800049B0 @ 0x1800049B0
 * Callers:
 *     sub_18000418C @ 0x18000418C (sub_18000418C.c)
 * Callees:
 *     sub_180003928 @ 0x180003928 (sub_180003928.c)
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800049B0(RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *Ptr; // rcx
  __int64 v10; // rax
  int v11; // edi
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 *v14; // r14
  __int64 v15; // rcx
  PVOID v16; // rbp
  PVOID v17; // rcx
  __int64 *v19; // rbp
  __int64 *v20; // r12
  __int64 v21[9]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  v21[0] = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v22 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v23 = v10;
  v11 = sub_180004B70(&v22, &v23);
  if ( v11 < 0 )
  {
    if ( v22 )
      sub_180004C40(v22);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    sub_18000A570(v21);
    return (unsigned int)v11;
  }
  else
  {
    v12 = a1->Ptr;
    v13 = v22;
    if ( a1->Ptr )
    {
      v19 = (__int64 *)v12[2];
      v20 = (__int64 *)v12[4];
      if ( v19 != (__int64 *)v12[3] )
      {
        do
          sub_180003928(v13, *v19++, *v20++);
        while ( v19 != *((__int64 **)a1->Ptr + 3) );
      }
    }
    *a4 = a2;
    v14 = (__int64 *)v13[3];
    if ( *v14 != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = *v14;
      *v14 = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    *(_QWORD *)(v13[4] + 8 * ((__int64)(v13[3] - v13[2]) >> 3)) = a3;
    v13[3] += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    v16 = 0LL;
    if ( &v22 != (_QWORD **)a1 )
    {
      v16 = a1->Ptr;
      a1->Ptr = 0LL;
    }
    v17 = a1->Ptr;
    a1->Ptr = v13;
    if ( v17 )
      sub_180004C40(v17);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v16 )
      sub_180004C40(v16);
    return 0LL;
  }
}

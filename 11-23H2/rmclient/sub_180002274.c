/*
 * XREFs of sub_180002274 @ 0x180002274
 * Callers:
 *     sub_180002244 @ 0x180002244 (sub_180002244.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall sub_180002274(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // r14
  RTL_SRWLOCK *v5; // rdi
  void **v6; // rax
  void *v7; // rbp
  PVOID v8; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 8;
  for ( i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1); v2 < i; v2 += 8LL )
  {
    if ( *(_QWORD *)v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
      if ( **(_QWORD **)(*(_QWORD *)v2 + 24LL) )
      {
        v5 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
        AcquireSRWLockExclusive(v5);
        v6 = *(void ***)(*(_QWORD *)v2 + 24LL);
        v7 = *v6;
        if ( *v6 )
        {
          *v6 = 0LL;
          if ( v5 )
            ReleaseSRWLockExclusive(v5);
          v8 = DecodePointer(v7);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
        }
        else if ( v5 )
        {
          ReleaseSRWLockExclusive(v5);
        }
      }
    }
  }
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) == 0;
}

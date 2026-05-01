/*
 * XREFs of sub_180009640 @ 0x180009640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  void (__fastcall *v8)(_QWORD, _QWORD); // rbp

  if ( a5 )
  {
    RtlAcquireSRWLockExclusive(a4 + 96);
    *(_DWORD *)(a4 + 104) = GetCurrentThreadId();
    v6 = *(_QWORD *)(a4 + 80);
    v7 = a5[1];
    v8 = *(void (__fastcall **)(_QWORD, _QWORD))(a4 + 32);
    *(_OWORD *)(a4 + 72) = *(_OWORD *)a5;
    *(_QWORD *)(a4 + 88) = a5[2];
    *(_DWORD *)(a4 + 104) = 0;
    RtlReleaseSRWLockExclusive(a4 + 96);
    if ( v6 != v7 )
    {
      if ( v8 )
        v8(*a5, a5[1]);
    }
  }
  return 0LL;
}

/*
 * XREFs of sub_180009780 @ 0x180009780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64); // rsi

  if ( a5 )
  {
    v6 = a4 + 96;
    RtlAcquireSRWLockExclusive(a4 + 96);
    *(_DWORD *)(v6 + 8) = GetCurrentThreadId();
    v7 = *(void (__fastcall **)(__int64))(a4 + 24);
    *(_DWORD *)(v6 + 8) = 0;
    RtlReleaseSRWLockExclusive(v6);
    if ( v7 )
      v7(a5);
  }
  return 0LL;
}

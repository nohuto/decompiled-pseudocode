/*
 * XREFs of ?Shutdown@CEndpointCharacteristicsCache@@UEAAXXZ @ 0x18014FBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristicsCache::Shutdown(CEndpointCharacteristicsCache *this)
{
  RTL_SRWLOCK *v2; // rdi
  struct _TP_WORK *v3; // rcx
  __int64 v4; // rcx

  v2 = (RTL_SRWLOCK *)((char *)this + 24);
  AcquireSRWLockExclusive((PSRWLOCK)this + 3);
  *((_BYTE *)this + 104) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = (struct _TP_WORK *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    WaitForThreadpoolWorkCallbacks(v3, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  v4 = g_policyConfigInternal;
  g_policyConfigInternal = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}

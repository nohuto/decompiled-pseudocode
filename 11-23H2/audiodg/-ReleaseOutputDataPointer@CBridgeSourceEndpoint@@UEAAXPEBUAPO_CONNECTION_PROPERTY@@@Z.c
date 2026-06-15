/*
 * XREFs of ?ReleaseOutputDataPointer@CBridgeSourceEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400395F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBridgeSourceEndpoint::ReleaseOutputDataPointer(
        RTL_SRWLOCK *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *Ptr; // rbp
  _QWORD *i; // rsi

  v2 = this + 13;
  AcquireSRWLockShared(this + 13);
  Ptr = this[15].Ptr;
  for ( i = this[14].Ptr; i != Ptr; ++i )
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK *, const struct APO_CONNECTION_PROPERTY *))(*(_QWORD *)*i + 24LL))(
      *i,
      this + 8,
      a2);
  if ( v2 )
    ReleaseSRWLockShared(v2);
}

/*
 * XREFs of ?SetCompositionCommittedListener@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionNotifyCommittedPartner@345@@Z @ 0x180129750
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::SetCompositionCommittedListener(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        struct Windows::UI::Composition::ICompositionNotifyCommittedPartner *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v4; // edi
  HANDLE LockSemaphore; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (v2->SpinCount & 2) != 0 )
  {
    v4 = 0;
    if ( v2[20].LockSemaphore != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionNotifyCommittedPartner *))(*(_QWORD *)a2 + 8LL))(a2);
      LockSemaphore = v2[20].LockSemaphore;
      v2[20].LockSemaphore = a2;
      if ( LockSemaphore )
        (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}

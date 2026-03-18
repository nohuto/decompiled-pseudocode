/*
 * XREFs of ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C0005C40
 * Callers:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C00059B8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionTokenObject::MarkCompleted(CompositionTokenObject *this)
{
  unsigned int v2; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 72, 0LL);
  v2 = 0;
  if ( *((_DWORD *)this + 16) == 1 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 24LL))((char *)this + 40);
  else
    v2 = -1073741823;
  CPushLock::ReleaseLock((CompositionTokenObject *)((char *)this + 72));
  return v2;
}

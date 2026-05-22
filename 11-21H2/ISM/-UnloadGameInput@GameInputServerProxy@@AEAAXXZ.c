/*
 * XREFs of ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x180034164
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18003370C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x1800FC350 (-OnDisposePublic@GameInputServerProxy@@EEAAXXZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x1800341D4 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x1800FC1B0 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 */

void __fastcall GameInputServerProxy::UnloadGameInput(RTL_SRWLOCK *this)
{
  unsigned int v2; // edx
  PVOID Ptr; // rcx
  PVOID v4; // rcx
  GameInputModule *v5; // rcx

  AcquireSRWLockExclusive(this + 6);
  Ptr = this[8].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    this[8].Ptr = 0LL;
  }
  v4 = this[7].Ptr;
  if ( v4 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
    this[7].Ptr = 0LL;
  }
  v5 = (GameInputModule *)this[10].Ptr;
  if ( v5 )
  {
    GameInputModule::`scalar deleting destructor'(v5, v2);
    this[10].Ptr = 0LL;
  }
  GameInputWatcher::StopWatching((GameInputWatcher *)&this[11]);
  ReleaseSRWLockExclusive(this + 6);
}

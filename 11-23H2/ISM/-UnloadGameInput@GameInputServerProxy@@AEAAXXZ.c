/*
 * XREFs of ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004B9E4
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004AE7C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x180118110 (-OnDisposePublic@GameInputServerProxy@@EEAAXXZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x18004BA64 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x180117FA0 (--_GGameInputModule@@QEAAPEAXI@Z.c)
 */

void __fastcall GameInputServerProxy::UnloadGameInput(RTL_SRWLOCK *this)
{
  unsigned int v2; // edx
  PVOID Ptr; // rcx
  GameInputModule *v4; // rcx

  AcquireSRWLockExclusive(this + 5);
  Ptr = this[6].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    this[6].Ptr = 0LL;
  }
  v4 = (GameInputModule *)this[8].Ptr;
  if ( v4 )
  {
    GameInputModule::`scalar deleting destructor'(v4, v2);
    this[8].Ptr = 0LL;
  }
  GameInputWatcher::StopWatching((GameInputWatcher *)&this[9]);
  ReleaseSRWLockExclusive(this + 5);
}

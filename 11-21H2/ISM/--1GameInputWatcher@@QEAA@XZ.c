/*
 * XREFs of ??1GameInputWatcher@@QEAA@XZ @ 0x1800FC0D8
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x1800FC01C (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x1800341D4 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall GameInputWatcher::~GameInputWatcher(GameInputWatcher *this)
{
  void *v2; // rcx

  GameInputWatcher::StopWatching(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    operator delete[](v2);
}

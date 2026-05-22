/*
 * XREFs of ??1GameInputWatcher@@QEAA@XZ @ 0x180125F94
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180125EE4 (--1GameInputServerProxy@@EEAA@XZ.c)
 * Callees:
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x18004C400 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
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

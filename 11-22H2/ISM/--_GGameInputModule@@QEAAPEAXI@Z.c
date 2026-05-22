/*
 * XREFs of ??_GGameInputModule@@QEAAPEAXI@Z @ 0x180126028
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004B808 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004C380 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1GameInputModule@@QEAA@XZ @ 0x180125E80 (--1GameInputModule@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall GameInputModule::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  GameInputModule::~GameInputModule(this);
  operator delete(this);
  return this;
}

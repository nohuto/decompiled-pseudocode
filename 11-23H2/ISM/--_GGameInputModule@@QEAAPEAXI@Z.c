/*
 * XREFs of ??_GGameInputModule@@QEAAPEAXI@Z @ 0x180117FA0
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004AE7C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x18004B9E4 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1GameInputModule@@QEAA@XZ @ 0x180117DF8 (--1GameInputModule@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall GameInputModule::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  GameInputModule::~GameInputModule(this);
  operator delete(this);
  return this;
}

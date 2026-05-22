/*
 * XREFs of ??_GGameInputModule@@QEAAPEAXI@Z @ 0x1800FC1B0
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18003370C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x180034164 (-UnloadGameInput@GameInputServerProxy@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1GameInputModule@@QEAA@XZ @ 0x1800FBFB8 (--1GameInputModule@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall GameInputModule::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  GameInputModule::~GameInputModule(this);
  operator delete(this);
  return this;
}

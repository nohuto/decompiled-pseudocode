/*
 * XREFs of ??1CriticalSectionLock@@QEAA@XZ @ 0x180125E50
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CriticalSectionLock::~CriticalSectionLock(LPCRITICAL_SECTION *this)
{
  LeaveCriticalSection(*this);
}

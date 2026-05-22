/*
 * XREFs of ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x1800B424C
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x18006F0AD (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800BCDAC (--1MPCCursorManager@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<MPCCursorManager>::~unique_ptr<MPCCursorManager>(MPCCursorManager **a1)
{
  MPCCursorManager *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    MPCCursorManager::~MPCCursorManager(*a1);
    operator delete(v1);
  }
}

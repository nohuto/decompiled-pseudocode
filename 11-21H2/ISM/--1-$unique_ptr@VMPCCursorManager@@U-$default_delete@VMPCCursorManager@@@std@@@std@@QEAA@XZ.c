/*
 * XREFs of ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x18009CCB0
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x180055655 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800A4F5C (--1MPCCursorManager@@QEAA@XZ.c)
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

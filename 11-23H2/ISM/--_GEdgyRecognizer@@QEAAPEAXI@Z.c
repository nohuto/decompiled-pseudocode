/*
 * XREFs of ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x1801675DC
 * Callers:
 *     ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801662B0 (--$-4U-$default_delete@VEdgyRecognizer@@@std@@$0A@@-$unique_ptr@VEdgyRecognizer@@U-$default_dele.c)
 *     ??1?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ @ 0x180167108 (--1-$unique_ptr@VEdgyRecognizer@@U-$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x1801671C8 (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x1801672A4 (--1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180169C7C (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

EdgyRecognizer *__fastcall EdgyRecognizer::`scalar deleting destructor'(EdgyRecognizer *this)
{
  _QWORD *v1; // rdi

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    if ( v1[2] )
      DestroyInteractionContext();
    operator delete(v1);
  }
  operator delete(this);
  return this;
}

/*
 * XREFs of ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x18017585C
 * Callers:
 *     ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180174530 (--$-4U-$default_delete@VEdgyRecognizer@@@std@@$0A@@-$unique_ptr@VEdgyRecognizer@@U-$default_dele.c)
 *     ??1?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ @ 0x180175388 (--1-$unique_ptr@VEdgyRecognizer@@U-$default_delete@VEdgyRecognizer@@@std@@@std@@QEAA@XZ.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x180175448 (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x180175524 (--1EdgyNotificationMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180177EFC (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
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

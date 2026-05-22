/*
 * XREFs of ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180174530
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180177EFC (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x18017585C (--_GEdgyRecognizer@@QEAAPEAXI@Z.c)
 */

EdgyRecognizer **__fastcall std::unique_ptr<EdgyRecognizer>::operator=<std::default_delete<EdgyRecognizer>,0>(
        EdgyRecognizer **a1,
        EdgyRecognizer **a2)
{
  EdgyRecognizer *v3; // rax
  EdgyRecognizer *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      EdgyRecognizer::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}

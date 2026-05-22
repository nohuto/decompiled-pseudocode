/*
 * XREFs of ??$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA?AV?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@0@$$QEAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180166B4C
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180169C7C (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x18016A210 (--0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<EdgyRecognizer,BamoEdgyGestureRecognitionConfigurationProxy *,0>(
        _QWORD *a1,
        struct BamoEdgyGestureRecognitionConfigurationProxy **a2)
{
  EdgyRecognizer *v5; // [rsp+40h] [rbp+8h]

  v5 = (EdgyRecognizer *)operator new(0x50uLL);
  *a1 = EdgyRecognizer::EdgyRecognizer(v5, *a2);
  return a1;
}

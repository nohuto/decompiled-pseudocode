/*
 * XREFs of ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x18016A210
 * Callers:
 *     ??$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA?AV?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@0@$$QEAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180166B4C (--$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA-A.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18004AB70 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015A51C (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18015BF9C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 */

// Hidden C++ exception states: #wind=1
EdgyRecognizer *__fastcall EdgyRecognizer::EdgyRecognizer(
        EdgyRecognizer *this,
        struct BamoEdgyGestureRecognitionConfigurationProxy *a2)
{
  _QWORD *v4; // rax
  void *v5; // rbx
  char v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  QpcTimeConverter::QpcTimeConverter((EdgyRecognizer *)((char *)this + 64));
  v7 = 1;
  v4 = std::make_unique<DragGestureTracker,bool,0>(&v8, (bool *)&v7);
  std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>((_QWORD **)this, v4);
  v5 = v8;
  if ( v8 )
  {
    if ( *((_QWORD *)v8 + 2) )
      DestroyInteractionContext();
    operator delete(v5);
  }
  **(_DWORD **)this = 2;
  *((_DWORD *)this + 2) = 2;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
  {
    *((_QWORD *)this + 3) = *(_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8);
    *((float *)this + 8) = (*(float (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8);
    *((_DWORD *)this + 9) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
    *((_QWORD *)this + 5) = (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  }
  *((_QWORD *)this + 6) = 0LL;
  return this;
}

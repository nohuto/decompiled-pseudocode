/*
 * XREFs of ??$make_shared@VCustomCursorApplication2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x180100D5C
 * Callers:
 *     ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x180101370 (-AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCu.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VCustomCursorApplication2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@std@@YAXAEAVCustomCursorApplication2@@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x180100AE8 (--$_Construct_in_place@VCustomCursorApplication2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEA.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CustomCursorApplication2,std::shared_ptr<SystemCursorService2>,unsigned int &,BamoCustomCursorControllerClient2Proxy * &>(
        _QWORD *a1,
        __int64 *a2,
        int *a3,
        void (__fastcall ****a4)(_QWORD))
{
  _DWORD *v9; // [rsp+50h] [rbp+8h]

  v9 = operator new(0x70uLL);
  *(_OWORD *)v9 = 0LL;
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj2<CustomCursorApplication2>::`vftable';
  std::_Construct_in_place<CustomCursorApplication2,std::shared_ptr<SystemCursorService2>,unsigned int &,BamoCustomCursorControllerClient2Proxy * &>(
    (__int64)(v9 + 4),
    a2,
    a3,
    a4);
  *a1 = v9 + 4;
  a1[1] = v9;
  return a1;
}

/*
 * XREFs of ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x1801039B8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??$?0$$CBU_GUID@@$$CBU0@@?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@QEAA@$$QEBU_GUID@@0@Z @ 0x180103374 (--$-0$$CBU_GUID@@$$CBU0@@-$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@QEAA@$$QEBU_GUID@@0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CXvmPowerReferenceManager,_GUID const,_GUID const>(
        _QWORD *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  LPVOID v6; // rax
  __int64 v7; // rcx

  v6 = operator new(0xA0uLL);
  v7 = 0LL;
  if ( v6 )
    v7 = std::_Ref_count_obj2<CXvmPowerReferenceManager>::_Ref_count_obj2<CXvmPowerReferenceManager>(
           (__int64)v6,
           a2,
           a3);
  *a1 = v7 + 16;
  a1[1] = v7;
  return a1;
}

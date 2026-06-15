/*
 * XREFs of ??$?0$$CBU_GUID@@$$CBU0@@?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@QEAA@$$QEBU_GUID@@0@Z @ 0x180119214
 * Callers:
 *     ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18011976C (--$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA-AV-$shared_ptr@VCXvmPower.c)
 * Callees:
 *     ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x1801197F8 (--0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<CXvmPowerReferenceManager>::_Ref_count_obj2<CXvmPowerReferenceManager>(
        __int64 a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  struct _GUID v5; // [rsp+20h] [rbp-28h] BYREF
  struct _GUID v6; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<CXvmPowerReferenceManager>::`vftable';
  v5 = *a3;
  v6 = *a2;
  CXvmPowerReferenceManager::CXvmPowerReferenceManager((PVOID)(a1 + 16), &v6, &v5);
  return a1;
}

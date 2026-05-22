/*
 * XREFs of ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180038308
 * Callers:
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x180041B4C (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18003ABAC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
MPCConstantManager *__fastcall MPCConstantManager::MPCConstantManager(
        MPCConstantManager *this,
        struct MPCManagerConnection *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  *(_QWORD *)this = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCConstantManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::`vftable';
  *(_QWORD *)this = &MPCConstantManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCConstantManagerClientPrincipal::`vftable'{for `IMPCConstantManagerClientPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v3 = operator new(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 7) = v3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v4 = operator new(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 9) = v4;
  return this;
}

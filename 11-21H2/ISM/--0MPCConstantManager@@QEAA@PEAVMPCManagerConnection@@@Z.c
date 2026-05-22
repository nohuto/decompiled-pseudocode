/*
 * XREFs of ??0MPCConstantManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x1800469E8
 * Callers:
 *     std::call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___ @ 0x18002C2BC (std--call_once__lambda_c8397eccb247ca477275d95d0a9bda1a___.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
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
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 7) = v3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 9) = v4;
  return this;
}

/*
 * XREFs of ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003C88C
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180032374 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180028D90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037EEC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x180052D70 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrinc.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
MPCManager *__fastcall MPCManager::MPCManager(MPCManager *this, struct MPCManagerConnection *a2)
{
  BamoMPCManagerPrincipal *v4; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rax
  _QWORD *v6; // rax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &BamoMPCManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (MPCManager *)((char *)this + 8);
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCManagerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &MPCManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v4 = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
  {
    v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(struct MPCManagerConnection *))(*(_QWORD *)a2 + 56LL))(a2);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v5);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v6 = operator new(0x30uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *((_QWORD *)this + 9) = v6;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
  BamoMPCManagerPrincipal::SetMPCConstantManagerClient(v4, MPCConstantManager::s_instance);
  return this;
}

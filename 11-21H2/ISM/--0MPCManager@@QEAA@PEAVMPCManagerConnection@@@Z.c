/*
 * XREFs of ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18002BC20
 * Callers:
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x18002B984 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180019910 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18009BD8C (-UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 */

// Hidden C++ exception states: #wind=9
MPCManager *__fastcall MPCManager::MPCManager(MPCManager *this, struct MPCManagerConnection *a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rax
  _QWORD *v5; // rax
  const char *v6; // r9
  MPCConstantManager *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  __int64 i; // rbx
  int v13; // edi
  Microsoft::BamoImpl::BamoImplObject *v14; // rcx
  int updated; // eax
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v19; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &BamoMPCManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((MPCManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoMPCManagerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &MPCManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
  {
    v4 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(struct MPCManagerConnection *))(*(_QWORD *)a2 + 48LL))(a2);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v4);
  }
  v19 = (MPCManager *)((char *)this + 72);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 9) = v5;
  v7 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v6);
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v19,
    *((struct Microsoft::BamoImpl::ConnectionIndirector **)this + 4));
  v8 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v7;
  (**(void (__fastcall ***)(MPCConstantManager *))v7)(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  for ( i = *((_QWORD *)this + 6); ; i = *(_QWORD *)(i + 48) )
  {
    if ( !i )
    {
      v13 = 0;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(i + 32) )
    {
      updated = BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  (MPCManager *)((char *)this + 16));
      v13 = updated;
      if ( updated < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
    (const char *)(unsigned int)updated,
    v17);
LABEL_9:
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2887,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MP"
                    "CManagerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v13,
      v17);
  v14 = v19;
  if ( v19 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v19 + 4));
    v14 = v19;
  }
  if ( v14 )
    Microsoft::BamoImpl::BamoImplObject::Release(v14, v9, v10, v11);
  return this;
}

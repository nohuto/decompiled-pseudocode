/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000B420 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050628 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000DA70 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800297E8 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z @ 0x180029AB8 (-RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E2D0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800500A4 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  unsigned int v10; // [rsp+20h] [rbp-58h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]
  char v13; // [rsp+80h] [rbp+8h] BYREF
  char v14; // [rsp+90h] [rbp+18h] BYREF

  LODWORD(v11) = -1;
  v3 = *((_QWORD *)this + 164);
  *((_QWORD *)&v11 + 1) = 0LL;
  v4 = (_QWORD *)(v3 + 64);
  LODWORD(v12) = 101;
  WORD2(v12) = 0;
  v6 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_OWORD *)v4 = 0LL;
  v8 = *((_QWORD *)this + 8);
  v9 = *(_OWORD *)((char *)this + 1464);
  v12 = *((_QWORD *)this + 185);
  v10 = *((_DWORD *)this + 2);
  v11 = v9;
  ExecutionModel::BaseResourceSet::RecursiveVisit(v8, 1, 1u, (int *)&v11, v10, 1, &v14, &v13, 0LL, (__int64)this);
  *((_DWORD *)this + 320) = 2;
  RmpActivityHostApplyResourceSet(this);
  RmpActivityHostResourceSetsChanged(*((struct _RM_ACTIVITY_HOST **)this + 165));
  ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
    *((ExecutionModel::ResourceManager **)this + 3),
    *((struct _RM_ACTIVITY_HOST **)this + 165));
  if ( (a2 & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 214) + 32LL))(
      *((_QWORD *)this + 214),
      *((_QWORD *)this + 215));
    *((_DWORD *)this + 333) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}

/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18008E3CC
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180035090 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E730 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  char v14; // [rsp+80h] [rbp+8h] BYREF
  char v15; // [rsp+90h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 164) + 80LL;
  v5 = *(_QWORD *)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *(_QWORD **)(*((_QWORD *)this + 164) + 88LL), *v6 != v3) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_OWORD *)v3 = 0LL;
  v7 = *((_QWORD *)this + 8);
  v8 = *((_QWORD *)this + 185);
  v11 = *((_DWORD *)this + 2);
  v12 = *(_OWORD *)((char *)this + 1464);
  v13 = v8;
  ExecutionModel::BaseResourceSet::RecursiveVisit(v7, 1, 1u, (int *)&v12, v11, 1, &v15, &v14, 0LL, (__int64)this);
  v9 = *((_QWORD *)this + 165);
  *((_DWORD *)this + 320) = 2;
  if ( (*(_BYTE *)(v9 + 852) & 1) != 0 )
    ExecutionModel::ResourceManager::ApplyResourceSet_Modern(*((ExecutionModel::ResourceManager **)this + 3), this);
  if ( (a2 & 1) != 0 )
  {
    v10 = *((_QWORD *)this + 214);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *((_QWORD *)this + 215));
    *((_DWORD *)this + 333) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}

/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180020BE0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180020840 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180041280 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180041FFC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18008FDD0 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180084504 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rsi
  ExecutionModel::BaseResourceSet **i; // rbx
  ExecutionModel::BaseResourceSet *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  ExecutionModel::BaseResourceSet *v13; // rax
  ExecutionModel::BaseResourceSet *v14; // rcx

  v1 = *((_DWORD *)this + 320);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = 1LL;
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)((char *)this + v5 + 80);
        if ( v6 )
        {
          if ( (v4 & *((_QWORD *)this + 159)) == 0 )
          {
            if ( v3 == 2 )
              ExecutionModel::ResourceManager::ReplenishIoCounterPool(
                *((ExecutionModel::ResourceManager **)this + 3),
                *(_QWORD *)((char *)this + v5 + 80));
            else
              *(_QWORD *)(*((_QWORD *)this + 8) + v5 + 80) += v6;
          }
          *(_QWORD *)((char *)this + v5 + 80) = 0LL;
        }
        ++v3;
        v4 = __ROL8__(v4, 1);
        v5 += 24LL;
      }
      while ( v3 < 50 );
    }
    v7 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 320) = 0;
    v8 = v7 + 40;
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    for ( i = *(ExecutionModel::BaseResourceSet ***)v8;
          i != (ExecutionModel::BaseResourceSet **)v8;
          i = (ExecutionModel::BaseResourceSet **)v10 )
    {
      v10 = *i;
      if ( i[2] == this )
      {
        v13 = i[1];
        *(_QWORD *)v13 = v10;
        *((_QWORD *)v10 + 1) = v13;
        v14 = i[2];
        if ( v14 )
          (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v14 + 16LL))(v14);
        operator delete(i);
        --*(_QWORD *)(v8 + 16);
      }
    }
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 16LL))(this);
    v11 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v12 = *(_DWORD *)(v11 + 160);
      if ( (v12 & 3) == 0 )
      {
        *(_DWORD *)(v11 + 160) = v12 | 1;
        TpPostWork(*(_QWORD *)(v11 + 144));
      }
    }
    else if ( (*(_BYTE *)(v11 + 160) & 2) == 0 )
    {
      TpPostWork(*(_QWORD *)(v11 + 152));
    }
  }
}

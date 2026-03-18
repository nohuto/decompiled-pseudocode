/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C009C460
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0005950 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002C674 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0004C40 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0005468 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005500 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00055A8 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00055CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0005620 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0087C8C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009DDA0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C009E404 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00F0AA0 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v7; // rdi
  DXGGLOBAL *v8; // rax
  __int64 v9; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  __int64 v11; // rax
  void *v12; // rdi
  CVirtualAddressAllocator *v13; // rcx
  void *v14; // rcx
  volatile signed __int32 *v15; // rcx
  unsigned int i; // esi
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 **v19; // rdx
  struct _PCW_INSTANCE *v20; // rcx
  VIDMM_GLOBAL *v21; // rdx
  VIDMM_GLOBAL ***v22; // rcx
  __int64 v23; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v5 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        v7 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v5);
        if ( v7 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v7 + 41072));
          for ( i = 0; i < *((_DWORD *)*v7 + 1754); ++i )
          {
            v17 = (__int64 *)((char *)v7[6] + 296 * i);
            v18 = *v17;
            if ( *v17 )
            {
              if ( *(__int64 **)(v18 + 8) != v17 )
                goto LABEL_35;
              v19 = (__int64 **)v17[1];
              if ( *v19 != v17 )
                goto LABEL_35;
              *v19 = (__int64 *)v18;
              *(_QWORD *)(v18 + 8) = v19;
              *v17 = 0LL;
              v17[1] = 0LL;
            }
            v20 = (struct _PCW_INSTANCE *)v17[31];
            if ( v20 )
              PcwCloseInstance(v20);
          }
          v21 = v7[3];
          if ( *((VIDMM_GLOBAL ***)v21 + 1) != v7 + 3 || (v22 = (VIDMM_GLOBAL ***)v7[4], *v22 != v7 + 3) )
LABEL_35:
            __fastfail(3u);
          *v22 = (VIDMM_GLOBAL **)v21;
          *((_QWORD *)v21 + 1) = v22;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) = 0LL;
          v23 = (__int64)*v7 + 41072;
          *(_QWORD *)(v23 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v23, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v7, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v7);
        }
        v5 = (unsigned int)(v5 + 1);
        v8 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v5 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v8) );
    }
    operator delete(*((void **)this + 2));
  }
  v9 = *((_QWORD *)this + 4);
  if ( !v9 || (*(_DWORD *)(v9 + 424) & 0x100) == 0 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v10 )
      (**v10)(v10, 1LL);
  }
  v11 = *((_QWORD *)this + 4);
  if ( v11 && (*(_DWORD *)(v11 + 424) & 0x180) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v12 = (void *)*((_QWORD *)this + 5);
  if ( v12 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v12);
  }
  v13 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
  if ( v13 )
    CVirtualAddressAllocator::DestroyVaAllocator(v13, a2, a3, a4);
  v14 = (void *)*((_QWORD *)this + 37);
  if ( v14 != (void *)-1LL )
    ObCloseHandle(v14, 0);
  v15 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v15 )
    VidMmiClosePartition(v15);
}

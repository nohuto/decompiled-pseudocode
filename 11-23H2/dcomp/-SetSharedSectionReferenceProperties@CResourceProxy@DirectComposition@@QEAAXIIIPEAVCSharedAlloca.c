/*
 * XREFs of ?SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAllocationBase@2@_K@Z @ 0x180021CF0
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 * Callees:
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CResourceProxy::SetSharedSectionReferenceProperties(
        DirectComposition::CResourceProxy *this,
        int a2,
        int a3,
        int a4,
        struct DirectComposition::CSharedAllocationBase *a5,
        unsigned __int64 a6)
{
  struct DirectComposition::CProxyTable *v9; // rax
  __int64 v10; // r10
  DirectComposition::CDevice *v11; // rdi
  int v12; // ebx
  struct DirectComposition::CSharedAllocationBase *v13; // rsi
  int v14; // ebp
  struct DirectComposition::CSharedAllocationBase *v15; // rax
  void (__fastcall ***v16)(_QWORD); // rcx
  __int64 v17; // rsi
  struct DirectComposition::CSharedAllocationBase *v18; // rcx
  void (__fastcall ***v19)(_QWORD); // rcx
  struct DirectComposition::CSharedAllocationBase *v20; // rcx
  unsigned __int64 v21; // rax
  void (__fastcall ***v22)(_QWORD); // rcx

  v9 = DirectComposition::CProxyTable::FromProxy((void *)(((unsigned __int64)this - 8) & -(__int64)(this != 0LL)));
  if ( v9 )
  {
    v11 = *(DirectComposition::CDevice **)v9;
    v12 = *(_DWORD *)(v10 + 12);
  }
  else
  {
    v11 = 0LL;
    v12 = 0;
  }
  v13 = a5;
  v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL) + 12LL);
  if ( v12 )
  {
    DirectComposition::CDevice::BeginKernelCommand(v11, 0x10u, (void **)&a5, 0);
    v15 = a5;
    *(_DWORD *)a5 = 13;
    *((_DWORD *)v15 + 1) = v12;
    *((_DWORD *)v15 + 2) = a2;
    *((_DWORD *)v15 + 3) = v14;
    v16 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v11 + 10);
    if ( v16 )
      (**v16)(v16);
  }
  v17 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedAllocationBase *))(*(_QWORD *)v13 + 40LL))(v13);
  if ( v12 )
  {
    DirectComposition::CDevice::BeginKernelCommand(v11, 0x18u, (void **)&a5, 0);
    v18 = a5;
    *(_DWORD *)a5 = 8;
    *((_DWORD *)v18 + 1) = v12;
    *((_DWORD *)v18 + 2) = a3;
    *((_QWORD *)v18 + 2) = v17;
    v19 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v11 + 10);
    if ( v19 )
      (**v19)(v19);
    DirectComposition::CDevice::BeginKernelCommand(v11, 0x18u, (void **)&a5, 0);
    v20 = a5;
    v21 = a6;
    *(_DWORD *)a5 = 8;
    *((_DWORD *)v20 + 1) = v12;
    *((_DWORD *)v20 + 2) = a4;
    *((_QWORD *)v20 + 2) = v21;
    v22 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v11 + 10);
    if ( v22 )
      (**v22)(v22);
  }
}

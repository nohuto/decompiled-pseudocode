/*
 * XREFs of ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180081554
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@A@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180108C50 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@A@EAAJAEBVCMILMatrix@@AEBV-$TMilRec.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x180109C50 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJAEBVCMILMatrix@@AEBV-$TMilRe.c)
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x18010A2D0 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJAEBVCMILMatrix@@AEBV-$TMilR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180080D48 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180081FE4 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801E46C8 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z @ 0x1801EB8D8 (-HasScribbleStarted@CComputeScribbleFramebuffer@@QEAAXPEA_NPEAVCRegion@@@Z.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___ @ 0x1801ECDD0 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z @ 0x1801ED0AC (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@QEAAXAEBVCRegion@@@Z @ 0x18028A958 (-AddTransientRegion@CSwapChainBuffer@@QEAAXAEBVCRegion@@@Z.c)
 *     ContributeRegionToDirty @ 0x18028B094 (ContributeRegionToDirty.c)
 */

__int64 __fastcall CLegacySwapChain::AddComputeScribbleInvalidRects(
        __int64 a1,
        __int64 a2,
        const struct MilRectU *a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD **v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  _QWORD *v15; // r13
  __int64 v16; // rsi
  CComputeScribbleRenderer *v17; // rcx
  char v18; // r15
  char v19; // r14
  char v20; // bl
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  bool v38; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+28h] [rbp-D8h] BYREF
  RTL_SRWLOCK *v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  int *v43; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  int *v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A8h] [rbp-58h] BYREF
  int *v47; // [rsp+F0h] [rbp-10h] BYREF
  int v48; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v49[80]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v4 = *(_QWORD *)(a1 - 296);
  v41 = a2;
  v7 = *(unsigned int *)(a1 - 272);
  v42 = a4;
  v8 = *(_QWORD *)(v4 + 8 * v7);
  v9 = (_DWORD **)(v8 + 104);
  v10 = FastRegion::CRegion::Union((FastRegion::CRegion *)(v8 + 16), (const struct CRegion *)(v8 + 104));
  v11 = 0LL;
  if ( v10 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v10, retaddr);
  **v9 = 0;
  v12 = *(unsigned int *)(a1 - 272);
  v13 = *(_QWORD *)(a1 - 296);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 8 * v12) + 96LL);
  v15 = *(_QWORD **)(v13 + 8LL * ((unsigned int)(*(_DWORD *)(a1 - 196) + v12 - 1) % *(_DWORD *)(a1 - 196)));
  v16 = v15[12];
  CRegion::CRegion((CRegion *)v49, a3);
  v17 = *(CComputeScribbleRenderer **)(a1 - 80);
  if ( v17 )
  {
    v27 = CComputeScribbleRenderer::PreRender(v17);
    v25 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v27);
      goto LABEL_13;
    }
  }
  if ( v14 )
  {
    v46 = 0;
    v45 = &v46;
    v28 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v45, (const struct CRegion *)(v14 + 160));
    if ( v28 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v28, retaddr);
    **(_DWORD **)(v14 + 160) = 0;
    v29 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v45, (const struct CRegion *)v49);
    if ( v29 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v29, retaddr);
    v30 = FastRegion::CRegion::Union(
            (FastRegion::CRegion *)(*(_QWORD *)(*(_QWORD *)(a1 - 296) + 8LL * *(unsigned int *)(a1 - 272)) + 16LL),
            (const struct CRegion *)&v45);
    if ( v30 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v30, retaddr);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v45);
  }
  v18 = 0;
  v19 = 1;
  if ( v16 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v16 + 64));
    v40 = (RTL_SRWLOCK *)(v16 + 64);
    v47 = &v48;
    v48 = 0;
    CComputeScribbleFramebuffer::HasScribbleStarted((CComputeScribbleFramebuffer *)v16, &v38, (struct CRegion *)&v47);
    if ( v38 )
    {
      if ( *v47 )
      {
        CSwapChainBuffer::AddTransientRegion((CSwapChainBuffer *)v15, (const struct CRegion *)&v47);
        if ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 - 296) + 8LL * *(unsigned int *)(a1 - 272)) + 16LL) )
        {
          v31 = *(_QWORD *)(v16 + 48);
          v39 = *(_QWORD *)(v16 + 16);
          v11 = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(v31, &v39);
          v18 = 1;
        }
      }
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v47);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v40);
  }
  if ( !*(_DWORD *)v15[13] )
  {
    v20 = 0;
    goto LABEL_7;
  }
  v44 = 0;
  v43 = &v44;
  v32 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v43, (const struct CRegion *)(v15 + 13));
  if ( v32 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v32, retaddr);
  v33 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v43, (const struct CRegion *)v49);
  if ( v33 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v33, retaddr);
  v34 = ContributeRegionToDirty(&v43, v42, v41);
  v25 = v34;
  if ( v34 >= 0 )
  {
    CRegion::Subtract(
      (CRegion *)(*(_QWORD *)(*(_QWORD *)(a1 - 296) + 8LL * *(unsigned int *)(a1 - 272)) + 16LL),
      (const struct CRegion *)&v43);
    v20 = 1;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v43);
LABEL_7:
    v21 = *(_QWORD *)(a1 - 80);
    if ( !v21 || !*(_BYTE *)(v21 + 48) )
      v19 = 0;
    if ( !((unsigned __int8)v20 | (unsigned __int8)(v19 | CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)g_pComposition
                                                                                            + 32)))) )
      goto LABEL_10;
    if ( v24 )
      v35 = *(_QWORD *)(v24 + 24);
    else
      v35 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0xq_EventWriteTransfer(v23, &EVTDESC_COMPUTESCRIBBLE_EARLYCOPY, v35, *(unsigned int *)(a1 - 272));
    v36 = a1 + *(int *)(*(_QWORD *)(a1 - 376) + 16LL) - 376LL;
    v37 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v36 + 24LL))(v36, v22, v35);
    v25 = v37;
    if ( v37 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v37);
    else
LABEL_10:
      v25 = 0;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x527,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
    (const char *)(unsigned int)v34);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v43);
LABEL_11:
  if ( v18 )
    CComputeScribbleSynchronizer::EndRenderOperation(
      *(CComputeScribbleSynchronizer **)(v16 + 48),
      *(struct CD3DDevice **)(v16 + 16),
      v11);
LABEL_13:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v49);
  return v25;
}

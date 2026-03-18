/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C034B894
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0225596 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C034B318 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C005B130 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C034A6D8 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r12
  int v15; // ebx
  struct DXGSYNCOBJECT *v16; // r13
  __int64 v17; // r15
  __int64 CurrentProcess; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  struct DXGSYNCOBJECT *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  struct DXGPROCESS *Current; // rbp
  unsigned int v47; // esi
  unsigned int v48; // ecx
  __int64 v49; // r8
  int v50; // edx
  unsigned __int64 v51; // rbx
  int v52; // [rsp+38h] [rbp-60h]
  _BYTE v53[8]; // [rsp+50h] [rbp-48h] BYREF
  char v54; // [rsp+58h] [rbp-40h]
  struct DXGSYNCOBJECT *v55; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v56; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2208LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2208LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v12 = v8 == 0 ? 0x30 : 0;
  v13 = *(__int64 *)((char *)this + v12 + 112);
  if ( !v13 )
    return 3221225558LL;
  v15 = *((_DWORD *)this + 18);
  v16 = (struct DXGSYNCOBJECT *)(32LL * v8);
  v55 = v16;
  v17 = 32LL * (a3 == 0);
  LOBYTE(v9) = -(v8 == 0);
  CurrentProcess = PsGetCurrentProcess(v9, v12, v10, v11);
  LOBYTE(v52) = 1;
  v19 = ObDuplicateObject(
          v13,
          *(_QWORD *)((char *)v16 + (_QWORD)a2 + 72),
          CurrentProcess,
          (char *)a2 + v17 + 72,
          v15,
          0,
          4,
          v52);
  v24 = v19;
  if ( v19 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v17 + 72);
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v53, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v53);
    v56 = 0;
    v35 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
    LODWORD(v24) = DXGGLOBAL::OpenSyncObject(v35, *((_DWORD *)a2 + 7), &v55, &v56, 0LL);
    if ( (int)v24 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v37, v36, v38, v39);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v47 = v56;
      v48 = (v56 >> 6) & 0xFFFFFF;
      if ( v48 < *((_DWORD *)Current + 74) )
      {
        v49 = *((_QWORD *)Current + 35);
        v50 = *(_DWORD *)(v49 + 16LL * v48 + 8);
        if ( ((v56 >> 25) & 0x60) == (v50 & 0x60) && (v50 & 0x1F) != 0 )
        {
          v51 = 2 * (((unsigned __int64)v56 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v49 + 16 * (((unsigned __int64)v56 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v49 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v49 + 8 * v51 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
      *(_DWORD *)((char *)a2 + v17 + 56) = v47;
      if ( v54 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
      *((_BYTE *)a2 + v17 + 48) = 1;
      return (unsigned int)v24;
    }
    v40 = PsGetCurrentProcess(v37, v36, v38, v39);
    WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v40);
    v45 = PsGetCurrentProcess(v42, v41, v43, v44);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
      *((unsigned int *)a2 + 7),
      v45,
      0LL,
      0LL,
      0LL);
    if ( v54 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
  }
  else
  {
    v25 = PsGetCurrentProcess(v21, v20, v22, v23);
    v26 = v55;
    WdLogSingleEntry4(2LL, *(_QWORD *)((char *)a2 + (_QWORD)v55 + 72), v13, v25, v24);
    v31 = PsGetCurrentProcess(v28, v27, v29, v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to dup NT handle 0x%I64x into from creator process 0x%I64x, to process 0x%I64x, status 0x%I64x",
      *(_QWORD *)((char *)a2 + (_QWORD)v26 + 72),
      v13,
      v31,
      v24,
      0LL);
  }
  DXGSWAPCHAIN::DestroySwapchainLocalClient(
    (DXGSWAPCHAIN *)this,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 144LL : 96LL)),
    v32,
    v33);
  return (unsigned int)v24;
}

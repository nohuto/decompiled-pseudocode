/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C034B4B4
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0349CC4 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x1C005B59C (McTemplateK0pqp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // r8
  __int64 v10; // r14
  const wchar_t *v11; // r9
  PVOID v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 CurrentProcess; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // eax
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  struct DXGPROCESS *Current; // r14
  unsigned int v42; // edi
  unsigned int v43; // ecx
  __int64 v44; // r8
  int v45; // edx
  PVOID *Object; // [rsp+20h] [rbp-50h]
  int v47; // [rsp+38h] [rbp-38h]
  struct DXGSYNCOBJECT *v48; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v49[8]; // [rsp+58h] [rbp-18h] BYREF
  char v50; // [rsp+60h] [rbp-10h]
  PVOID v51; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v52; // [rsp+B8h] [rbp+48h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2111LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2111LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)a2 = 0LL;
  v51 = 0LL;
  v8 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v51, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v8);
    v11 = L"Failed to verify Surface Nt handle 0x%I64x, error 0x%I64x";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, (__int64)a4, v10, 0LL, 0LL, 0LL);
    return (unsigned int)v10;
  }
  v13 = v51;
  if ( v51 )
  {
    v14 = *((_QWORD *)v51 + 2);
    if ( v14 )
    {
      v15 = (_QWORD *)(v14 + 136);
      v16 = 0LL;
      if ( (_QWORD *)*v15 != v15 )
        v16 = *(_QWORD *)(*v15 - 40LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
      {
        LODWORD(Object) = -1227133513 * ((a2 - this[8]) >> 4);
        McTemplateK0pqp_EtwWriteTransfer(0x6DB6DB6DB6DB6DB7LL, v16, v9, this, Object, v16);
      }
    }
  }
  ObfDereferenceObject(v13);
  v52 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v18, v17, v19, v20);
  v26 = PsGetCurrentProcess(v23, v22, v24, v25);
  LOBYTE(v47) = 1;
  v27 = ObDuplicateObject(v26, a4, CurrentProcess, &v52, 0, 0, 6, v47);
  v10 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v27);
    v11 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
    goto LABEL_5;
  }
  *((_QWORD *)a3 + 3) = v52;
  *((_QWORD *)a3 + 2) = a4;
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v49, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v49);
  LODWORD(v51) = 0;
  v29 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
  v34 = DXGGLOBAL::OpenSyncObject(v29, *((_DWORD *)a2 + 7), &v48, (unsigned int *)&v51, 0LL);
  if ( v34 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v31, v30, v32, v33);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v42 = (unsigned int)v51;
    v43 = ((unsigned int)v51 >> 6) & 0xFFFFFF;
    if ( v43 < *((_DWORD *)Current + 74) )
    {
      v44 = *((_QWORD *)Current + 35);
      v45 = *(_DWORD *)(v44 + 16LL * v43 + 8);
      if ( (((unsigned int)v51 >> 25) & 0x60) == (v45 & 0x60) && (v45 & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v44 + 16 * (((unsigned __int64)(unsigned int)v51 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
          v44 = *((_QWORD *)Current + 35);
        }
        *(_DWORD *)(v44 + 16 * (((unsigned __int64)v42 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a3 + 2) = v42;
    if ( v50 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
    *(_BYTE *)a3 = 1;
  }
  else
  {
    v35 = PsGetCurrentProcess(v31, v30, v32, v33);
    WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v35);
    v40 = PsGetCurrentProcess(v37, v36, v38, v39);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
      *((unsigned int *)a2 + 7),
      v40,
      0LL,
      0LL,
      0LL);
    if ( v50 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
  }
  return (unsigned int)v34;
}

/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C03498EC
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0225CE8 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C034D320 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C034D910 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1C034E8B0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C034F6A0 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C034F990 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C005ABA0 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0225BDC (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  DXGAUTOMUTEX *v3; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  HANDLE CurrentProcessId; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v16; // r14
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  struct _KEVENT *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r8
  COREACCESS *v29; // rax
  __int64 v30; // rdx
  char *v32; // [rsp+58h] [rbp-80h]
  _BYTE v33[64]; // [rsp+60h] [rbp-78h] BYREF

  v3 = (DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24);
  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v10 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v10 + 48) )
  {
    WdLogSingleEntry1(3LL, v10);
    return 3221225558LL;
  }
  if ( *(_BYTE *)this == 1 )
  {
    v12 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v13 = *(_QWORD *)(v12 + v10 + 112);
    if ( PsGetCurrentProcess(v12, v6, v8, v9) != v13 )
    {
      CurrentProcessId = PsGetCurrentProcessId();
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 1), CurrentProcessId);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v16 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v32 = (char *)Current + 248;
    v17 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v18 = *((_BYTE *)this + 16) != 0 ? 0x30 : 0;
    v19 = *(unsigned int *)(v18 + *((_QWORD *)this + 1) + 96);
    v20 = (*(_DWORD *)(v18 + *((_QWORD *)this + 1) + 96) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *((_DWORD *)v16 + 74) )
    {
      v21 = *((_QWORD *)v16 + 35);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        if ( (v22 & 0x1F) != 3 )
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          v23 = 0LL;
LABEL_18:
          WdLogSingleEntry2(3LL, v19, v16);
          v17 = -1073741811;
LABEL_19:
          ExReleasePushLockSharedEx(v32, 0LL);
          KeLeaveCriticalRegion();
          if ( v23 && a3 )
          {
            DXGAUTOMUTEX::Release(v3);
            v26 = *(struct _KEVENT **)(v23 + 16);
            if ( !KeReadStateEvent(v26 + 4) )
              KeWaitForSingleObject(&v26[4], Executive, 0, 0, 0LL);
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v23 + 136), 0) )
            {
              DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v27, (const EVENT_DESCRIPTOR *)"g", v28, 40);
              ExAcquireResourceSharedLite(*(PERESOURCE *)(v23 + 136), 1u);
              DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
            }
            *((_BYTE *)this + 41) = 1;
            v29 = COREACCESS::COREACCESS((COREACCESS *)v33, *(struct DXGADAPTER *const *)(*(_QWORD *)(v23 + 16) + 16LL));
            COREACCESS::operator=((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), (__int64)v29);
            COREACCESS::~COREACCESS((COREACCESS *)v33);
            COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), 0LL);
            if ( *(_DWORD *)(v23 + 576) == 1 )
            {
              *((_BYTE *)this + 43) = 1;
            }
            else
            {
              COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
              v17 = -1073741130;
              WdLogSingleEntry2(3LL, v23, -1073741130LL);
            }
            DXGAUTOMUTEX::Acquire(v3);
          }
          if ( v17 >= 0 )
          {
            v30 = *((_QWORD *)this + 1);
            if ( !*(_DWORD *)(v30 + 48) )
            {
              *(_QWORD *)((*((_BYTE *)this + 16) != 0 ? 0x30 : 0) + v30 + 104) = v23;
              *a2 = (struct DXGDEVICE *)v23;
              return (unsigned int)v17;
            }
            WdLogSingleEntry1(3LL, v30);
            v17 = -1073741738;
          }
          DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
          return (unsigned int)v17;
        }
        v23 = *(_QWORD *)(v21 + 16LL * (unsigned int)v20);
        if ( !v23 )
          goto LABEL_18;
        _m_prefetchw((const void *)(v23 + 64));
        v24 = *(_QWORD *)(v23 + 64);
        while ( v24 )
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 64), v24 + 1, v24);
          if ( v25 == v24 )
          {
            *((_BYTE *)this + 42) = 1;
            *((_QWORD *)this + 6) = v23;
            goto LABEL_19;
          }
        }
      }
    }
    v23 = 0LL;
    goto LABEL_18;
  }
  return 0LL;
}

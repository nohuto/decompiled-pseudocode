/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C034BC44
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C034DD20 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C034EA60 (DxgkOpenSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C034A6D8 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        __int64 a2,
        struct DXGDEVICE *a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v6; // esi
  __int64 v7; // rbp
  int v9; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rbx
  __int64 v22; // rax
  const wchar_t *v23; // r13
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KEVENT *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v37[24]; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0;
  v7 = a4;
  v9 = a2;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, a4) )
  {
    CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
    WdLogSingleEntry1(3LL, CurrentProcess);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( *((_DWORD *)this + 12) )
  {
    WdLogSingleEntry1(3LL, this);
    v6 = -1073741738;
  }
  else
  {
    v21 = (char *)this + (a6 != 0 ? 144LL : 96LL);
    if ( *((_QWORD *)v21 + 2) )
    {
      WdLogSingleEntry2(3LL, this, a6);
      v6 = -1073740008;
    }
    else
    {
      *((_QWORD *)v21 + 2) = PsGetCurrentProcess(v18, v17, v19, v20);
      *(_DWORD *)v21 = v9;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 404LL) == *((_QWORD *)this + 25) )
      {
        *((_DWORD *)v21 + 6) = a5;
        if ( v7 )
        {
          if ( a5 )
          {
            v7 = 2058LL;
            WdLogSingleEntry1(2LL, 2058LL);
            v22 = 0LL;
            v23 = L"We not code currently to set event once busy surface is not busy";
            v6 = -1073741822;
          }
          else
          {
            Object = 0LL;
            v24 = ObReferenceObjectByHandle((HANDLE)v7, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v28 = (struct _KEVENT *)Object;
            v6 = v24;
            *((_QWORD *)v21 + 4) = Object;
            if ( v24 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v28, 2, 0);
              goto LABEL_17;
            }
            v29 = PsGetCurrentProcess(v28, v25, v26, v27);
            WdLogSingleEntry2(2LL, v7, v29);
            v23 = L"Failed to open CPU signal event 0x%I64x process 0x%I64x";
            v22 = PsGetCurrentProcess(v31, v30, v32, v33);
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v7, v22, 0LL, 0LL, 0LL);
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v21, v34, v35);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SwapChain (0x%I64x) - Attempt to open with a device that is not from the swap-chain's adapter.",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1073741811;
      }
    }
  }
LABEL_17:
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  return v6;
}

/*
 * XREFs of ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C034A7E0
 * Callers:
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1C034E8B0 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C005AE1C (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1C01C8B9C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 *     ?GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C02E5544 (-GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C034B21C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetClientSurfacePhysicalAddress(DXGSWAPCHAIN *this, union _LARGE_INTEGER *a2)
{
  DXGDEVICE *v5; // rsi
  bool v6; // dl
  unsigned int v7; // r8d
  _QWORD *v8; // rax
  void *v9; // rdi
  NTSTATUS v10; // eax
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  unsigned int AllocationPhysicalAddress; // ebx
  _BYTE v15[8]; // [rsp+50h] [rbp-20h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v19; // [rsp+B0h] [rbp+40h] BYREF

  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3627LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3627LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 34) == -1 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 14), this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)this + 14),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v5 = (DXGDEVICE *)*((_QWORD *)this + 13);
  if ( !v5 )
  {
    WdLogSingleEntry1(1LL, 3640LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice", 3640LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)v5 + 5) )
  {
    WdLogSingleEntry1(2LL, 3645LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3645LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v6);
    return 3221225473LL;
  }
  v7 = *((_DWORD *)this + 34);
  v19 = 0LL;
  Object = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    this,
    (DXGSWAPCHAIN *)((char *)this + 96),
    v7,
    &v19,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **)&Object);
  v8 = Object;
  Object = 0LL;
  v9 = (void *)v8[3];
  v10 = ObReferenceObjectByHandle(v9, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v11 = Object;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)Object + 2);
    if ( v12 && *(_QWORD *)(v12 + 80) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(v12 + 32), 0);
      DXGPUSHLOCK::AcquireShared(v16);
      v17 = 1;
      v13 = (_QWORD *)(v11[2] + 136LL);
      if ( (_QWORD *)*v13 == v13 )
      {
        WdLogSingleEntry1(2LL, 3687LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Shared resource does not have an allocation",
          3687LL,
          0LL,
          0LL,
          0LL,
          0LL);
        AllocationPhysicalAddress = -1073741823;
      }
      else
      {
        AllocationPhysicalAddress = DXGDEVICE::GetAllocationPhysicalAddress(
                                      v5,
                                      (const struct DXGADAPTERALLOCATION *)(*v13 - 48LL),
                                      a2);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
      goto LABEL_19;
    }
    WdLogSingleEntry1(2LL, 3675LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get shared resource or render core",
      3675LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(3LL, v9);
  }
  AllocationPhysicalAddress = -1073741823;
LABEL_19:
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
  return AllocationPhysicalAddress;
}

/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C018F1D8
 * Callers:
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C018D188 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B50A0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0344E58 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381CF0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00049F4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C018F32C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ebp
  struct ADAPTER_RENDER *v10; // rdx
  int v11; // esi
  int v13; // r9d

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3302LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3302LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v13 = *((_DWORD *)a2 + 68);
        if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v6, &EventBlockThread, v7, v13);
      }
      ExAcquirePushLockExclusiveEx((char *)a2 + 248, 0LL);
    }
    *((_QWORD *)a2 + 32) = KeGetCurrentThread();
    v8 = HMGRTABLE::AllocHandle((char *)a2 + 280, this, 1LL, 0LL, 0);
    *((_QWORD *)a2 + 32) = 0LL;
    v9 = v8;
    ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( v9 )
    {
      v10 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 366);
      if ( !v10 || (v11 = DXGPROCESS::OpenAdapter(a2, v10, (*((_DWORD *)a2 + 106) & 0x80) != 0), v11 >= 0) )
      {
        *a3 = v9;
        return 0LL;
      }
      DXGPROCESS::FreeHandleSafe(a2, v9);
    }
    else
    {
      v11 = -1073741801;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry2(3LL, this, -1073741130LL);
    return 3221226166LL;
  }
}

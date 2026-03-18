/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0183D20 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01862D0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01DA4A8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0336544 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370A70 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0168A40 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C016DA3C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  int v3; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v20; // r9d
  int v21; // eax
  bool v22; // [rsp+98h] [rbp+10h]
  __int64 v23; // [rsp+A0h] [rbp+18h]

  v3 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3302LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3302LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 50) != 1 )
  {
    WdLogSingleEntry2(3LL, this, -1073741130LL);
    return 3221226166LL;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *((_DWORD *)a2 + 68);
      if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (const EVENT_DESCRIPTOR *)"g", v8, v20);
    }
    ExAcquirePushLockExclusiveEx((char *)a2 + 248, 0LL);
  }
  *((_QWORD *)a2 + 32) = KeGetCurrentThread();
  v9 = HMGRTABLE::AllocHandle((char *)a2 + 280, this, 1LL, 0LL, 0);
  *((_QWORD *)a2 + 32) = 0LL;
  v10 = v9;
  ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
  KeLeaveCriticalRegion();
  _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 350);
    if ( !v11 )
    {
LABEL_16:
      *a3 = v10;
      return 0LL;
    }
    v12 = v11 + 72;
    v22 = (*((_DWORD *)a2 + 106) & 0x80) != 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 72, 0LL);
    *(_QWORD *)(v11 + 80) = KeGetCurrentThread();
    v23 = *(unsigned int *)(*(_QWORD *)(v11 + 16) + 240LL);
    v14 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 8 * v23);
    if ( !v14 )
    {
      v15 = operator new[](0x78uLL, 0x4B677844u, 256LL, v13);
      v14 = v15;
      if ( !v15 )
      {
        v3 = -1073741801;
LABEL_15:
        *(_QWORD *)(v12 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
        if ( v3 >= 0 )
          goto LABEL_16;
        DXGPROCESS::CloseAdapter(a2, (struct ADAPTER_RENDER *)v11);
        DXGPROCESS::FreeHandleSafe(a2, v10);
        goto LABEL_30;
      }
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = 0LL;
      *(_QWORD *)(v15 + 24) = 0LL;
      *(_QWORD *)(v15 + 32) = 0LL;
      *(_QWORD *)(v15 + 40) = 0LL;
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_DWORD *)(v15 + 72) = 0;
      *(_WORD *)(v15 + 76) = 0;
      *(_QWORD *)(v15 + 80) = 0LL;
      *(_QWORD *)(v15 + 88) = 0LL;
      *(_DWORD *)(v15 + 96) = 0;
      v16 = (_QWORD *)(v15 + 56);
      *(_DWORD *)(v15 + 100) = 1;
      v17 = (_QWORD *)(v15 + 104);
      v17[1] = v17;
      *v17 = v17;
      *(_QWORD *)(v14 + 32) = a2;
      *(_QWORD *)(v14 + 48) = v11;
      if ( *(struct _KTHREAD **)(v11 + 80) != KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 4353LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_OpenAdapterLock.IsExclusiveOwner()",
          4353LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v18 = *(_QWORD **)(v11 + 304);
      if ( *v18 != v11 + 296 )
        __fastfail(3u);
      *(_QWORD *)(v14 + 64) = v18;
      *v16 = v11 + 296;
      *v18 = v16;
      *(_QWORD *)(v11 + 304) = v16;
      v12 = v11 + 72;
      ++*(_DWORD *)(v11 + 312);
      *(_QWORD *)(*((_QWORD *)a2 + 6) + 8 * v23) = v14;
    }
    ++*(_DWORD *)(v14 + 24);
    if ( v22 )
    {
      v21 = DXGPROCESS_RENDER_ADAPTER_INFO::Initialize(
              (DXGPROCESS_RENDER_ADAPTER_INFO *)v14,
              (unsigned __int64)a2,
              (struct ADAPTER_RENDER *)v11,
              v13);
      v3 = v21;
      if ( v21 < 0 )
        WdLogSingleEntry1(3LL, v21);
    }
    goto LABEL_15;
  }
  v3 = -1073741801;
LABEL_30:
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  return (unsigned int)v3;
}

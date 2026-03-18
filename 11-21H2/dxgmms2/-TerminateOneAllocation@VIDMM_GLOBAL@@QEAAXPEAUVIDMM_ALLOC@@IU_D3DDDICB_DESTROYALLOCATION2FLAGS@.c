/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0083200
 * Callers:
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00831E0 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00019C0 (VidSchSubmitDeviceCommand.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00A2A18 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v6; // bl
  __int64 v8; // r13
  __int64 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  int v19; // eax
  int v20; // r9d
  __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v23; // [rsp+68h] [rbp-21h]
  _QWORD v24[10]; // [rsp+78h] [rbp-11h] BYREF

  v6 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 296));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 296));
  v9 = a2[1];
  a2[24] = (__int64 *)a5;
  v10 = *v9;
  *((_BYTE *)v9 + 56) = 1;
  v11 = v10 + 44480;
  if ( v11 && *(struct _KTHREAD **)(v11 + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(v21, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *(_DWORD *)(v11 + 24);
      if ( v20 != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, v20);
    }
    ExAcquirePushLockExclusiveEx(v11, 0LL);
  }
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  if ( (*((_DWORD *)v9 + 15) & 7) == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v9, 3LL);
    KeSetEvent(*(PRKEVENT *)(*(_QWORD *)*v9 + 176LL), 0, 0);
  }
  *(_QWORD *)(v11 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (byte_1C006E941 & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(v14, &EventTerminateAllocation, v15, a2);
  v16 = **a2;
  v17 = *(_QWORD *)(v16 + 16);
  if ( (**(_DWORD **)(v16 + 528) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1940);
    *((_QWORD *)this + 971) += v17;
  }
  else
  {
    ++*((_DWORD *)this + 1944);
    *((_QWORD *)this + 973) += v17;
  }
  v22[0] = 1LL;
  v22[1] = a2;
  memset(v24, 0, sizeof(v24));
  v24[6] = v22;
  LODWORD(v24[0]) = (v6 & 1) == 0 || (**(_DWORD **)(v8 + 528) & 0x4000) != 0;
  v18 = (_QWORD *)a2[1][4];
  v19 = VidSchSubmitDeviceCommand(v18, (__int64)v24);
  if ( v19 < 0 )
  {
    WdLogSingleEntry1(3LL, v19);
    v23 = 0LL;
    LODWORD(v23) = 5;
    VidSchFlushDevice((int)v18);
    LODWORD(v24[0]) = 0;
    VidSchSubmitDeviceCommand(v18, (__int64)v24);
  }
}

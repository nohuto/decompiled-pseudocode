/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C0166690
 * Callers:
 *     DxgkDestroyPagingQueue @ 0x1C0165620 (DxgkDestroyPagingQueue.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C01E9FF0 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C240 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C002BAC8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r9
  int v9; // r8d
  DXGPAGINGQUEUE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]
  char v21; // [rsp+68h] [rbp-30h]
  _BYTE v22[32]; // [rsp+70h] [rbp-28h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+A8h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2118);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2118);
  hPagingQueue = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22, Current);
  v6 = p_hPagingQueue->hPagingQueue;
  v7 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  if ( v7 < *((_DWORD *)Current + 74) )
  {
    v8 = *((_QWORD *)Current + 35);
    v9 = *(_DWORD *)(v8 + 16LL * v7 + 8);
    if ( (((unsigned int)v6 >> 25) & 0x60) == (v9 & 0x60) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
    {
      if ( (v9 & 0x1F) == 0xA )
      {
        v10 = *(DXGPAGINGQUEUE **)(v8 + 16LL * v7);
        goto LABEL_15;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v6 = p_hPagingQueue->hPagingQueue;
    }
  }
  v10 = 0LL;
LABEL_15:
  if ( v10 )
  {
    v11 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v11 < *((_DWORD *)Current + 74) )
    {
      v12 = *((_QWORD *)Current + 35);
      v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
      if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
        && (v13 & 0x2000) == 0
        && (v13 & 0x1F) != 0 )
      {
        *(_DWORD *)(v12 + 16LL * (((unsigned int)v6 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    DXGPAGINGQUEUE::ReleaseReference(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v19);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v19);
    }
    return 3221225485LL;
  }
}

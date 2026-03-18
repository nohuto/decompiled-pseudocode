/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C0166590
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C004C2E0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01664CC (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C018692C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyPagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C0376C04 (-VmBusSendDestroyPagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this)
{
  void *v2; // rbx
  unsigned int v3; // edx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int HostProcess; // eax

  if ( !*((_BYTE *)this + 72) )
  {
    WdLogSingleEntry1(1LL, 36LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"_DestroyedCoreState", 36LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*((DXGDEVICESYNCOBJECT **)this + 5));
    ExFreePoolWithTag(v2, 0);
  }
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v3);
  if ( *((_DWORD *)this + 7) )
  {
    v4 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v4 + 576) != 4 )
    {
      v5 = *((_DWORD *)this + 7);
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
      HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v4 + 40));
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyPagingQueue(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4344),
        HostProcess,
        v5);
    }
  }
  *((_QWORD *)this + 2) = 0LL;
}

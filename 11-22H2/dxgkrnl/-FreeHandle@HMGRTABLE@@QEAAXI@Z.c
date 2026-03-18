/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C01BA410
 * Callers:
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0002A60 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000461C (-FreeResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0024D54 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C018CFB8 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01A1FF8 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B7900 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B9800 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022EAD4 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     DxgkWslDestroyNtSharedObject @ 0x1C03294D0 (DxgkWslDestroyNtSharedObject.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034F820 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C035DB44 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C03658D4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0366080 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C03668B4 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D370 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r9d
  int v6; // edx
  char v7; // cl
  __int64 v8; // rdx

  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 265LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_FreeCount < m_TableSize", 265LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    WdLogSingleEntry1(1LL, 266LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeCount >= HMGRTABLE_MIN_FREE_ENTRIES",
      266LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)this + 4) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8);
    v6 = (v5 >> 5) & 3;
    if ( a2 >> 30 == v6 && (v5 & 0x1F) != 0 )
    {
      v7 = v6 + 1;
      if ( v6 == 3 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(32 * v7)) & 0x60;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= ~0x2000u;
      v8 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v8 + 16LL * v4) = *(_DWORD *)(v8 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v4;
    }
  }
}

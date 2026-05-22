/*
 * XREFs of ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704
 * Callers:
 *     ?CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z @ 0x18006A448 (-CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z.c)
 *     ?OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z @ 0x18006A5C0 (-OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateSharedResource@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084BE0 (-CreateSharedResource@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateSurfaceFromHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z @ 0x1800F0B10 (-CreateSurfaceFromHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z.c)
 *     ?DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z @ 0x1800F1A60 (-DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPE.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z @ 0x18002493C (-FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ @ 0x18005AF84 (-CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ.c)
 *     ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z @ 0x18005B708 (-ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CDevice::OpenSharedProxy(
        DirectComposition::CDevice *this,
        void *a2,
        int a3,
        char a4,
        void **a5,
        unsigned int *a6)
{
  _QWORD *ProxySlot; // rsi
  int v11; // r9d
  int v12; // ebp
  __int64 v13; // r14
  unsigned __int64 v15; // rbx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  DirectComposition::CProxyTable *v19; // rax
  _QWORD *v20; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF

  v20 = (_QWORD *)((char *)this + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  ProxySlot = DirectComposition::CDevice::CreateProxySlot(this);
  if ( ProxySlot )
  {
    LOBYTE(v11) = a4;
    v12 = DirectComposition::CDevice::ChannelOpenSharedResource(this, a2, a3, v11, &v21);
    if ( v12 < 0 )
    {
      v19 = DirectComposition::CProxyTable::FromProxy((unsigned __int64)ProxySlot);
      DirectComposition::CProxyTable::FreeProxy(v19, ProxySlot);
    }
    else
    {
      v13 = v21;
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
      {
        v15 = v13 | ((unsigned __int64)(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20)) << 32) | 0x8000000000000000uLL;
        v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 8LL))(*((_QWORD *)this + 20));
        McTemplateU0qqxqttx_EventWriteTransfer(v18, v17, v16, v13, v15, a3, 0, 1, (char)ProxySlot);
      }
      (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this + 8LL))(this);
      *a5 = ProxySlot;
      *a6 = v13;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v20);
  return (unsigned int)v12;
}

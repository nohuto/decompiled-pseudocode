/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140021C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x140021DD0 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x140021E08 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140021E88 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x140022010 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E2C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400550A8 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  struct IUnknown *v7; // rax
  __int64 v8; // rbx
  __int64 Node; // rax
  struct DeviceRegistrationToken__ *v10; // rdi
  int v11; // ebx
  _QWORD v13[2]; // [rsp+38h] [rbp-90h] BYREF
  char v14; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+50h] [rbp-78h] BYREF
  char *v16; // [rsp+58h] [rbp-70h]
  __int128 v17; // [rsp+60h] [rbp-68h] BYREF
  __int64 v18; // [rsp+70h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+78h] [rbp-50h]
  _BYTE v20[72]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+20h] BYREF

  v13[0] = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v13[1] = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v19 = v6;
  v7 = ListKeyForDevice(a2);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(v13, v7);
  v16 = (char *)this + 200;
  v8 = v13[0];
  v15 = v13[0];
  Node = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
           (int)this + 200,
           (unsigned int)&v15,
           (unsigned int)&v14,
           (unsigned int)&v21,
           (__int64)v20);
  v10 = (struct DeviceRegistrationToken__ *)Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_3;
  }
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v17) = 1;
  v21 = v8;
  v10 = (struct DeviceRegistrationToken__ *)ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
                                              (char *)this + 200,
                                              &v21,
                                              &v17);
  v11 = (*(__int64 (__fastcall **)(char *, struct IAudioDeviceEndpoint *, __int64))(*((_QWORD *)this - 1) + 64LL))(
          (char *)this - 8,
          a2,
          (__int64)v10 + 16);
  if ( v11 >= 0 )
  {
LABEL_3:
    *a3 = v10;
    v11 = 0;
    goto LABEL_4;
  }
  if ( v10 )
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v16,
      v10);
LABEL_4:
  if ( v6 )
    LeaveCriticalSection(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  return (unsigned int)v11;
}

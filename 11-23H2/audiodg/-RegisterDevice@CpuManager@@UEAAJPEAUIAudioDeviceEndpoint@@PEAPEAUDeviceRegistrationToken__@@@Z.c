/*
 * XREFs of ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140054590
 * Callers:
 *     <none>
 * Callees:
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x140021DD0 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x140022010 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E2C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140053694 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140055014 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x140055390 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CpuManager::RegisterDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r15
  struct IAudioDeviceEndpoint *v4; // r12
  CpuManager *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // ebx
  struct IUnknown *v8; // rax
  __int64 v9; // rbx
  __int64 Node; // rax
  __int64 v11; // rdi
  ATL::CAtlException *v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp-78h]
  int v17; // [rsp+48h] [rbp-70h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  char *v19; // [rsp+58h] [rbp-60h]
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+70h] [rbp-48h]
  ATL::CAtlException *v22; // [rsp+78h] [rbp-40h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v15 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v21 = v6;
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_12;
  v8 = ListKeyForDevice(v4);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v15, (__int64)v8);
  v19 = (char *)v5 + 200;
  v9 = v15;
  v18 = v15;
  Node = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 200,
           (unsigned int *)&v18,
           &v17,
           (unsigned int *)&v26,
           &v20);
  v11 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    goto LABEL_11;
  }
  v20 = 0LL;
  LODWORD(v20) = 1;
  try
  {
    v26 = v9;
    v11 = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::SetAt(
            (char *)v5 + 200,
            &v26,
            &v20);
    v14 = v11;
  }
  catch ( ATL::CAtlException *v22 )
  {
    v13 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v26) = *(_DWORD *)v13;
    v7 = v26;
    v5 = this;
    v11 = v14;
    v6 = v16;
    if ( (int)v26 < 0 )
      goto LABEL_7;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, struct IAudioDeviceEndpoint *, __int64))(*(_QWORD *)v5 + 112LL))(
         v5,
         v4,
         v11 + 16);
  if ( v7 >= 0 )
  {
LABEL_11:
    *v3 = (struct DeviceRegistrationToken__ *)v11;
    v7 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( v11 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v19,
      v11);
  (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_12:
  if ( v6 )
    LeaveCriticalSection(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return (unsigned int)v7;
}

/*
 * XREFs of ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180007690
 * Callers:
 *     ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1800075E0 (-Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180007A10 (-Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 *     ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x1801635C0 (-GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180026AD0 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x180026BB8 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x180026C00 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180026D64 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall AudioDeviceMgr::GetEndpointDevice(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        int *a3,
        struct IEndpointDevice **a4)
{
  unsigned int v8; // edi
  struct _RTL_CRITICAL_SECTION *v9; // r14
  int v10; // esi
  struct IMMDevice *OwningThread; // rbx
  int v12; // eax
  struct IMMDevice *v13; // rsi
  struct IEndpointDevice *v14; // rcx
  struct IEndpointCollection *v15; // rbx
  AudioDeviceMgr *v16; // rcx
  int DataFlow; // esi
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-40h] BYREF
  struct IEndpointDevice *v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  struct IMMDevice *v27; // [rsp+38h] [rbp-28h] BYREF
  struct IEndpointCollection *v28[2]; // [rsp+40h] [rbp-20h] BYREF
  char v29; // [rsp+50h] [rbp-10h]
  struct IMMDevice *v30; // [rsp+A0h] [rbp+40h] BYREF
  struct IEndpointDevice **v31; // [rsp+B8h] [rbp+58h]

  v31 = a4;
  v8 = 0;
  v25 = 0LL;
  v9 = this + 2;
  v28[1] = (struct IEndpointCollection *)&this[2];
  EnterCriticalSection(this + 2);
  v29 = 1;
  if ( !a2 )
  {
    v8 = -2147024809;
    goto LABEL_21;
  }
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_21;
  }
  if ( a3 )
    *a3 = 0;
  v10 = 0;
  v28[0] = 0LL;
  OwningThread = 0LL;
  v27 = 0LL;
  v12 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, const unsigned __int16 *, struct IEndpointCollection **))(*(_QWORD *)this[1].DebugInfo + 40LL))(
          this[1].DebugInfo,
          a2,
          v28);
  if ( v12 < 0 )
    goto LABEL_6;
  LODWORD(v30) = 0;
  v19 = 0LL;
  v26 = 0LL;
  if ( v28[0] )
  {
    v20 = (**(__int64 (__fastcall ***)(struct IEndpointCollection *, GUID *, __int64 *))v28[0])(
            v28[0],
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v26);
    v19 = v26;
    if ( v20 < 0 )
    {
      LODWORD(v30) = v20;
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 24LL))(v26, &v24);
      if ( v21 < 0 )
        LODWORD(v30) = v21;
      v19 = v26;
    }
  }
  else
  {
    LODWORD(v30) = -2147024809;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v12 = (int)v30;
  if ( (int)v30 < 0 )
    goto LABEL_6;
  if ( v24 > 1 )
  {
    v10 = -2147024809;
  }
  else
  {
    v27 = 0LL;
    if ( v24 )
    {
      ATL::CComPtrBase<IEndpointCollection>::CopyTo(&this[1].LockSemaphore, &v27);
      OwningThread = v27;
    }
    else
    {
      OwningThread = (struct IMMDevice *)this[1].OwningThread;
      v27 = OwningThread;
      if ( OwningThread )
        ((void (__fastcall *)(struct IMMDevice *))OwningThread->lpVtbl->AddRef)(OwningThread);
    }
    v12 = ((__int64 (__fastcall *)(struct IMMDevice *, const unsigned __int16 *, struct IEndpointDevice **))OwningThread->lpVtbl->GetState)(
            OwningThread,
            a2,
            &v25);
    if ( v12 < 0 )
LABEL_6:
      v10 = v12;
  }
  v27 = (struct IMMDevice *)&this[1];
  if ( OwningThread )
    ((void (__fastcall *)(struct IMMDevice *))OwningThread->lpVtbl->Release)(OwningThread);
  if ( v28[0] )
    (*(void (__fastcall **)(struct IEndpointCollection *))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  if ( v10 == -2147023728 )
  {
    v30 = 0LL;
    v13 = v27;
    v22 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *, const unsigned __int16 *, struct IMMDevice **))v27->lpVtbl->QueryInterface
           + 5))(
            v27->lpVtbl,
            a2,
            &v30);
    if ( v22 < 0 || (v22 = AudioDeviceMgr::AddEndpointDevice((AudioDeviceMgr *)this, v30, &v25), v22 < 0) )
    {
      v8 = v22;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
      goto LABEL_21;
    }
    if ( a3 )
      *a3 = 1;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
  }
  else
  {
    v13 = v27;
  }
  v14 = v25;
  if ( !v25 )
  {
    v27 = 0LL;
    v15 = 0LL;
    v28[0] = 0LL;
    DataFlow = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *, const unsigned __int16 *, struct IMMDevice **))v13->lpVtbl->QueryInterface
                + 5))(
                 v13->lpVtbl,
                 a2,
                 &v27);
    if ( DataFlow >= 0 )
    {
      DataFlow = AudioDeviceMgr::GetDataFlow(v16, v27, (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)&v30);
      if ( DataFlow >= 0 )
      {
        DataFlow = AudioDeviceMgr::GetEndpointCollection(
                     (AudioDeviceMgr *)this,
                     (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)v30,
                     v28);
        v15 = v28[0];
        if ( DataFlow >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(struct IEndpointCollection *, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v28[0] + 48LL))(
                  v28[0],
                  a2,
                  &v25);
          DataFlow = 0;
          if ( v23 < 0 )
            DataFlow = v23;
        }
      }
    }
    if ( v15 )
      (*(void (__fastcall **)(struct IEndpointCollection *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v27 )
      ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
    if ( DataFlow < 0 )
    {
      v8 = DataFlow;
      goto LABEL_21;
    }
    v14 = v25;
  }
  *v31 = v14;
  if ( v14 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v14 + 8LL))(v14);
LABEL_21:
  LeaveCriticalSection(v9);
  if ( v25 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v25 + 16LL))(v25);
  return v8;
}

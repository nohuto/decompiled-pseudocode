/*
 * XREFs of ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778
 * Callers:
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18000680C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180006FAC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A588 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012C9E8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z @ 0x1801325FC (-UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CMonitor::IsCaptureMonitorEnabled(struct IMMDevice *a1, unsigned __int16 **a2, bool *a3)
{
  char v6; // bl
  unsigned __int16 *v8; // rax
  void *v9; // rcx
  LPVOID ppv; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  PROPVARIANT v13[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  LPVOID pv; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 0LL;
  v6 = 0;
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a1 )
  {
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v16) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(v16, &PKEY_MonitorEnabled, v13) >= 0
      && LOWORD(v13[0]) == 11
      && LOWORD(v13[1]) == 0xFFFF
      && (int)CMonitor::UpdateMonitorOutputEndpointId(a1) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(v16, &PKEY_MonitorOutput, pvar) >= 0 )
    {
      if ( LOWORD(pvar[0]) == 31 )
      {
        *a2 = (unsigned __int16 *)pvar[1];
        LOWORD(pvar[0]) = 0;
        v6 = 1;
      }
      else if ( !LOWORD(pvar[0]) )
      {
        ppv = 0LL;
        v17 = 0LL;
        pv = 0LL;
        if ( CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &ppv) < 0
          || (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v17) < 0
          || (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 40LL))(v17, &pv) < 0 )
        {
          v9 = pv;
        }
        else
        {
          v8 = (unsigned __int16 *)pv;
          pv = 0LL;
          *a2 = v8;
          v6 = 1;
          if ( a3 )
            *a3 = 1;
          v9 = 0LL;
        }
        CoTaskMemFree(v9);
        pv = 0LL;
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&ppv);
      }
    }
    PropVariantClear(pvar);
    PropVariantClear(v13);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
    return v6;
  }
  else
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
    return 0;
  }
}

/*
 * XREFs of ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x180008074
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v7; // ebx
  struct IMMDeviceVtbl *v8; // rax
  bool v10; // zf
  PROPVARIANT v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h]
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    PropVariantClear(pvar);
    PropVariantClear(v11);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    return 2147500035LL;
  }
  lpVtbl = a2->lpVtbl;
  v15 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))lpVtbl->OpenPropertyStore)(a2, 2LL, &v15);
  if ( v7 >= 0 )
  {
    if ( a3 )
    {
      v8 = a2->lpVtbl;
      pv = 0LL;
      v7 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v8->GetId)(a2, &pv);
      if ( v7 < 0
        || (unsigned int)_o__wcsicmp(a3, pv)
        && ((v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                    v15,
                    &PKEY_MonitorOutput,
                    v11),
             v7 < 0)
         || (LOWORD(v11[0]) != 31 || !v11[1] || (unsigned int)_o__wcsicmp(a3, v11[1]))
         && (unsigned int)_o__wcsicmp(a3, pv)
         && (unsigned int)_o__wcsicmp(a3, v11[1])
         && (PropVariantClear(v11),
             LOWORD(v11[0]) = 31,
             v11[1] = a3,
             v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 48LL))(
                    v15,
                    &PKEY_MonitorOutput,
                    v11),
             LOWORD(v11[0]) = 0,
             v7 < 0)) )
      {
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_12;
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
           v15,
           &PKEY_MonitorEnabled,
           pvar);
    if ( v7 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 11 )
      {
        if ( *((_BYTE *)this + 352) )
        {
          if ( LOWORD(pvar[1]) == 0xFFFF )
            goto LABEL_12;
        }
        else if ( !LOWORD(pvar[1]) )
        {
          goto LABEL_12;
        }
      }
      LOWORD(pvar[0]) = 11;
      v10 = *((_BYTE *)this + 352) == 0;
      LOWORD(pvar[1]) = -1;
      if ( v10 )
        LOWORD(pvar[1]) = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 48LL))(
             v15,
             &PKEY_MonitorEnabled,
             pvar);
    }
  }
LABEL_12:
  PropVariantClear(pvar);
  PropVariantClear(v11);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v7;
}

/*
 * XREFs of ?UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z @ 0x18013264C
 * Callers:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180004778 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CMonitor::UpdateMonitorOutputEndpointId(struct IMMDevice *a1)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v2; // eax
  int v3; // ebx
  HRESULT v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, LPVOID *); // rdi
  int v18; // eax
  void *v19; // rax
  int v20; // eax
  __int64 *v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  PROPVARIANT v25[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-9h]
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v28; // [rsp+78h] [rbp+Fh]
  PROPVARIANT v29[2]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v30; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v32; // [rsp+D0h] [rbp+67h] BYREF
  LPVOID ppv; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 *v34; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v35; // [rsp+E8h] [rbp+7Fh] BYREF

  lpVtbl = a1->lpVtbl;
  v24 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))lpVtbl->OpenPropertyStore)(a1, 2LL, &v24);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_OWORD *)v25 = 0LL;
    v26 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(v24, &PKEY_MonitorOutput, v25) >= 0
      && LOWORD(v25[0]) == 31 )
    {
      ppv = 0LL;
      v4 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      v3 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4CF,
          (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
          (const char *)(unsigned int)v4);
LABEL_39:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
        PropVariantClear(v25);
        goto LABEL_40;
      }
      v35 = 0LL;
      v5 = *(_QWORD *)ppv;
      v35 = 0LL;
      v3 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(v5 + 40))(ppv, v25[1], &v35);
      if ( v3 >= 0 )
      {
LABEL_38:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v35);
        goto LABEL_39;
      }
      v34 = 0LL;
      v6 = *(_QWORD *)ppv;
      v34 = 0LL;
      v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 **))(v6 + 24))(ppv, 0LL, 15LL, &v34);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 1248LL;
        goto LABEL_10;
      }
      v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v34 + 24))(v34, &v32);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 1251LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
          (const char *)(unsigned int)v7);
LABEL_37:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
        goto LABEL_38;
      }
      v9 = 0;
      if ( v32 )
      {
        while ( 1 )
        {
          v21 = 0LL;
          v10 = *v34;
          v21 = 0LL;
          v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v10 + 32))(v34, v9, &v21);
          v3 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4E8,
              (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
              (const char *)(unsigned int)v11);
            goto LABEL_36;
          }
          v22 = 0LL;
          v12 = *v21;
          v22 = 0LL;
          v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v12 + 32))(v21, 0LL, &v22);
          v3 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4EB,
              (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
              (const char *)(unsigned int)v13);
            goto LABEL_28;
          }
          *(_OWORD *)pvar = 0LL;
          v28 = 0LL;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
                 v22,
                 &PKEY_AudioEndpoint_MigrationHistory,
                 pvar) >= 0
            && LOWORD(pvar[0]) == 4127
            && LODWORD(pvar[1]) )
          {
            break;
          }
LABEL_22:
          PropVariantClear(pvar);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
          if ( ++v9 >= v32 )
            goto LABEL_23;
        }
        v14 = 0;
        while ( (unsigned int)_o__wcsicmp(v25[1], *(_QWORD *)(v28 + 8LL * v14)) )
        {
          if ( ++v14 >= LODWORD(pvar[1]) )
            goto LABEL_22;
        }
        pv = 0LL;
        v16 = (__int64)v21;
        v17 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*v21 + 40);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v18 = v17(v16, &pv);
        v3 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4FC,
            (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_27;
        }
        v30 = 0LL;
        v29[0] = (PROPVARIANT)31;
        v19 = pv;
        pv = 0LL;
        v29[1] = v19;
        v20 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24 + 48LL))(
                v24,
                &PKEY_MonitorOutput,
                v29);
        v3 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x503,
            (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
            (const char *)(unsigned int)v20);
          PropVariantClear(v29);
LABEL_27:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
          PropVariantClear(pvar);
LABEL_28:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
LABEL_36:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
          goto LABEL_37;
        }
        PropVariantClear(v29);
        if ( pv )
          CoTaskMemFree(pv);
        PropVariantClear(pvar);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v35);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
        PropVariantClear(v25);
        v3 = 0;
        goto LABEL_40;
      }
LABEL_23:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v34);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v35);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
    }
    PropVariantClear(v25);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C5,
    (int)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
    (const char *)(unsigned int)v2);
LABEL_40:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
  return (unsigned int)v3;
}

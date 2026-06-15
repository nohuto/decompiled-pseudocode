/*
 * XREFs of ?UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z @ 0x18012456C
 * Callers:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800518C8 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180121490 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=17
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
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, void **); // rdi
  int v17; // eax
  void *v18; // rax
  int v19; // eax
  __int64 *v21; // [rsp+30h] [rbp-39h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-9h]
  PROPVARIANT v27[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v28; // [rsp+78h] [rbp+Fh]
  PROPVARIANT v29[2]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v30; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v32; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v33; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 *v34; // [rsp+E0h] [rbp+77h] BYREF
  void *v35; // [rsp+E8h] [rbp+7Fh] BYREF

  lpVtbl = a1->lpVtbl;
  v23 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))lpVtbl->OpenPropertyStore)(a1, 2LL, &v23);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_OWORD *)v27 = 0LL;
    v28 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(v23, &PKEY_MonitorOutput, v27) < 0
      || LOWORD(v27[0]) != 31 )
    {
      v3 = 0;
      goto LABEL_39;
    }
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
        (void *)0x7C6,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
        (const char *)(unsigned int)v4);
LABEL_26:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_39:
      PropVariantClear(v27);
      goto LABEL_40;
    }
    v24 = 0LL;
    v5 = *(_QWORD *)ppv;
    v24 = 0LL;
    v3 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(v5 + 40))(ppv, v27[1], &v24);
    if ( v3 >= 0 )
    {
LABEL_25:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
      goto LABEL_26;
    }
    v21 = 0LL;
    v6 = *(_QWORD *)ppv;
    v21 = 0LL;
    v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 **))(v6 + 24))(ppv, 0LL, 15LL, &v21);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v21 + 24))(v21, &v32);
      v3 = v7;
      if ( v7 >= 0 )
      {
        v9 = 0;
        if ( v32 )
        {
          while ( 1 )
          {
            v34 = 0LL;
            v10 = *v21;
            v34 = 0LL;
            v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v10 + 32))(v21, v9, &v34);
            v3 = v11;
            if ( v11 < 0 )
              break;
            v33 = 0LL;
            v12 = *v34;
            v33 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v12 + 32))(v34, 0LL, &v33);
            v3 = v13;
            if ( v13 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x7E2,
                (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
                (const char *)(unsigned int)v13);
LABEL_35:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
              goto LABEL_37;
            }
            *(_OWORD *)pvar = 0LL;
            v26 = 0LL;
            if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v33 + 40LL))(
                   v33,
                   &PKEY_AudioEndpoint_MigrationHistory,
                   pvar) >= 0
              && LOWORD(pvar[0]) == 4127
              && LODWORD(pvar[1]) )
            {
              v14 = 0;
              while ( (unsigned int)_o__wcsicmp(v27[1], *(_QWORD *)(v26 + 8LL * v14)) )
              {
                if ( ++v14 >= LODWORD(pvar[1]) )
                  goto LABEL_22;
              }
              v35 = 0LL;
              v15 = (__int64)v34;
              v16 = *(__int64 (__fastcall **)(__int64, void **))(*v34 + 40);
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                &v35,
                0LL);
              v17 = v16(v15, &v35);
              v3 = v17;
              if ( v17 >= 0 )
              {
                v30 = 0LL;
                v29[0] = (PROPVARIANT)31;
                v18 = v35;
                v35 = 0LL;
                v29[1] = v18;
                v19 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 48LL))(
                        v23,
                        &PKEY_MonitorOutput,
                        v29);
                v3 = v19;
                if ( v19 >= 0 )
                  v3 = 0;
                else
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x7FA,
                    (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
                    (const char *)(unsigned int)v19);
                PropVariantClear(v29);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x7F3,
                  (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
                  (const char *)(unsigned int)v17);
              }
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v35);
              PropVariantClear(pvar);
              goto LABEL_35;
            }
LABEL_22:
            PropVariantClear(pvar);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
            if ( ++v9 >= v32 )
              goto LABEL_23;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7DF,
            (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
            (const char *)(unsigned int)v11);
LABEL_37:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
        }
        else
        {
LABEL_23:
          v3 = 0;
        }
        goto LABEL_24;
      }
      v8 = 2010LL;
    }
    else
    {
      v8 = 2007LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
      (const char *)(unsigned int)v7);
LABEL_24:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7BC,
    (__int64)"avcore\\audiocore\\capturemonitor\\monitor.cpp",
    (const char *)(unsigned int)v2);
LABEL_40:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  return (unsigned int)v3;
}

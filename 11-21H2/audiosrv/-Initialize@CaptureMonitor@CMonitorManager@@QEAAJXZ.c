/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011C220
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x180119EE8 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011B92C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18004D0F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800DB994 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1800DB9E4 (WPP_SF_qqq.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x180118EBC (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x180119EAC (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     WPP_SF_dD @ 0x18011F9B0 (WPP_SF_dD.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180120400 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(char *pv)
{
  char *v1; // rsi
  __int64 v2; // rax
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  _QWORD *v7; // rdx
  struct IMMDevice *v8; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // rdx
  struct IMMDevice *v16; // rbx
  HRESULT (__stdcall *v17)(IMMDevice *, LPWSTR *); // rdi
  LPVOID v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  CEndpointStoreCache *v21; // rcx
  struct _SECURITY_ATTRIBUTES *v22; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  ATL::CAtlException *v27; // rbx
  struct IMMDevice *v28; // [rsp+30h] [rbp-68h] BYREF
  void *v29; // [rsp+38h] [rbp-60h] BYREF
  void *Src; // [rsp+40h] [rbp-58h] BYREF
  __int64 v31; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v32; // [rsp+50h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v34; // [rsp+68h] [rbp-30h]
  bool v36; // [rsp+A8h] [rbp+10h] BYREF
  LPVOID v37; // [rsp+B0h] [rbp+18h]
  struct IMMDevice *v38; // [rsp+B8h] [rbp+20h] BYREF

  v1 = pv;
  v28 = 0LL;
  v38 = 0LL;
  Src = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v34 = 0LL;
  v2 = *((_QWORD *)pv + 25);
  if ( !v2 || *(_DWORD *)(v2 + 56) == 6 )
  {
    v4 = *(__int64 **)(*((_QWORD *)pv + 24) + 64LL);
    v5 = *v4;
    if ( *((_QWORD *)v1 + 9) )
    {
      v7 = v1 + 56;
      if ( *((_QWORD *)v1 + 10) >= 8uLL )
        v7 = (_QWORD *)*v7;
      v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IMMDevice **))(v5 + 40))(v4, v7, &v28);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, struct IMMDevice **))(v5 + 32))(v4, 1LL, 0LL, &v28);
    }
    v3 = v6;
    if ( v6 < 0 )
      goto LABEL_62;
    v8 = v28;
    GetId = v28->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &Src,
      0LL);
    v3 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(v8, &Src);
    if ( v3 < 0 )
      goto LABEL_62;
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( *((_WORD *)Src + v11) );
    std::wstring::assign((void **)v1 + 16, Src, v11);
    v12 = *(__int64 **)(*((_QWORD *)v1 + 24) + 64LL);
    v13 = *v12;
    if ( *((_QWORD *)v1 + 13) )
    {
      v15 = v1 + 88;
      if ( *((_QWORD *)v1 + 14) >= 8uLL )
        v15 = (_QWORD *)*v15;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IMMDevice **))(v13 + 40))(v12, v15, &v38);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, struct IMMDevice **))(v13 + 32))(v12, 0LL, 0LL, &v38);
    }
    v3 = v14;
    if ( v14 < 0 )
      goto LABEL_62;
    v16 = v38;
    v17 = v38->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v29,
      0LL);
    v3 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))v17)(v16, &v29);
    if ( v3 < 0 )
      goto LABEL_62;
    do
      ++v10;
    while ( *((_WORD *)v29 + v10) );
    std::wstring::assign((void **)v1 + 20, v29, v10);
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))v28->lpVtbl->OpenPropertyStore)(v28, 0LL, &v31) < 0 )
      goto LABEL_69;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
           v31,
           &PKEY_MonitorStreamCategory,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      if ( LODWORD(pvar[1]) >= 0x18 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x56u,
            (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            (int)pvar[1]);
        }
      }
      else
      {
        *((_DWORD *)v1 + 30) = pvar[1];
      }
    }
    v18 = operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    v37 = v18;
    if ( v18 )
      v19 = CMonitor::CMonitor((__int64)v18, *((_DWORD *)v1 + 30), v1[49] == 0);
    else
      v19 = 0LL;
    v20 = *((_QWORD *)v1 + 25);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    *((_QWORD *)v1 + 25) = v19;
    if ( v19 )
    {
      v3 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v38->lpVtbl->Activate)(
             v38,
             &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
             1LL);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 24LL))(*((_QWORD *)v1 + 5), v1);
        if ( v3 >= 0 )
        {
          v1[48] = 1;
          try
          {
            ATL::CEvent::Create((ATL::CEvent *)(v1 + 32), v22);
          }
          catch ( ATL::CAtlException *v32 )
          {
            v27 = v32;
            if ( *(_DWORD *)v32 == -1073741571 )
              _o__resetstkoflw();
            LODWORD(v37) = *(_DWORD *)v27;
            v3 = (int)v37;
            v1 = pv;
            if ( (int)v37 < 0 )
              goto LABEL_62;
          }
          ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v1, 0LL);
          *((_QWORD *)v1 + 2) = ThreadpoolWait;
          if ( ThreadpoolWait )
          {
            SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)v1 + 4), 0LL);
            *(_QWORD *)(*((_QWORD *)v1 + 25) + 280LL) = *((_QWORD *)v1 + 4);
            if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x58u,
                (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
                v1,
                *((_QWORD *)v1 + 25));
            }
            v3 = CMonitor::Initialize(*((CMonitor **)v1 + 25), v28, v38, 0x3Cu, &v36);
            if ( v3 >= 0 )
            {
              if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x5Au,
                  (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
                  v1,
                  v1,
                  *((_QWORD *)v1 + 25));
              }
              *(_QWORD *)(*((_QWORD *)v1 + 24) + 304LL) = 0LL;
              *((_DWORD *)v1 + 6) = 0;
              goto LABEL_69;
            }
            v21 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v24, v25, (unsigned int)v3, v36);
              v21 = WPP_GLOBAL_Control;
            }
            if ( !v36 )
            {
              v3 = 1;
LABEL_69:
              PropVariantClear(pvar);
              goto LABEL_70;
            }
            goto LABEL_63;
          }
          v3 = -2147024882;
        }
      }
    }
    else
    {
      v3 = -2147024882;
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CEndpointStoreCache *)&WPP_GLOBAL_Control )
      {
LABEL_67:
        if ( v1[48] )
        {
          (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 32LL))(*((_QWORD *)v1 + 5), v1);
          v1[48] = 0;
        }
        goto LABEL_69;
      }
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
      {
LABEL_63:
        if ( v21 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v21 + 7) & 0x800000) != 0
          && *((_BYTE *)v21 + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)v21 + 2), 0x5Bu, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v3);
        }
        goto LABEL_67;
      }
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x57u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
    }
LABEL_62:
    v21 = WPP_GLOBAL_Control;
    goto LABEL_63;
  }
  PropVariantClear(pvar);
  v3 = -2147023649;
LABEL_70:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v29);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&Src);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
  return (unsigned int)v3;
}

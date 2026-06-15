/*
 * XREFs of ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011A114
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18011AAF8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x18011BBAC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011D790 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800518C8 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??0CreateMonitorContext@@QEAA@PEAUIMMDevice@@PEAVCMonitorManager@@@Z @ 0x180119364 (--0CreateMonitorContext@@QEAA@PEAUIMMDevice@@PEAVCMonitorManager@@@Z.c)
 *     ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x180119A60 (--_GCreateMonitorContext@@QEAAPEAXI@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180121490 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  signed int v4; // ebx
  int v5; // eax
  CreateMonitorContext *v6; // rax
  CreateMonitorContext *MonitorContext; // rax
  CreateMonitorContext *v8; // rdi
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  int v12; // [rsp+58h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x42u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
  }
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v14);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v12);
    if ( v4 >= 0 )
    {
      v5 = v12;
      if ( v12 == 1 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(a2, (unsigned __int16 **)&pv, 0LL) )
        {
LABEL_12:
          v6 = (CreateMonitorContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v6
            && (MonitorContext = CreateMonitorContext::CreateMonitorContext(v6, a2, this), (v8 = MonitorContext) != 0LL) )
          {
            ThreadpoolWork = CreateThreadpoolWork(
                               CMonitorManager::CreateMonitorIfAppropriateWorker,
                               MonitorContext,
                               0LL);
            *((_QWORD *)v8 + 2) = ThreadpoolWork;
            if ( ThreadpoolWork )
            {
              SubmitThreadpoolWork(ThreadpoolWork);
            }
            else
            {
              LastError = GetLastError();
              v4 = LastError;
              if ( LastError > 0 )
                v4 = (unsigned __int16)LastError | 0x80070000;
              if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x43u,
                  (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
                  v4);
              }
              CreateMonitorContext::`scalar deleting destructor'(v8);
            }
          }
          else
          {
            v4 = -2147024882;
          }
          goto LABEL_24;
        }
        v5 = v12;
      }
      if ( v5 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, (unsigned __int16 **)&pv) )
        goto LABEL_24;
      goto LABEL_12;
    }
  }
LABEL_24:
  CoTaskMemFree(pv);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return (unsigned int)v4;
}

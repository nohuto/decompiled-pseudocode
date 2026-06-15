/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011EA0C
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18011BED8 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011CF68 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x18011F000 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_SS @ 0x1800DDE2C (WPP_SF_SS.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x18011F830 (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180120400 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180123644 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180124120 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // edi
  _QWORD *v3; // rax
  const wchar_t *v4; // r9
  char *v5; // r14
  char *v6; // rdx
  char *v7; // rsi
  char *v8; // rdx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // r8d
  bool *v14; // [rsp+20h] [rbp-38h]
  bool v15; // [rsp+60h] [rbp+8h] BYREF
  struct IMMDevice *v16; // [rsp+68h] [rbp+10h] BYREF
  struct IMMDevice *v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 25) + 56LL) != 3 && !*((_BYTE *)this + 12) )
  {
    v17 = 0LL;
    v16 = 0LL;
    SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = (_QWORD *)((char *)this + 160);
      if ( *((_QWORD *)this + 23) >= 8uLL )
        v3 = (_QWORD *)*v3;
      v4 = (const wchar_t *)((char *)this + 128);
      if ( *((_QWORD *)this + 19) >= 8uLL )
        v4 = *(const wchar_t **)v4;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Bu,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v4,
        (__int64)v3);
    }
    v5 = (char *)this + 128;
    v6 = (char *)this + 128;
    if ( *((_QWORD *)this + 19) >= 8uLL )
      v6 = *(char **)v5;
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 24) + 64LL)
                                                                        + 40LL))(
           *(_QWORD *)(*((_QWORD *)this + 24) + 64LL),
           v6,
           &v17);
    if ( v2 >= 0 )
    {
      v7 = (char *)this + 160;
      v8 = (char *)this + 160;
      if ( *((_QWORD *)this + 23) >= 8uLL )
        v8 = *(char **)v7;
      v2 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IMMDevice **))(**(_QWORD **)(*((_QWORD *)this + 24) + 64LL)
                                                                          + 40LL))(
             *(_QWORD *)(*((_QWORD *)this + 24) + 64LL),
             v8,
             &v16);
      if ( v2 >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x3Cu,
            (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            this);
        }
        v9 = CMonitor::Initialize(*((CMonitor **)this + 25), v17, v16, 0x3Cu, &v15);
        v2 = v9;
        if ( v9 < 0 )
        {
          v11 = (int)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(v14) = v9;
            WPP_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x3Eu,
              (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
              this,
              v14);
          }
          v12 = ++*((_DWORD *)this + 6);
          if ( v12 > *(_DWORD *)(*((_QWORD *)this + 24) + 328LL) )
          {
            *((_BYTE *)this + 12) = 1;
            if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
            {
              if ( *((_QWORD *)this + 23) >= 8uLL )
                v7 = *(char **)v7;
              if ( *((_QWORD *)this + 19) >= 8uLL )
                v5 = *(char **)v5;
              McTemplateU0qzz_EtwEventWriteTransfer(v11, v10, v12, (_DWORD)v5, (__int64)v7);
            }
          }
          CMonitor::Terminate(*((CMonitor **)this + 25), 1, 0LL);
          v2 = 0;
        }
        else
        {
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x3Du,
              (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
              this);
          }
          *(_QWORD *)(*((_QWORD *)this + 24) + 304LL) = 0LL;
          *((_DWORD *)this + 6) = 0;
          CMonitor::Start(*((CMonitor **)this + 25));
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v2 < 0
      && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Fu,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v2);
    }
  }
  return (unsigned int)v2;
}

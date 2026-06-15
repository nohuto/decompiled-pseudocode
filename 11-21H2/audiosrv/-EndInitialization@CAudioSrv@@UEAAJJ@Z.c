/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180050BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180043B14 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180050E1C (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ??$?4VCStreamConnectionManager@@@?$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VCStreamConnectionManager@@@1@@Z @ 0x18005D374 (--$-4VCStreamConnectionManager@@@-$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV-$sh.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800C60FC (McTemplateU0zq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, signed int a2)
{
  signed int LastError; // ebx
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx
  PVOID Ptr; // rdx
  __int64 v8; // rcx
  signed int pvData; // [rsp+40h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-1h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp+7h] BYREF
  RTL_SRWLOCK v12[2]; // [rsp+58h] [rbp+Fh] BYREF
  char v13[32]; // [rsp+68h] [rbp+1Fh] BYREF
  signed int *p_pvData; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+90h] [rbp+47h]
  int v16; // [rsp+94h] [rbp+4Bh]

  SecurityDescriptor = 0LL;
  LastError = a2;
  if ( !a2 )
  {
    if ( *((_QWORD *)this + 25)
      || (v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool + 56LL))(
                 ThreadPool,
                 CAudioSrv::OnDeviceWorkItem,
                 this),
          (*((_QWORD *)this + 25) = v4) != 0LL)
      || (LastError = GetLastError()) == 0 )
    {
      LastError = (*(__int64 (__fastcall **)(LPVOID, unsigned __int64))(*(_QWORD *)g_DeviceEnumerator + 48LL))(
                    g_DeviceEnumerator,
                    ((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
      if ( LastError < 0 )
        goto LABEL_26;
      *((_DWORD *)this + 27) = 1;
    }
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054"
             "893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
            1u,
            &SecurityDescriptor,
            0LL) )
      LastError = GetLastError();
    if ( !LastError )
    {
      LastError = StartRpcServer((unsigned __int16 *)this, L"Audiosrv", &unk_1801670C0, SecurityDescriptor);
      *((_DWORD *)this + 14) = LastError == 0;
      if ( !LastError )
      {
        LastError = StartRpcServer((unsigned __int16 *)this, L"PlaybackManagerRpc", &unk_180167060, 0LL);
        *((_DWORD *)this + 15) = LastError == 0;
        if ( !LastError )
        {
          LastError = StartRpcServer((unsigned __int16 *)this, L"AudioSrvDiagnosticsRpc", &unk_180167120, 0LL);
          *((_DWORD *)this + 16) = LastError == 0;
          if ( !LastError )
          {
            LastError = StartRpcServer(
                          (unsigned __int16 *)this,
                          L"SpatialSoundDataManagerRpc",
                          &unk_180167000,
                          SecurityDescriptor);
            *((_DWORD *)this + 17) = LastError == 0;
            if ( !LastError )
            {
              pcbData = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                     L"EnableCaptureMonitor",
                     0x18u,
                     0LL,
                     &pvData,
                     &pcbData)
                || pvData )
              {
                CStreamConnectionManagerImpl::GetInstance(v12);
                v5 = qword_1801C2E80;
                Ptr = v12[0].Ptr;
                g_streamMonitorManager = (__int64)v12[0].Ptr;
                qword_1801C2E80 = (std::_Ref_count_base *)v12[1].Ptr;
                if ( v5 )
                {
                  std::_Ref_count_base::_Decref(v5);
                  Ptr = (PVOID)g_streamMonitorManager;
                }
                if ( Ptr )
                {
                  std::weak_ptr<CStreamConnectionManager>::operator=<CStreamConnectionManager>();
                }
                else if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                {
                  McTemplateU0zq_EtwEventWriteTransfer(v5, 0LL, L"ListenTo", 0LL);
                }
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
  }
LABEL_26:
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 2u
    && (*(_QWORD *)(v8 + 16) & 0x400000000080LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x400000000080LL) == *(_QWORD *)(v8 + 24) )
  {
    v16 = 0;
    p_pvData = &pvData;
    pvData = LastError;
    v15 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer(v8, byte_18018818F, 0LL, 0LL, 3, (__int64)v13);
  }
LABEL_19:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)LastError;
}

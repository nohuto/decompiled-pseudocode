/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180059A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180059CCC (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ??$?4VCStreamConnectionManager@@@?$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VCStreamConnectionManager@@@1@@Z @ 0x18005A024 (--$-4VCStreamConnectionManager@@@-$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV-$sh.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005A178 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800F0FE0 (McTemplateU0zq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, signed int a2)
{
  signed int LastError; // ebx
  __int64 v4; // rax
  unsigned __int16 *v5; // rcx
  unsigned __int16 *v6; // rcx
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  signed int pvData; // [rsp+40h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-1h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp+Fh] BYREF
  char v19[32]; // [rsp+68h] [rbp+1Fh] BYREF
  signed int *p_pvData; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+90h] [rbp+47h]
  int v22; // [rsp+94h] [rbp+4Bh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  SecurityDescriptor = 0LL;
  LastError = a2;
  if ( !a2 )
  {
    if ( *((_QWORD *)this + 25)
      || (v4 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool + 56LL))(
                 ThreadPool,
                 CAudioSrv::OnDeviceWorkItem,
                 this),
          (*((_QWORD *)this + 25) = v4) != 0LL)
      || (LastError = GetLastError()) == 0 )
    {
      LastError = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int64))g_DeviceEnumerator->lpVtbl->RegisterEndpointNotificationCallback)(
                    g_DeviceEnumerator,
                    ((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
      if ( LastError < 0 )
        goto LABEL_21;
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
      LastError = StartRpcServer(v5, L"Audiosrv", &unk_18016ED20, SecurityDescriptor);
      *((_DWORD *)this + 14) = LastError == 0;
      if ( !LastError )
      {
        LastError = StartRpcServer(v6, L"PlaybackManagerRpc", &unk_18016ECC0, 0LL);
        *((_DWORD *)this + 15) = LastError == 0;
        if ( !LastError )
        {
          LastError = StartRpcServer(v7, L"AudioSrvDiagnosticsRpc", &unk_18016EC60, 0LL);
          *((_DWORD *)this + 16) = LastError == 0;
          if ( !LastError )
          {
            LastError = StartRpcServer(v8, L"SpatialSoundDataManagerRpc", &unk_18016EC00, SecurityDescriptor);
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
                CStreamConnectionManagerImpl::GetInstance(v18);
                v9 = qword_1801D01E8;
                v10 = v18[0];
                g_streamMonitorManager = v18[0];
                qword_1801D01E8 = (std::_Ref_count_base *)v18[1];
                if ( v9 )
                {
                  std::_Ref_count_base::_Decref(v9);
                  v10 = g_streamMonitorManager;
                }
                if ( v10 )
                {
                  std::weak_ptr<CStreamConnectionManager>::operator=<CStreamConnectionManager>();
                }
                else if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                {
                  McTemplateU0zq_EtwEventWriteTransfer(v9, 0LL, L"ListenTo", 0LL);
                }
              }
            }
          }
        }
      }
    }
    v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 416LL))(g_PolicyManager);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x34A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v11);
LABEL_21:
    if ( !LastError )
      goto LABEL_22;
  }
  v13 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    (__int64)this,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v13 > 2u && tlgKeywordOn((__int64)v13, 0x400000000080LL) )
  {
    v22 = 0;
    p_pvData = &pvData;
    pvData = LastError;
    v21 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer(v14, byte_180191C58, 0LL, 0LL, 3, (__int64)v19);
  }
LABEL_22:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)LastError;
}

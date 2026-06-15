/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001575C
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400192A0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14001C290 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x140015800 (-GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x140015910 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140015A20 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x14005B90C (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CPipeInstance **this, struct CPipeInstance *a2, bool a3)
{
  int v5; // ebx
  CAudioDeviceGraph *v7; // rcx
  CAudioDeviceGraph *v8; // rcx
  struct IVirtualSurround *v9; // [rsp+20h] [rbp-10h] BYREF
  struct ISpatialAudioStreamProcessor *v10; // [rsp+28h] [rbp-8h] BYREF
  struct IAdaptiveSpatialAudioRenderer *v11; // [rsp+50h] [rbp+20h] BYREF
  struct ISpatialAudioProcessBlockRT *v12; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(this[20], &v11) >= 0 )
  {
    v10 = 0LL;
    if ( (int)CPipeInstance::GetSpatialAudioStreamProcessor(a2, &v10) < 0 )
      goto LABEL_3;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct ISpatialAudioStreamProcessor *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v10 + 24LL))(
           v10,
           &v12);
    if ( v5 >= 0 )
      v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v7, v12, v11, a3);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v12);
    if ( v5 >= 0 )
    {
LABEL_3:
      v9 = 0LL;
      if ( (int)CPipeInstance::GetVirtualSurroundAPO(a2, &v9) >= 0 )
      {
        v12 = 0LL;
        v5 = (*(__int64 (__fastcall **)(struct IVirtualSurround *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v9 + 24LL))(
               v9,
               &v12);
        if ( v5 >= 0 )
          v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v8, v12, v11, a3);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v12);
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v9);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v10);
    if ( v5 < 0 )
      AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x542u, v5);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
  return (unsigned int)v5;
}

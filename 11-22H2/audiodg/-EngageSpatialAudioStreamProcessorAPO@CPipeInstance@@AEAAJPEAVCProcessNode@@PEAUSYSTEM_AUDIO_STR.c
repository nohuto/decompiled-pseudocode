/*
 * XREFs of ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140004F38
 * Callers:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140004E20 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphOb.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14001FDC0 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::EngageSpatialAudioStreamProcessorAPO(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3)
{
  int v4; // edi
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  struct ISpatialAudioStreamProcessor *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)a3 + 34) & 0x800000) != 0 )
  {
    v10 = 0LL;
    if ( (int)CPipeInstance::GetSpatialAudioStreamProcessor(this, &v10) >= 0 )
    {
      v6 = (__int64 *)*((_QWORD *)a2 + 4);
      if ( v6 )
      {
        v7 = *v6;
        v8[0] = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v4 = 0;
        if ( v7 )
        {
          v9 = 0LL;
          v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
                 v7,
                 &GUID_b307a9fd_ddc2_45d8_87e5_48eb6002d4a3,
                 &v9);
          if ( v4 >= 0 )
            v4 = (*(__int64 (__fastcall **)(struct ISpatialAudioStreamProcessor *, __int64))(*(_QWORD *)v10 + 32LL))(
                   v10,
                   v9);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v9);
        }
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v8);
      }
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v10);
    if ( v4 < 0 )
      AudDGTraceLoggingErrorHelper("CPipeInstance::EngageSpatialAudioStreamProcessorAPO", 0x432u, v4);
  }
  return (unsigned int)v4;
}

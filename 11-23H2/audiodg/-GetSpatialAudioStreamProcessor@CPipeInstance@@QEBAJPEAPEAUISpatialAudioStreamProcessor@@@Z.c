/*
 * XREFs of ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14001FDC0
 * Callers:
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140004F38 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001FCC4 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B440 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetSpatialAudioStreamProcessor(
        CPipeInstance *this,
        struct ISpatialAudioStreamProcessor **a2)
{
  unsigned int v3; // ebx
  struct IAudioProcessingObject *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a, 0LL, 0LL, &v5, 0LL);
  if ( v5 )
    v3 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct ISpatialAudioStreamProcessor **))v5->lpVtbl->QueryInterface)(
           v5,
           &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
           a2);
  else
    v3 = -2147023728;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v5);
  return v3;
}

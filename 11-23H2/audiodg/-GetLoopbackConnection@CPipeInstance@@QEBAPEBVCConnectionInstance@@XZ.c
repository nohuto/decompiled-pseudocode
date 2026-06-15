/*
 * XREFs of ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CB80
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400131E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005EF60 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14005FFE0 (-RemovePipeFromLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400671D0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400689F0 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B440 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetLoopbackConnection(CPipeInstance *this)
{
  CPipeInstance *v1; // rbx
  const struct CConnectionInstance *result; // rax
  struct CConnectionInstance *v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  if ( *((_DWORD *)this + 53) )
    return (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal((__int64)this, 1);
  v3 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, 0LL, &v3, 0LL, 0LL);
  result = v3;
  if ( !v3 )
  {
    v3 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(v1, &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693, 0LL, &v3, 0LL, 0LL);
    result = v3;
    if ( !v3 )
    {
      this = v1;
      return (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal((__int64)this, 1);
    }
  }
  return result;
}

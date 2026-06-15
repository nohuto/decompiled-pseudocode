/*
 * XREFs of ?GetMixerAPOConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002B5AC
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400085F0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B440 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetMixerAPOConnection(CPipeInstance *this)
{
  const struct CConnectionInstance *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_c23bdc7a_47f8_49a1_b750_692c35b532c3, 0LL, &v2, 0LL, 0LL);
  return v2;
}

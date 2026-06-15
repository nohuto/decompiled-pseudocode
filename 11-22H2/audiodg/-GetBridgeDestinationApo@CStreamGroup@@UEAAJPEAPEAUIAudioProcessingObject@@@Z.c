/*
 * XREFs of ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400640B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B47C (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

__int64 __fastcall CStreamGroup::GetBridgeDestinationApo(CStreamGroup *this, struct IAudioProcessingObject **a2)
{
  CPipeInstance *v2; // rcx

  *a2 = 0LL;
  v2 = (CPipeInstance *)*((_QWORD *)this + 5);
  if ( v2 )
    CPipeInstance::GetAPONodeAndConnection(v2, &GUID_25385759_3236_4101_a943_25693dfb5d2d, 0LL, 0LL, a2, 0LL);
  return 0LL;
}

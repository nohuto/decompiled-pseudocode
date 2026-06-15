/*
 * XREFs of ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015694
 * Callers:
 *     ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14001504C (-Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAU.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015CD0 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CSystemEffectWrapper@@QEAA@XZ @ 0x140015724 (--0CSystemEffectWrapper@@QEAA@XZ.c)
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015864 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 */

__int64 __fastcall CSystemEffectWrapper::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  void *v10; // rax
  int v11; // r8d
  CSystemEffectWrapper *v12; // rax
  CSystemEffectWrapper *v13; // rax
  __int64 v14; // r8

  v10 = (void *)AERTGetDLLRTHeap();
  v12 = (CSystemEffectWrapper *)AERTAllocate(0x128uLL, v10, v11);
  if ( v12 && (v13 = CSystemEffectWrapper::CSystemEffectWrapper(v12)) != 0LL )
    return CSystemEffectWrapper::Init(v13, a1, v14, a3, a4, a5, a6, a7);
  else
    return 2147942414LL;
}

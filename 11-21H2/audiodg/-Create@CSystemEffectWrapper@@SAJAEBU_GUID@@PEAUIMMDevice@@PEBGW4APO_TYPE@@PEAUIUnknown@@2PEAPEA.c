/*
 * XREFs of ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140011C40
 * Callers:
 *     ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@PEAPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14000D8B0 (-Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAU.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140017E50 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x1400119CC (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ??0CSystemEffectWrapper@@QEAA@XZ @ 0x140011CD0 (--0CSystemEffectWrapper@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemEffectWrapper::Create(
        const IID *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  void *v10; // rax
  int v11; // r8d
  CSystemEffectWrapper *v12; // rax
  CSystemEffectWrapper *v13; // rax
  __int64 v14; // r8

  v10 = (void *)AERTGetDLLRTHeap();
  v12 = (CSystemEffectWrapper *)AERTAllocate(0x108uLL, v10, v11);
  if ( v12 && (v13 = CSystemEffectWrapper::CSystemEffectWrapper(v12)) != 0LL )
    return CSystemEffectWrapper::Init((__int64)v13, a1, v14, a3, a4, a5, a6, a7);
  else
    return 2147942414LL;
}

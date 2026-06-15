/*
 * XREFs of ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18002AD54
 * Callers:
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 * Callees:
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800295A0 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180030F38 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSystemEffectClsidsForMode(
        __int64 a1,
        __int128 *a2,
        int a3,
        _DWORD *a4,
        void *pv,
        unsigned int a6)
{
  __int64 ChainDescriptorForMode; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  void *v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15 = *a2;
  ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode(a1, &v15, a6);
  if ( !ChainDescriptorForMode && a3 == 1 )
    ChainDescriptorForMode = *(_QWORD *)(a1 + 16);
  *a4 = 0;
  v10 = pv;
  if ( pv )
    *(_QWORD *)pv = 0LL;
  if ( !ChainDescriptorForMode )
    return 0LL;
  v11 = 56LL;
  if ( a3 != 1 )
    v11 = 40LL;
  if ( !v10 || (v12 = *(int *)(v11 + ChainDescriptorForMode + 8), (int)v12 <= 0) )
  {
LABEL_11:
    *a4 = *(_DWORD *)(v11 + ChainDescriptorForMode + 8);
    return 0LL;
  }
  pv = 0LL;
  if ( ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v12) )
  {
    v13 = pv;
    memcpy_0(pv, *(const void **)(v11 + ChainDescriptorForMode), 16LL * *(int *)(v11 + ChainDescriptorForMode + 8));
    *v10 = v13;
    CoTaskMemFree(0LL);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x270,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v15);
  CoTaskMemFree(pv);
  return 2147942414LL;
}

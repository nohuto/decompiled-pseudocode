/*
 * XREFs of ?QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002E7A0
 * Callers:
 *     ?QueryInterface@CCompositeSystemEffect@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077BB0 (-QueryInterface@CCompositeSystemEffect@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077BD0 (-QueryInterface@CCompositeSystemEffect@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077BF0 (-QueryInterface@CCompositeSystemEffect@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077C10 (-QueryInterface@CCompositeSystemEffect@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077C30 (-QueryInterface@CCompositeSystemEffect@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeSystemEffect@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077C50 (-QueryInterface@CCompositeSystemEffect@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002B378 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UICompositeSystemEffec.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$ChainedAposSupportInterface@UIApoAcousticEchoCancellation@@@CCompositeSystemEffect@@AEAA_NXZ @ 0x1800467BC (--$ChainedAposSupportInterface@UIApoAcousticEchoCancellation@@@CCompositeSystemEffect@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ChainedAposSupportInterface@UIApoAuxiliaryInputConfiguration@@@CCompositeSystemEffect@@AEAA_NXZ @ 0x180156060 (--$ChainedAposSupportInterface@UIApoAuxiliaryInputConfiguration@@@CCompositeSystemEffect@@AEAA_N.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::QueryInterface(
        CCompositeSystemEffect *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int CanCastTo; // ebx
  char v10; // al

  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
    if ( v7 )
      goto LABEL_7;
    v10 = CCompositeSystemEffect::ChainedAposSupportInterface<IApoAuxiliaryInputConfiguration>();
  }
  else
  {
    v10 = CCompositeSystemEffect::ChainedAposSupportInterface<IApoAcousticEchoCancellation>();
  }
  if ( !v10 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
LABEL_7:
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a3 = this;
    (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)this + 8LL))(this);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration>::CanCastTo(
                  (__int64)this,
                  a2);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  return (unsigned int)CanCastTo;
}

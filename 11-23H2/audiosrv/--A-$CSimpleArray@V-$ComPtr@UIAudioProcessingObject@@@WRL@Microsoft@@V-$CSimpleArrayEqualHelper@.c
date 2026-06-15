/*
 * XREFs of ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18002D0E0
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002B6B0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?ForEachInitializedApoInterface@CCompositeSystemEffect@@UEAAJ$$QEAV?$function@$$A6AJPEAUIAudioProcessingObject@@U_GUID@@I@Z@std@@@Z @ 0x18002D010 (-ForEachInitializedApoInterface@CCompositeSystemEffect@@UEAAJ$$QEAV-$function@$$A6AJPEAUIAudioPr.c)
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180063450 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800655F0 (-GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180156A10 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x180156CE0 (-GetFormat@CCompositeSystemEffect@@UEAAJIPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z @ 0x180156DA0 (-GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z.c)
 *     ?GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z @ 0x180156E50 (-GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180156F10 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0F78 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    JUMPOUT(0x18002D107LL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}

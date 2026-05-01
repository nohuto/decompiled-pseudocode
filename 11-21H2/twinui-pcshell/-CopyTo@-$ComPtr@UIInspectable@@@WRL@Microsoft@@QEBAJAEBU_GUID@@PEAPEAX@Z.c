/*
 * XREFs of ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE1DC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800ADBC0 (-CreateInstance@-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE06C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CFE20 (-CreateInstance@-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 *     ?CreateInstance@?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180140EA0 (-CreateInstance@-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@UEAAJ.c)
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180448E50 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180448EE0 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 *     ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804491B4 (-GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager.c)
 *     ?GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805383C0 (-GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetView@CSimpleTempAppVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18053A470 (-GetView@CSimpleTempAppVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetViewInternal@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180619300 (-GetViewInternal@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetView@CAppLayoutOperationItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18061A360 (-GetView@CAppLayoutOperationItem@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
}

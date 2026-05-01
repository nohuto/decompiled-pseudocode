/*
 * XREFs of ?CopyTo@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801177C8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180108700 (-CreateInstance@-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 *     ?CreateInstance@?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180114360 (-CreateInstance@-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180117658 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@?$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18017F250 (-CreateInstance@-$SimpleClassFactory@VRemoteLauncherForegroundHandler@@$0A@@WRL@Microsoft@@UEAAJ.c)
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_b150c4128798bf8cae8961d745166767___ @ 0x18021106C (ShellPositionerManager--DoWorkForEachMonitor__lambda_b150c4128798bf8cae8961d745166767___.c)
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804FEC90 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1804FED20 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 *     ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804FF004 (-GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager.c)
 *     ?GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F3160 (-GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetView@CSimpleTempAppVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F5210 (-GetView@CSimpleTempAppVisual@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetViewInternal@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180797C90 (-GetViewInternal@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetView@CAppLayoutOperationItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180798D20 (-GetView@CAppLayoutOperationItem@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
}

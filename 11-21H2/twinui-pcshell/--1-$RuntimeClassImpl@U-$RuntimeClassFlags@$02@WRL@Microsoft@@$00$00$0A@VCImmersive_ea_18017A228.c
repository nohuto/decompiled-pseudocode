/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18017A228
 * Callers:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1800E35DC (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803867F0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponen_ea_1803867F0.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[20];
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v2));
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 6));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 1));
}

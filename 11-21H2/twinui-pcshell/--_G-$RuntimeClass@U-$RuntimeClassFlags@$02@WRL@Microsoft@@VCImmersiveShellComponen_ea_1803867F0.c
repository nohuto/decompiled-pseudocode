/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803867F0
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@WDA@EAAPEAXI@Z @ 0x1801F5620 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponen_ea_1801F5620.c)
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18017A228 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersive_ea_18017A228.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

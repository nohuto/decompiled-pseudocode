/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180382A64
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@WRL@Microsoft@@WDA@EAAPEAXI@Z @ 0x1801F5000 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponen_ea_1801F5000.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180382870 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersive_ea_180382870.c)
 */

__int64 *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

/*
 * XREFs of ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18012D864
 * Callers:
 *     ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x18012D828 (--_GPrivilegedOperationsService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180143B80 (-InternalRelease@-$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18014731C (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18015181C (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18017D2DC (-InternalRelease@-$ComPtr@VPrivilegedWindowingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18017D304 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedArrangementOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18017D32C (-InternalRelease@-$ComPtr@VCPrivilegedArrangementOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18017D354 (-InternalRelease@-$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PrivilegedOperationsService::~PrivilegedOperationsService(PrivilegedOperationsService *this)
{
  char *v1; // rbx

  PrivilegedOperationsService::s_this = 0LL;
  *(_QWORD *)this = &PrivilegedOperationsService::`vftable'{for `IInspectable'};
  v1 = (char *)this + 168;
  *((_QWORD *)this + 1) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &PrivilegedOperationsService::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &PrivilegedOperationsService::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &PrivilegedOperationsService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<CPrivilegedDesktopOperations>::InternalRelease((char *)this + 248);
  Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(v1 + 72);
  Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease(v1 + 64);
  Microsoft::WRL::ComPtr<CPrivilegedArrangementOperations>::InternalRelease(v1 + 56);
  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(v1 + 48);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 40);
  Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease(v1 + 32);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 24);
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(v1 + 16);
  Microsoft::WRL::ComPtr<PrivilegedWindowingOperations>::InternalRelease(v1 + 8);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(v1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>(this);
}

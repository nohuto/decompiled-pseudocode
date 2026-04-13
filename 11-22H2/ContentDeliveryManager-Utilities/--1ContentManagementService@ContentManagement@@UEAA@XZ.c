/*
 * XREFs of ??1ContentManagementService@ContentManagement@@UEAA@XZ @ 0x18004850C
 * Callers:
 *     ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x1800488B0 (--_GContentManagementService@ContentManagement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x1800552F4 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 */

void __fastcall ContentManagement::ContentManagementService::~ContentManagementService(
        ContentManagement::ContentManagementService *this)
{
  volatile int *v2; // rdx

  *(_QWORD *)this = &ContentManagement::ContentManagementService::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 5) = &ContentManagement::ContentManagementService::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 7) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessLockScreenEvent'};
  *((_QWORD *)this + 8) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 9) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessContextualSuggestionsEvent'};
  *((_QWORD *)this + 10) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 11) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::ILockScreenRegistrySettingProvider'};
  *((_QWORD *)this + 12) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ITaskBarAppProperties>'};
  ContentManagement::ContentManagementService::CloseConnection(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>(
    (__int64)this,
    v2);
}

/*
 * XREFs of ?IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@SA@XZ @ 0x1801EDAC0
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies::IsWebSearchProvidersThirdPartyExtensionsEnabled(
        void)
{
  return winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics,_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_>();
}

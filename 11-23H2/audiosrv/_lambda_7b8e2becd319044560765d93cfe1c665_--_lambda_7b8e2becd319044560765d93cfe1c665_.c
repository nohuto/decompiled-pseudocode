/*
 * XREFs of _lambda_7b8e2becd319044560765d93cfe1c665_::_lambda_7b8e2becd319044560765d93cfe1c665_ @ 0x18006B058
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD28 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_7b8e2becd319044560765d93cfe1c665_::_lambda_7b8e2becd319044560765d93cfe1c665_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}

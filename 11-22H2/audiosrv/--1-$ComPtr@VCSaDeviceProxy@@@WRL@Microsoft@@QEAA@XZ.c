/*
 * XREFs of ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1801047CC
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@AEAPEBU8@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@7@Z @ 0x180010748 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams___&_EndpointCharacteristicsDescriptor___&_IDeviceGraphObjectsStore___enum__AUDCLNT_SHAREMODE_&_unsigned_long_&_SaDeviceResourceParams_&__GUID_const___&__GUID_const___&__::_1_::dtor$2 @ 0x18007901B (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams___-_End.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180012C70 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 */

CSaDeviceProxy *__fastcall Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(CSaDeviceProxy **a1)
{
  CSaDeviceProxy *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CSaDeviceProxy *)CSaDeviceProxy::Release(result);
  }
  return result;
}

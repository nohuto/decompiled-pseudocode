/*
 * XREFs of Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040FB48
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A9A8C (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainAttachDeviceEx @ 0x140525E60 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405262A0 (IommuDomainDetachDeviceEx.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x140829664 (IommupDeviceEnablePasidTaggedDma.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140933D80 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommuDomainAttachPasidDevice @ 0x1409357E0 (IommuDomainAttachPasidDevice.c)
 *     IommuDomainDetachPasidDevice @ 0x1409358E0 (IommuDomainDetachPasidDevice.c)
 *     IommuPasidDeviceCreate @ 0x140935960 (IommuPasidDeviceCreate.c)
 *     IommuPasidDeviceDelete @ 0x140935A20 (IommuPasidDeviceDelete.c)
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x14040FB80 (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_IommuApiPasid__private_featureState & 0x10) != 0 )
    return Feature_Servicing_IommuApiPasid__private_featureState & 1;
  else
    return Feature_Servicing_IommuApiPasid__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_IommuApiPasid__private_featureState,
             3LL);
}

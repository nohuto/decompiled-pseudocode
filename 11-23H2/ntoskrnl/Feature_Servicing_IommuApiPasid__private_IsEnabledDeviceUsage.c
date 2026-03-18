/*
 * XREFs of Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040F968
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403A98AC (HalpIommuAllocateDmaDomain.c)
 *     IommuDomainAttachDeviceEx @ 0x140525910 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x140525D50 (IommuDomainDetachDeviceEx.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x140829364 (IommupDeviceEnablePasidTaggedDma.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140933B80 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommuDomainAttachPasidDevice @ 0x1409355E0 (IommuDomainAttachPasidDevice.c)
 *     IommuDomainDetachPasidDevice @ 0x1409356E0 (IommuDomainDetachPasidDevice.c)
 *     IommuPasidDeviceCreate @ 0x140935760 (IommuPasidDeviceCreate.c)
 *     IommuPasidDeviceDelete @ 0x140935820 (IommuPasidDeviceDelete.c)
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledFallback @ 0x14040F9A0 (Feature_Servicing_IommuApiPasid__private_IsEnabledFallback.c)
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

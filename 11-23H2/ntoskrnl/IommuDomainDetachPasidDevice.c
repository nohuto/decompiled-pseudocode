/*
 * XREFs of IommuDomainDetachPasidDevice @ 0x1409358E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040FB48 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     IommupDomainDetachPasidDevice @ 0x14050EA08 (IommupDomainDetachPasidDevice.c)
 */

__int64 __fastcall IommuDomainDetachPasidDevice(__int64 a1)
{
  if ( (unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() && *(_DWORD *)(a1 + 48) )
    return IommupDomainDetachPasidDevice(a1);
  else
    return 3221225659LL;
}

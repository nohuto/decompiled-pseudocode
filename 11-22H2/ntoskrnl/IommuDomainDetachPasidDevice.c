/*
 * XREFs of IommuDomainDetachPasidDevice @ 0x140935790
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040F1C4 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     IommupDomainDetachPasidDevice @ 0x14050E128 (IommupDomainDetachPasidDevice.c)
 */

__int64 __fastcall IommuDomainDetachPasidDevice(__int64 a1)
{
  if ( (unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() && *(_DWORD *)(a1 + 48) )
    return IommupDomainDetachPasidDevice(a1);
  else
    return 3221225659LL;
}

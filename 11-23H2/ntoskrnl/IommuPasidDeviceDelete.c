/*
 * XREFs of IommuPasidDeviceDelete @ 0x140935A20
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x14040FB48 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     IommupPasidDeviceDelete @ 0x14050ED44 (IommupPasidDeviceDelete.c)
 */

__int64 __fastcall IommuPasidDeviceDelete(__int64 a1)
{
  if ( (unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() && *(_DWORD *)(a1 + 48) )
    return IommupPasidDeviceDelete(a1);
  else
    return 3221225659LL;
}

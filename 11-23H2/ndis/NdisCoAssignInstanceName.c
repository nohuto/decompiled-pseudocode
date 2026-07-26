/*
 * XREFs of NdisCoAssignInstanceName @ 0x1C00BEFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisCoAssignInstanceName(
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STRING BaseInstanceName,
        PNDIS_STRING VcInstanceName)
{
  if ( VcInstanceName )
  {
    VcInstanceName->Buffer = 0LL;
    *(_DWORD *)&VcInstanceName->Length = 0;
  }
  return -1073741637;
}

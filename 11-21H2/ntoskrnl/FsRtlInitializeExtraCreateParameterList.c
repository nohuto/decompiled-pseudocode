/*
 * XREFs of FsRtlInitializeExtraCreateParameterList @ 0x1406E7C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInitializeExtraCreateParameterList(PECP_LIST EcpList)
{
  NTSTATUS result; // eax

  if ( !EcpList )
    return -1073741811;
  *((_DWORD *)EcpList + 1) = 0;
  *((_QWORD *)EcpList + 2) = (char *)EcpList + 8;
  *((_QWORD *)EcpList + 1) = (char *)EcpList + 8;
  result = 0;
  *(_DWORD *)EcpList = 1282433861;
  return result;
}

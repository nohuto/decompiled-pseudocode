/*
 * XREFs of FsRtlSetEcpListIntoIrp @ 0x1406A95C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlSetEcpListIntoIrp(PIRP Irp, PECP_LIST EcpList)
{
  NTSTATUS result; // eax

  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741585;
  result = 0;
  if ( Irp->UserBuffer )
    return -1073741584;
  Irp->UserBuffer = EcpList;
  *((_DWORD *)EcpList + 1) |= 8u;
  return result;
}

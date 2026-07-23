/*
 * XREFs of IoSetIrpExtraCreateParameter @ 0x1406BA6F0
 * Callers:
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST *ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741585;
  if ( Irp->UserBuffer )
    return -1073741584;
  Irp->UserBuffer = ExtraCreateParameter;
  *((_DWORD *)ExtraCreateParameter + 1) |= 8u;
  return 0;
}

/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140556ED0
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1407CDB9C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}

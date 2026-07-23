/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140557450
 * Callers:
 *     sub_1406B9EA8 @ 0x1406B9EA8 (sub_1406B9EA8.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}

/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C0090C74
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0090BE0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C0296680 )
    qword_1C0296680(qword_1C0296670);
  memset(&gDxgkInterface, 0, 0x318uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C0296680 )
    qword_1C0296680(qword_1C0296670);
  memset(&gDxgkInterface, 0, 0x318uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}

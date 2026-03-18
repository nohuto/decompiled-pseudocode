/*
 * XREFs of ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C005C374
 * Callers:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x1C035DFB8 (--1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ.c)
 *     ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E000 (-VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1CDriverStoreCopy@@QEAA@XZ @ 0x1C0301CCC (--1CDriverStoreCopy@@QEAA@XZ.c)
 */

CDriverStoreCopy *__fastcall CDriverStoreCopy::`scalar deleting destructor'(CDriverStoreCopy *P)
{
  CDriverStoreCopy::~CDriverStoreCopy(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}

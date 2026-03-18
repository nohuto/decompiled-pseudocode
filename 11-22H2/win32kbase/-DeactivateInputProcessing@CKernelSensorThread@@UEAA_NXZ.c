/*
 * XREFs of ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1C0083C80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C0083CB4 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C00848F0 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 */

bool __fastcall CKernelSensorThread::DeactivateInputProcessing(CKernelSensorThread *this)
{
  bool v2; // bl

  v2 = CInputThreadBase::DeactivateInputProcessing(this);
  if ( v2 )
    CKernelSensorThread::DestroyEventHandles(this);
  return v2;
}

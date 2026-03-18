/*
 * XREFs of ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C00024B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::PreNotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  UINT64 PresentLimitSemaphoreId; // r8

  PresentLimitSemaphoreId = a2->PresentLimitSemaphoreId;
  if ( a2->FenceValue )
    *((_QWORD *)this + 44) = a2->FenceValue;
  if ( PresentLimitSemaphoreId )
    ++*((_DWORD *)this + 84);
}

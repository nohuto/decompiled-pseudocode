/*
 * XREFs of ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x1C0054AAC
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0054BC8 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0055060 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C000AC00 (memset.c)
 */

void __fastcall FxIoTargetRemoteOpenParams::Clear(FxIoTargetRemoteOpenParams *this)
{
  FX_POOL_TRACKER *EaBuffer; // rcx
  wchar_t *Buffer; // rcx

  EaBuffer = (FX_POOL_TRACKER *)this->EaBuffer;
  if ( EaBuffer )
    FxPoolFree(EaBuffer);
  Buffer = this->TargetDeviceName.Buffer;
  if ( Buffer )
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
  memset(this, 0, sizeof(FxIoTargetRemoteOpenParams));
}

/*
 * XREFs of ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F3B70
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0080710 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C0080AE0 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B91A0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     IVWorkerThread @ 0x1C01EEA6C (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIVChannel::Uninitialize(CIVChannel *this)
{
  if ( isChildPartition() )
  {
    if ( gpfnIVCloseChildChannel )
      gpfnIVCloseChildChannel(*((_DWORD *)this + 2));
  }
}

/*
 * XREFs of ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C03624C8
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C03451FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1C036725C (-UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::UpdateVmBus(DXGVMBUSCHANNEL **this, void *a2)
{
  unsigned int updated; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(this + 5), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  updated = DXGVMBUSCHANNEL::UpdateVmBusHandle(this[14], a2);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return updated;
}

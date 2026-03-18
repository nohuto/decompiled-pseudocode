/*
 * XREFs of ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C0072040
 * Callers:
 *     ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C0069690 (-QueryForPowerThread@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1C0078520 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C008939C (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00896E8 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 */

int __fastcall FxPkgPnp::CreatePowerThread(FxPkgPnp *this)
{
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  _DEVICE_OBJECT *v3; // r9
  int result; // eax
  FxSystemThread *v5; // rbx
  FxSystemThread *pThread; // [rsp+30h] [rbp+8h] BYREF

  pThread = 0LL;
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  result = FxSystemThread::_CreateAndInit(&pThread, this->m_Globals, ObjectHandleUnchecked, v3);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PowerThread, (signed __int64)pThread, 0LL) )
    {
      v5 = pThread;
      FxSystemThread::ExitThread(pThread);
      v5->DeleteObject(v5);
    }
    this->m_HasPowerThread = 1;
    return 0;
  }
  return result;
}

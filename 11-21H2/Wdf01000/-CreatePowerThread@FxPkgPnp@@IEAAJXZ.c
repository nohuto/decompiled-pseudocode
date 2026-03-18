/*
 * XREFs of ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C002996C
 * Callers:
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1C0029900 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 *     ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C00838F0 (-QueryForPowerThread@FxPkgPdo@@EEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00299D8 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C00914BC (-ExitThread@FxSystemThread@@QEAAEXZ.c)
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

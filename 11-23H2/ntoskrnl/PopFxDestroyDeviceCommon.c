/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x140589BE0
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x140589C3C (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x1405A0EC4 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405A0FD0 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P, int a2)
{
  _m_prefetchw(P + 29);
  if ( _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2 )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}

/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x140884E48
 * Callers:
 *     PoFxAbandonDevice @ 0x140869DB8 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x140984D50 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x14028D414 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x140985FC4 (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}

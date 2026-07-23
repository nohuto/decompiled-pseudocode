/*
 * XREFs of PipDmgEnforceEnumerationPolicy @ 0x14096B474
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BBB0 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     PipDmaGuardBlockAddDevice @ 0x14096B34C (PipDmaGuardBlockAddDevice.c)
 *     PipDmgReevaluateQueue @ 0x14096B63C (PipDmgReevaluateQueue.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x14096BAC4 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiCslIsConsoleLocked @ 0x14096C76C (PiCslIsConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096F124 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 *     PiIommuIsPassthroughAllowedWhileConsoleLocked @ 0x14096F140 (PiIommuIsPassthroughAllowedWhileConsoleLocked.c)
 *     PiDmaGuardQueueInsertEntry @ 0x1409721BC (PiDmaGuardQueueInsertEntry.c)
 */

__int64 __fastcall PipDmgEnforceEnumerationPolicy(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  unsigned int v6; // edi
  bool v7; // si
  int v8; // r15d
  __int64 v9; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(BugCheckParameter2 + 720);
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 20);
  if ( PipDmaGuardPolicy != 1 )
  {
    if ( PipDmaGuardPolicy == 2 )
    {
      if ( (unsigned __int8)PiCslIsConsoleLocked() )
      {
        v7 = (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(v3, v9) == 0;
        v6 = (unsigned __int8)PiIommuIsPassthroughAllowedWhileConsoleLocked() == 0;
      }
    }
    else
    {
      if ( PipDmaGuardPolicy != 3 )
        __fastfail(5u);
      v7 = (unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(
                              *(_QWORD *)(BugCheckParameter2 + 720),
                              (unsigned int)(PipDmaGuardPolicy - 2)) == 0;
      LOBYTE(v6) = (unsigned __int8)PiIommuIsPassthroughAllowedWhileConsoleLocked() == 0;
    }
  }
  LOBYTE(a3) = v7;
  result = PipDmgSetIommuDomainPolicyAndNotifyHal(BugCheckParameter2, v6, a3);
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      return (unsigned int)PipDmaGuardBlockAddDevice(BugCheckParameter2);
    }
    else if ( v8 != v6 && v6 == 1 )
    {
      PiDmaGuardQueueInsertEntry(*(PVOID *)(BugCheckParameter2 + 32));
      PipDmgReevaluateQueue();
    }
    return v4;
  }
  return result;
}

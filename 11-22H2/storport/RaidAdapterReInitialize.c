/*
 * XREFs of RaidAdapterReInitialize @ 0x1C003715C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0008690 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0008708 (RaidAdapterReleaseInterruptLock.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaCallMiniportHwInitialize @ 0x1C0033E8C (RaCallMiniportHwInitialize.c)
 *     RaCallMiniportFindAdapter @ 0x1C0043580 (RaCallMiniportFindAdapter.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  KIRQL v4; // bl
  int v5; // esi
  char v6; // cl
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 336;
  strcpy(v7, "wakeup=1");
  result = RaCallMiniportFindAdapter(a1 + 336, v7);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v4 = RaidAdapterAcquireInterruptLock(a1);
    v5 = RaCallMiniportHwInitialize(v1);
    RaidAdapterReleaseInterruptLock(a1, v4);
    v6 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v6;
    if ( v5 >= 0 )
      *(_BYTE *)(a1 + 104) = v6 | 1;
    return (unsigned int)v5;
  }
  return result;
}

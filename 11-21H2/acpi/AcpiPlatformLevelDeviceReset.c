/*
 * XREFs of AcpiPlatformLevelDeviceReset @ 0x1C0052120
 * Callers:
 *     AcpiDeviceBusSpecificReset @ 0x1C00AD010 (AcpiDeviceBusSpecificReset.c)
 *     AcpiDeviceReset @ 0x1C00AD0C0 (AcpiDeviceReset.c)
 * Callees:
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C0052220 (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiPlatformLevelDeviceReset(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  int v6; // edi
  __int64 v7; // r8
  KIRQL v8; // r14
  __int64 v9; // r11
  _QWORD *v10; // r10
  _QWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-8h]

  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2[96] )
    return 3221225486LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 3221225659LL;
  v6 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( v2[119] )
  {
    v6 = -2147483631;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 72);
    v10 = (_QWORD *)(v9 + 48);
    v11 = *(_QWORD **)(v9 + 48);
    while ( v11 != v10 )
    {
      if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(v9, v11 - 5, v7, *v11, v14) )
      {
        v13 = *(_QWORD *)(v12 + 32);
        *(_QWORD *)(v13 + 1000) |= 0x8000000uLL;
        *(_QWORD *)(v13 + 952) = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1);
      }
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v8);
  if ( v6 >= 0 )
    return (unsigned int)IoRequestDeviceRemovalForReset(v2[98], a2);
  return (unsigned int)v6;
}

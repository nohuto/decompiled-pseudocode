/*
 * XREFs of OSNotifyDeviceWakeByInterrupt @ 0x1C005A010
 * Callers:
 *     ACPIWakeEmulationInterruptServiceRoutine @ 0x1C0057FA0 (ACPIWakeEmulationInterruptServiceRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C005A1F0 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C00627FC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEmulationDisable @ 0x1C0062BE8 (ACPIWakeEmulationDisable.c)
 */

void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // r14
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  KIRQL Irql; // [rsp+78h] [rbp+10h] BYREF

  Irql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x22u,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1,
      *(_DWORD *)(a1 + 32));
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    v4 = v3[1];
    if ( v4 )
    {
      do
      {
        v5 = (__int64 *)AcpiPowerWaitWakeList;
        v6 = v4;
        v7 = v4;
        if ( (__int64 *)AcpiPowerWaitWakeList != &AcpiPowerWaitWakeList )
        {
          v8 = (_QWORD *)(a1 + 16);
          do
          {
            for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
            {
              if ( v5 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v5[5], (__int64)v3);
                break;
              }
            }
            v7 = v3[1];
            if ( v4 != v7 )
              break;
            v5 = (__int64 *)*v5;
          }
          while ( v5 != &AcpiPowerWaitWakeList );
        }
        v4 = v7;
      }
      while ( v7 != v6 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v10 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
    {
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable(v10);
        v12 = v10[5];
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v3 );
      if ( !v12 || (unsigned int)ACPIWakeDisableAsync(v12, v3, v11, v3) != 259 )
        OSNotifyDeviceWakeCallBack(0LL, 0LL, 0LL, v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x23u,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids);
  }
}

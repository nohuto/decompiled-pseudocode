/*
 * XREFs of UsbhDecHubBusy @ 0x1C0003DB0
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhSshExitSx @ 0x1C0003CCC (UsbhSshExitSx.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0004460 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshEnterSx @ 0x1C0004DC4 (UsbhSshEnterSx.c)
 *     UsbhSshPortsBusy @ 0x1C0004EA4 (UsbhSshPortsBusy.c)
 *     UsbhSshResumeUpstream @ 0x1C0004F34 (UsbhSshResumeUpstream.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0005C60 (Usbh_PCE_Resume_Action.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000ABD0 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhBusResume_Action @ 0x1C0012650 (UsbhBusResume_Action.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C001A910 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhDriverResetPort @ 0x1C001B8C0 (UsbhDriverResetPort.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C0030260 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhSshBusBusy @ 0x1C003170C (UsbhSshBusBusy.c)
 *     UsbhSshBusIdle @ 0x1C00317B0 (UsbhSshBusIdle.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0038B00 (UsbhHubResetIrqPipeWorker.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C003E3F8 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003EBD8 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003EF0C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00404A8 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0040798 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0040D6C (UsbhIoctlResetStuckHub.c)
 *     UsbhPortConnect @ 0x1C004D100 (UsbhPortConnect.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_QueryId @ 0x1C00558C0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056380 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshDisabled @ 0x1C00592A0 (UsbhSshDisabled.c)
 *     UsbhSshEnabled @ 0x1C00594D4 (UsbhSshEnabled.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhDecHubBusy(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  __int64 Signalling; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  volatile int Lock; // eax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 1667581000;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a3;
      *(_QWORD *)(v8 + 24) = Signalling;
    }
  }
  if ( v5[142].Header.Signalling )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v9 = a3[1];
      v10 = a3 + 1;
      if ( *(_QWORD **)(v9 + 8) != a3 + 1 || (v11 = (_QWORD *)a3[2], (_QWORD *)*v11 != v10) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      a3[2] = a3 + 1;
      *v10 = v10;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}

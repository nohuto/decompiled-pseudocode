/*
 * XREFs of UsbhIncHubBusy @ 0x1C0007050
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0004460 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0004C60 (UsbhAcquireEnumBusLock.c)
 *     UsbhSshEnterSx @ 0x1C0004DC4 (UsbhSshEnterSx.c)
 *     UsbhSshPortsBusy @ 0x1C0004EA4 (UsbhSshPortsBusy.c)
 *     UsbhSshResumeUpstream @ 0x1C0004F34 (UsbhSshResumeUpstream.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0005C60 (Usbh_PCE_Resume_Action.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSshBusBusy @ 0x1C003170C (UsbhSshBusBusy.c)
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
 *     UsbhSetEnumerationFailed @ 0x1C004E9B8 (UsbhSetEnumerationFailed.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C004EBC8 (Usbh_OvercurrentRefHubBusy.c)
 *     UsbhPdoPnp_QueryId @ 0x1C00558C0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056380 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshDisabled @ 0x1C00592A0 (UsbhSshDisabled.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIncHubBusy(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _KEVENT *v9; // rbx
  struct _KEVENT *v10; // rbp
  __int64 Signalling; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 Pool2; // rax
  __int64 v16; // rsi
  _LIST_ENTRY *p_WaitListHead; // rbx
  char *v18; // rax
  char **Blink; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(struct _KEVENT **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9 + 139;
  v9[142].Header.Type = 1;
  KeWaitForSingleObject(&v9[139], Executive, 0, 0, 0LL);
  Signalling = v9[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1668172104;
      *(_QWORD *)(v13 + 16) = a5;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = Signalling;
    }
  }
  if ( v9[142].Header.Signalling )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1215918946;
      p_WaitListHead = &v9[129].Header.WaitListHead;
      *(_QWORD *)(Pool2 + 24) = a3;
      *(_DWORD *)(Pool2 + 32) = a4;
      v18 = (char *)(Pool2 + 8);
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v18 = p_WaitListHead;
      *((_QWORD *)v18 + 1) = Blink;
      *Blink = v18;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v18;
    }
    else
    {
      ++v9[130].Header.LockNV;
      v16 = 1936941672LL;
    }
    KeSetEvent(v10, 0, 0);
    if ( a5 == 1 )
      Usbh_SSH_Event(a1, 6LL, a2);
    return v16;
  }
  else
  {
    KeSetEvent(v9 + 139, 0, 0);
    return 0LL;
  }
}

/*
 * XREFs of PiProcessQueryDeviceState @ 0x14079347C
 * Callers:
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x1408545F4 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140322ED4 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x14032320C (PoFxIdleDevice.c)
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCEC (PnpCheckForActiveDependencies.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     PipSetDevNodeUserFlags @ 0x1407908AC (PipSetDevNodeUserFlags.c)
 *     PiUpdateGuestAssignedState @ 0x1407927B8 (PiUpdateGuestAssignedState.c)
 *     PipClearDevNodeUserFlags @ 0x1407935D0 (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x140793640 (IopQueryDeviceState.c)
 *     IopIncDisableableDepends @ 0x1407E6F2C (IopIncDisableableDepends.c)
 *     PnpRequestDeviceRemoval @ 0x1408675FC (PnpRequestDeviceRemoval.c)
 *     IopDecDisableableDepends @ 0x14096CED0 (IopDecDisableableDepends.c)
 *     PiUpdateDeviceResourceLists @ 0x14096F40C (PiUpdateDeviceResourceLists.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int updated; // esi
  PVOID **v7; // rcx
  __int64 v9; // r8
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v10) = 0;
  P = 0LL;
  v2 = *(_QWORD *)(Object[39] + 40LL);
  PiPnpRtlBeginOperation((__int64 **)&P);
  PoFxActivateDevice(*(_QWORD *)(v2 + 32));
  *(_DWORD *)(v2 + 704) |= 0x100u;
  if ( (int)IopQueryDeviceState(Object, &v10) < 0 )
  {
    updated = 0;
    goto LABEL_15;
  }
  v3 = v10;
  if ( (v10 & 2) != 0 )
    PipSetDevNodeUserFlags(v2, 2);
  else
    PipClearDevNodeUserFlags(v2, 2LL);
  if ( (v3 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v2, 64);
  else
    PipClearDevNodeUserFlags(v2, 64LL);
  v4 = *(_DWORD *)(v2 + 400) & 8;
  if ( (v3 & 0x20) != 0 )
  {
    if ( !v4 )
    {
      PipSetDevNodeUserFlags(v2, 8);
      IopIncDisableableDepends(v2);
    }
  }
  else if ( v4 )
  {
    IopDecDisableableDepends(v2);
    PipClearDevNodeUserFlags(v2, 8LL);
  }
  v5 = v3 >> 8;
  LOBYTE(v5) = BYTE1(v3) & 1;
  updated = PiUpdateGuestAssignedState(v2, v5);
  if ( (v3 & 9) != 0 )
  {
LABEL_24:
    if ( PnpCheckForActiveDependencies(v2, 3u) )
    {
      v9 = 51LL;
      goto LABEL_32;
    }
    if ( (v3 & 9) != 0 )
    {
      v9 = (v3 & 1) != 0 ? 29 : 24;
      goto LABEL_32;
    }
    goto LABEL_11;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( (v3 & 0x10) != 0 )
      goto LABEL_28;
    goto LABEL_24;
  }
LABEL_11:
  if ( (v3 & 0x10) == 0 )
  {
    if ( (v3 & 4) == 0 )
    {
      if ( (v3 & 0x80u) != 0 )
        updated = PiUpdateDeviceResourceLists(v2);
      goto LABEL_15;
    }
    v9 = 43LL;
LABEL_32:
    PnpRequestDeviceRemoval(v2, 0LL, v9, 0LL);
    updated = -1073741823;
    goto LABEL_15;
  }
LABEL_28:
  v10 = 0LL;
  if ( (v3 & 4) != 0 )
    LOBYTE(v10) = 1;
  PnpRequestDeviceAction(Object, 0xDu, 0, &v10, 0LL, 0LL, 0LL);
LABEL_15:
  PoFxIdleDevice(*(_QWORD *)(v2 + 32));
  v7 = (PVOID **)P;
  *(_DWORD *)(v2 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return updated;
}

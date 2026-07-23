/*
 * XREFs of PiCMCaptureObjectInputData @ 0x14079A374
 * Callers:
 *     PiCMGetDeviceStatus @ 0x140799B58 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799EE0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x14079A0A8 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x14086C82C (PiCMGetObjectList.c)
 *     PiCMCreateObject @ 0x140968D90 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968F2C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1409693A0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969490 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409696DC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096988C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14096A120 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A218 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AED0 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BD7C (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406D4220 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v6; // r12d
  char PreviousMode; // r9
  int UserModeCallersCopy; // ebx
  unsigned __int64 v9; // r8
  void **v10; // r14
  char *v11; // rcx
  _DWORD *v12; // r15
  unsigned int v13; // r8d
  unsigned __int64 v15; // r8
  char v16; // [rsp+80h] [rbp+8h]

  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = a1 + a2;
    if ( v15 > 0x7FFFFFFF0000LL || v15 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a1 + a2;
    if ( v9 > 0x7FFFFFFF0000LL || v9 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
  {
LABEL_28:
    v10 = (void **)(a4 + 16);
    goto LABEL_39;
  }
  v10 = (void **)(a4 + 16);
  v11 = *(char **)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( v11 )
  {
    v12 = (_DWORD *)(a4 + 24);
    v13 = *(_DWORD *)(a4 + 24);
    if ( v13 >= 2 )
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v11, v13, 2u, PreviousMode, 1);
      if ( UserModeCallersCopy < 0 )
      {
        *v10 = 0LL;
        *v12 = 0;
      }
      else
      {
        v6 = 1;
        *((_WORD *)*v10 + ((unsigned __int64)(unsigned int)*v12 >> 1) - 1) = 0;
      }
LABEL_19:
      if ( UserModeCallersCopy >= 0 )
        return (unsigned int)UserModeCallersCopy;
      goto LABEL_28;
    }
  }
  else
  {
    v12 = (_DWORD *)(a4 + 24);
  }
  if ( v11 )
  {
    if ( *v12 >= 2u )
      goto LABEL_19;
  }
  else if ( !*v12 )
  {
    goto LABEL_19;
  }
  UserModeCallersCopy = -1073741811;
LABEL_39:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(v16, *v10);
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}

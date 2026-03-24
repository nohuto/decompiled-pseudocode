/*
 * XREFs of KeyboardClassLogError @ 0x1C0005418
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00018E0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassClose @ 0x1C0001C20 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001D90 (KeyboardClassCreate.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005ED0 (KeyboardClassWWPowerUpComplete.c)
 *     KeyboardAddDeviceEx @ 0x1C000DBB0 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DDB0 (KbdCreateClassObject.c)
 *     KeyboardClassFindMorePorts @ 0x1C000E0D0 (KeyboardClassFindMorePorts.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardClassLogError(void *a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, char a7)
{
  _WORD *ErrorLogEntry; // r10
  _DWORD *v11; // rcx
  __int64 v12; // r8

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 4 * ((unsigned __int8)a5 + 12));
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[1] = 4 * a5;
    *(_BYTE *)ErrorLogEntry = a7;
    *((_DWORD *)ErrorLogEntry + 3) = a2;
    *((_QWORD *)ErrorLogEntry + 3) = 0LL;
    *((_BYTE *)ErrorLogEntry + 1) = 0;
    *((_DWORD *)ErrorLogEntry + 4) = a3;
    *((_DWORD *)ErrorLogEntry + 5) = a4;
    if ( a5 )
    {
      v11 = a6;
      v12 = a5;
      do
      {
        *(_DWORD *)((char *)v11 + (char *)ErrorLogEntry - (char *)a6 + 40) = *v11;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}

/*
 * XREFs of PipKsrCallback @ 0x14096D320
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 *     PipKsrNotifyDrivers @ 0x14096D3F0 (PipKsrNotifyDrivers.c)
 */

void __fastcall PipKsrCallback(PVOID CallbackContext, unsigned __int64 Argument1, int *Argument2)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  GUID *v7; // rcx
  int v8; // eax
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( Argument1 <= 0x19 )
  {
    if ( (_DWORD)Argument1 )
    {
      v4 = Argument1 - 1;
      if ( !v4 )
      {
        if ( !PnpKsrPrepared )
          return;
        PnpKsrPrepared = 0;
        v7 = &GUID_KERNEL_SOFT_RESTART_CANCEL;
        PnpKsrIsHhrPrepare = 0;
        goto LABEL_13;
      }
      v5 = v4 - 4;
      if ( v5 )
      {
        v6 = v5 - 15;
        if ( v6 )
        {
          if ( v6 != 5 )
            return;
          v7 = &GUID_RECOVERY_PCI_PREPARE_SHUTDOWN;
        }
        else
        {
          v7 = &GUID_RECOVERY_NVMED_PREPARE_SHUTDOWN;
        }
LABEL_13:
        PipKsrNotifyDrivers(v7);
        return;
      }
      if ( *Argument2 >= 0 )
        *Argument2 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_FINALIZE);
    }
    else if ( *Argument2 >= 0 )
    {
      v8 = PipKsrNotifyDrivers(&GUID_KERNEL_SOFT_RESTART_PREPARE);
      SystemInformation = 0;
      *Argument2 = v8;
      PnpKsrPrepared = 1;
      ZwQuerySystemInformation(SystemSoftRebootInformation, &SystemInformation, 4u, 0LL);
      PnpKsrIsHhrPrepare = (SystemInformation & 0x40) != 0;
    }
  }
}

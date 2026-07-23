/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x1407FC690
 * Callers:
 *     sub_1409A0CD4 @ 0x1409A0CD4 (sub_1409A0CD4.c)
 *     sub_1409A40F8 @ 0x1409A40F8 (sub_1409A40F8.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140389874 @ 0x140389874 (sub_140389874.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( Handle && *((_DWORD *)Handle + 4) == 1952797520 )
  {
    ExAcquireFastMutex(&stru_140C237C0);
    if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
    {
      v1 = -1073741811;
    }
    else
    {
      if ( *((_QWORD *)Handle + 3) )
      {
        if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
        {
          *((_BYTE *)Handle + 32) = 1;
          goto LABEL_8;
        }
        *((_BYTE *)Handle + 33) = 1;
        while ( *((_QWORD *)Handle + 3) )
        {
          KeReleaseGuardedMutex(&stru_140C237C0);
          KeWaitForSingleObject(&stru_140C23820, Executive, 0, 0, 0LL);
          KeResetEvent(&stru_140C23820);
          ExAcquireFastMutex(&stru_140C237C0);
        }
        *((_BYTE *)Handle + 33) = 0;
      }
      sub_140389874((__int64 *)Handle);
    }
LABEL_8:
    KeReleaseGuardedMutex(&stru_140C237C0);
    return v1;
  }
  return -1073741811;
}

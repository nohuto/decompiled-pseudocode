/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x1403215D0
 * Callers:
 *     KeDisconnectInterrupt @ 0x14031F628 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14031F844 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140320CE4 (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1403D7C5C (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

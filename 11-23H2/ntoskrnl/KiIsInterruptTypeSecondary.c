/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140321340
 * Callers:
 *     KeDisconnectInterrupt @ 0x14031F398 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14031F5B4 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140320A54 (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1403D7A7C (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140321160
 * Callers:
 *     KeDisconnectInterrupt @ 0x14031F1B8 (KeDisconnectInterrupt.c)
 *     KeMaskInterrupt @ 0x14031F3D4 (KeMaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140320874 (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1403D741C (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiSecondaryInterruptServicesEnabled && *a1 == 1 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}

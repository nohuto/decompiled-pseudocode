/*
 * XREFs of TpReleaseIoCompletion @ 0x18004BD20
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18004BCC4 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x18004F040 (TppCleanupGroupMemberRelease.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppIopValidateIo((_PEB_LDR_DATA *)Io, 1LL, 0LL)
    && (unsigned int)TppCleanupGroupMemberRelease(Io, 1LL) )
  {
    *((_QWORD *)Io + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Io, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_IO))Io + 1))(Io);
  }
}

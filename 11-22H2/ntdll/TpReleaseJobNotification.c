/*
 * XREFs of TpReleaseJobNotification @ 0x180050EE0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18004F040 (TppCleanupGroupMemberRelease.c)
 *     TppJobpValidateJob @ 0x180050E84 (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x180050F50 (TppJobpRundownJob.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseJobNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 v4; // eax

  v4 = TppJobpValidateJob(a1, 1LL, a3);
  if ( v4 )
  {
    LOBYTE(v4) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v4 )
    {
      TppJobpRundownJob(a1);
      v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( v4 == 1 )
        LOBYTE(v4) = (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return v4;
}

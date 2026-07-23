/*
 * XREFs of TpReleaseAlpcCompletion @ 0x180081490
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 *     TppAlpcpValidateAlpc @ 0x180081508 (TppAlpcpValidateAlpc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 1LL, 0LL) )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease((__int64)Alpc + 72, 1LL);
    if ( v2 )
    {
      *((_QWORD *)Alpc + 32) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Alpc + 18, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(char *))Alpc + 10))((char *)Alpc + 72);
    }
  }
}

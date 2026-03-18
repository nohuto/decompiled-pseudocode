/*
 * XREFs of NtUserRemoteThinwireStats @ 0x1C01D9E30
 * Callers:
 *     <none>
 * Callees:
 *     RemoteThinwireStats @ 0x1C0203618 (RemoteThinwireStats.c)
 */

__int64 __fastcall NtUserRemoteThinwireStats(volatile void *Address)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 0LL);
  LODWORD(Address) = RemoteThinwireStats(Address);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return (unsigned int)Address;
}

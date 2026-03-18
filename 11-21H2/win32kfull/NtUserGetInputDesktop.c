/*
 * XREFs of NtUserGetInputDesktop @ 0x1C01F49F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserGetInputDesktop()
{
  __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  v0 = 0LL;
  v6 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, grpdeskRitInput, 0LL, 0LL, &v6)
    && (unsigned int)SetHandleFlag(v6, 1LL, 1LL) )
  {
    v0 = v6;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v0;
}

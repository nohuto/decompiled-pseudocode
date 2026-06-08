/*
 * XREFs of RegisterGuestIdleStates @ 0x1C0039C30
 * Callers:
 *     <none>
 * Callees:
 *     RegisterVmIdleStates @ 0x1C003A79C (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
    return RegisterVmIdleStates(a1);
  else
    return 0LL;
}

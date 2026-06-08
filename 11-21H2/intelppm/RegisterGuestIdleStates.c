/*
 * XREFs of RegisterGuestIdleStates @ 0x1C0038820
 * Callers:
 *     <none>
 * Callees:
 *     RegisterVmIdleStates @ 0x1C00394AC (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
    return RegisterVmIdleStates();
  else
    return 0LL;
}

/*
 * XREFs of RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C000C6A0
 * Callers:
 *     StorPortAdapterIdleState @ 0x1C000C580 (StorPortAdapterIdleState.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendPoFxIdleStateToMiniport(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v6 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9LL) )
  {
    v9 = 0LL;
    v8[0] = 1;
    v8[1] = 24;
    v10 = a2;
    v11 = a3;
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 336, 9LL, v8);
  }
  return v6;
}

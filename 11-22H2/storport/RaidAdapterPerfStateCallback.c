/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x1C004BA60
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  __int64 result; // rax

  RaCallMiniportAdapterControl(a1 + 336);
  result = *(_QWORD *)(a1 + 4896);
  if ( result )
    _interlockedbittestandreset((volatile signed __int32 *)(result + 120), 0);
  return result;
}

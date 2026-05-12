/*
 * XREFs of RiTryEnableDeviceQueueFastPath @ 0x1C000464C
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C000152C (StorPortUnitActiveConditionStep2.c)
 *     RaidNormalizeDeviceQueue @ 0x1C00195C4 (RaidNormalizeDeviceQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall RiTryEnableDeviceQueueFastPath(__int64 a1)
{
  signed __int64 v1; // rdi
  char result; // al
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( (v1 & 1) == 0 )
    return 1;
  result = 0;
  if ( !*(_DWORD *)(a1 + 28)
    && !*(_DWORD *)(a1 + 16)
    && !*(_DWORD *)(a1 + 32)
    && !*(_BYTE *)(a1 + 37)
    && !*(_BYTE *)(a1 + 39)
    && !*(_BYTE *)(a1 + 36)
    && *(int *)(a1 + 24) <= 0
    && !*(_BYTE *)(a1 + 38) )
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v1 ^ 1, v1);
      v4 = v1 == v5;
      v1 = v5;
    }
    while ( !v4 && (v5 & 1) != 0 );
    return 1;
  }
  return result;
}

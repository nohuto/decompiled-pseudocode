/*
 * XREFs of sub_1402E2BF8 @ 0x1402E2BF8
 * Callers:
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

char __fastcall sub_1402E2BF8(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 824);
  if ( (v2 & 0x400) != 0 )
  {
    if ( a2 )
      LOBYTE(v2) = KeCancelTimer((PKTIMER)(a1 + 504));
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 824), 0xAu);
  }
  return v2;
}

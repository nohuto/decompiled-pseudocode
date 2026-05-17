/*
 * XREFs of TpSetTimer @ 0x18001C9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TpSetTimer(__int64 a1, __int64 a2, int a3, int a4)
{
  return TpSetTimerEx(a1, a2, a3, a4);
}

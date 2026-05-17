/*
 * XREFs of TpSetWait @ 0x180082AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TpSetWait(__int64 a1, __int64 a2, __int64 *a3)
{
  return TpSetWaitEx(a1, a2, a3, 0LL);
}

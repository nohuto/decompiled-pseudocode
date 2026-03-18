/*
 * XREFs of zzzDestroyCaret @ 0x1C00C32AC
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0063110 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     NtUserDestroyCaret @ 0x1C00C3270 (NtUserDestroyCaret.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00726A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00C32D8 (zzzInternalDestroyCaret.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}

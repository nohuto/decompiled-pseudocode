/*
 * XREFs of xxxSetForegroundThread @ 0x1C0017B70
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C004BD48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

void __fastcall xxxSetForegroundThread(struct tagTHREADINFO *a1)
{
  xxxSetForegroundThreadWithWindowHint(a1, 0LL);
}

/*
 * XREFs of xxxSetForegroundThread @ 0x1C00052F0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00A8268 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

void __fastcall xxxSetForegroundThread(struct tagTHREADINFO *a1)
{
  xxxSetForegroundThreadWithWindowHint(a1, 0LL);
}

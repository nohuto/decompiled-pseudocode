/*
 * XREFs of EditionGetInputDelegate @ 0x1C0150DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01153E0 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

struct tagTHREADINFO *__fastcall EditionGetInputDelegate(__int64 a1)
{
  return GetInputDelegate(*(struct tagWND **)(a1 + 80), 4096);
}

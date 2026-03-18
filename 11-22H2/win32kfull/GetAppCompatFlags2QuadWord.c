/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C00BCD70
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(struct tagTHREADINFO *a1)
{
  if ( !a1 )
    a1 = PtiCurrentShared();
  return *((_QWORD *)a1 + 81);
}

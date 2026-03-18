/*
 * XREFs of ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A5F28
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagQ *__fastcall tagTHREADINFO::GetQ(tagTHREADINFO *this)
{
  return (struct tagQ *)*((_QWORD *)this + 54);
}

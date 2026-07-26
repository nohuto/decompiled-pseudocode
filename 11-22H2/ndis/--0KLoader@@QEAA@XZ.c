/*
 * XREFs of ??0KLoader@@QEAA@XZ @ 0x1C011F494
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     <none>
 */

KLoader *__fastcall KLoader::KLoader(KLoader *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  return this;
}

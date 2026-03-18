/*
 * XREFs of ??0VIDPNTARGETINFO@@QEAA@XZ @ 0x1C001FC60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

VIDPNTARGETINFO *__fastcall VIDPNTARGETINFO::VIDPNTARGETINFO(VIDPNTARGETINFO *this)
{
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  memset((char *)this + 16, 0, 0xE8uLL);
  return this;
}

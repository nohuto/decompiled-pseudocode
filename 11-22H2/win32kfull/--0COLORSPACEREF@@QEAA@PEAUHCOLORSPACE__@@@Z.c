/*
 * XREFs of ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02CE3F0
 * Callers:
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02CEB8C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     NtGdiSetColorSpace @ 0x1C02CF7B0 (NtGdiSetColorSpace.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORSPACEREF *__fastcall COLORSPACEREF::COLORSPACEREF(COLORSPACEREF *this, HCOLORSPACE a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 9;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}

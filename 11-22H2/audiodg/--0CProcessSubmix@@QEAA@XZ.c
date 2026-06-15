/*
 * XREFs of ??0CProcessSubmix@@QEAA@XZ @ 0x1400068F0
 * Callers:
 *     ??0?$CComObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140006624 (--0-$CComObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140069040 (--0-$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x140005E20 (--0CSubmixImpl@@QEAA@XZ.c)
 */

CProcessSubmix *__fastcall CProcessSubmix::CProcessSubmix(CProcessSubmix *this)
{
  *((_DWORD *)this + 84) = 0;
  *(_OWORD *)((char *)this + 344) = 0LL;
  *(_OWORD *)((char *)this + 360) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 384) = 0;
  CSubmixImpl::CSubmixImpl((CProcessSubmix *)((char *)this + 16));
  return this;
}

/*
 * XREFs of ??0CStreamGroup@@QEAA@XZ @ 0x140006A40
 * Callers:
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x1400069D8 (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x1400509C0 (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x1400082DC (--0CSubmixImpl@@QEAA@XZ.c)
 */

CStreamGroup *__fastcall CStreamGroup::CStreamGroup(CStreamGroup *this)
{
  *((_DWORD *)this + 86) = 0;
  *((_OWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  CSubmixImpl::CSubmixImpl((CStreamGroup *)((char *)this + 24));
  return this;
}

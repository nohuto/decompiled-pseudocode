/*
 * XREFs of ??0CStreamInstance@@QEAA@XZ @ 0x14000693C
 * Callers:
 *     ??0?$CComObject@VCStreamInstance@@@ATL@@QEAA@PEAX@Z @ 0x140005FDC (--0-$CComObject@VCStreamInstance@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCStreamInstance@@@ATL@@QEAA@PEAX@Z @ 0x14004AFF4 (--0-$CComAggObject@VCStreamInstance@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     <none>
 */

CStreamInstance *__fastcall CStreamInstance::CStreamInstance(CStreamInstance *this)
{
  CStreamInstance *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 128), 0, 0);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((GUID *)this + 12) = GUID_00000000_0000_0000_0000_000000000000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 208), 0, 0);
  result = this;
  *((_WORD *)this + 124) = 0;
  *((_BYTE *)this + 250) = 0;
  return result;
}

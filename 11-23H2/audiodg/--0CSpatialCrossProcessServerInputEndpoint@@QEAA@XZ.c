/*
 * XREFs of ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x1400993B0
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140098D90 (--0-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140098F08 (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x1400992FC (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessServerInputEndpoint *__fastcall CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  *((_DWORD *)this + 360) = 0;
  *(_OWORD *)((char *)this + 1448) = 0LL;
  *(_OWORD *)((char *)this + 1464) = 0LL;
  *((_QWORD *)this + 185) = 0LL;
  *((_BYTE *)this + 1488) = 0;
  CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(this);
  *((_DWORD *)this + 374) = 0;
  *((_DWORD *)this + 375) = 0;
  *((_WORD *)this + 752) = 0;
  *((_DWORD *)this + 377) = -2147418113;
  *((_DWORD *)this + 378) = 0;
  return this;
}

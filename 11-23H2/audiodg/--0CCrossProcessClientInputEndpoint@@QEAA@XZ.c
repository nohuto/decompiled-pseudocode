/*
 * XREFs of ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14008FBE8
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F6C4 (--0-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F9B8 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14008FB74 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientInputEndpoint *__fastcall CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint(
        CCrossProcessClientInputEndpoint *this)
{
  *((_DWORD *)this + 124) = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  *(_OWORD *)((char *)this + 520) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 57) = &CCrossProcessInputEndpoint::`vftable';
  *((_DWORD *)this + 118) = 3;
  *((_DWORD *)this + 119) = 0;
  *((_QWORD *)this + 58) = this;
  *((_QWORD *)this + 60) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 61) = this;
  return this;
}

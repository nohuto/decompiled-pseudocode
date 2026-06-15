/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140082F18
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082A08 (--0-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082CF8 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x140082E0C (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  *((_DWORD *)this + 124) = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  *(_OWORD *)((char *)this + 520) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 57) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 58) = this;
  *((_DWORD *)this + 118) = 3;
  *((_DWORD *)this + 119) = 0;
  *((_QWORD *)this + 60) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 61) = this;
  *((_QWORD *)this + 69) = 0LL;
  return this;
}

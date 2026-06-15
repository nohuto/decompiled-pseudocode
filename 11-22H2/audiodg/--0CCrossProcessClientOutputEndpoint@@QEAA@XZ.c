/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14008FCD0
 * Callers:
 *     ??0?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F96C (--0-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008FAA0 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14008FBC4 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  *((_DWORD *)this + 126) = 0;
  *((_OWORD *)this + 32) = 0LL;
  *((_OWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_BYTE *)this + 552) = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 57) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 58) = this;
  *((_DWORD *)this + 118) = 3;
  *((_DWORD *)this + 119) = 0;
  *((_QWORD *)this + 60) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 61) = this;
  *((_QWORD *)this + 70) = 0LL;
  return this;
}

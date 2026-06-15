/*
 * XREFs of ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x140082FB8
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082B9C (--0-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082D90 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14002062C (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerOutputEndpoint *__fastcall CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint(
        CCrossProcessServerOutputEndpoint *this)
{
  *((_DWORD *)this + 124) = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  *(_OWORD *)((char *)this + 520) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(this, eCapture);
  *((_QWORD *)this + 58) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 59) = this;
  *((_DWORD *)this + 120) = 3;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 138) = 0;
  return this;
}

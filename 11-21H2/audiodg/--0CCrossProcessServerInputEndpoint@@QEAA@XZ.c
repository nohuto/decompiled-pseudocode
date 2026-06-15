/*
 * XREFs of ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140020578
 * Callers:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140020388 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082AE8 (--0-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x140017260 (-Initialize@CFadeWindowLUT@@AEAAXXZ.c)
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x14002062C (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerInputEndpoint *__fastcall CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint(
        CCrossProcessServerInputEndpoint *this)
{
  *((_DWORD *)this + 122) = 0;
  *((_OWORD *)this + 31) = 0LL;
  *((_OWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_BYTE *)this + 536) = 0;
  CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(this, eRender);
  *((_QWORD *)this + 58) = &CCrossProcessInputEndpoint::`vftable';
  *((_DWORD *)this + 120) = 3;
  *((_DWORD *)this + 121) = 0;
  *((_QWORD *)this + 59) = this;
  *((_DWORD *)this + 172) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 16;
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 1065353216;
  CFadeWindowLUT::Initialize((CCrossProcessServerInputEndpoint *)((char *)this + 552));
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 0;
  return this;
}

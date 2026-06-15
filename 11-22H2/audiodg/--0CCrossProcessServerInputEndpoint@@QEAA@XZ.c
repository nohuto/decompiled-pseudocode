/*
 * XREFs of ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140005CEC
 * Callers:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140005C7C (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F7F4 (--0-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140005DA8 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x14000DA54 (-Initialize@CFadeWindowLUT@@AEAAXXZ.c)
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
  *((_WORD *)this + 274) = 0;
  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  *((_DWORD *)this + 175) = 16;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 177) = 1065353216;
  CFadeWindowLUT::Initialize((CCrossProcessServerInputEndpoint *)((char *)this + 556));
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 138) = 0;
  return this;
}

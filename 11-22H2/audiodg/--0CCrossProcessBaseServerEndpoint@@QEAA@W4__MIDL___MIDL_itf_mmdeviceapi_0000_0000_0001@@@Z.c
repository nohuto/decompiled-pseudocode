/*
 * XREFs of ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140005DA8
 * Callers:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140005CEC (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x14008FD70 (--0CCrossProcessServerOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140006B9C (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(
        CCrossProcessBaseServerEndpoint *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2)
{
  CCrossProcessBaseServerEndpoint *result; // rax

  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &CCrossProcessBaseServerEndpoint::`vftable';
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  result = this;
  *((_DWORD *)this + 114) = a2;
  return result;
}

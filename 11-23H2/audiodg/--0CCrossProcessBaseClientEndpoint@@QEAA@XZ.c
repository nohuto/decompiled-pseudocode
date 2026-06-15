/*
 * XREFs of ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14008FB74
 * Callers:
 *     ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14008FBE8 (--0CCrossProcessClientInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14008FC80 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140006B9C (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CCrossProcessBaseClientEndpoint *__fastcall CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(
        CCrossProcessBaseClientEndpoint *this)
{
  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 51) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 52) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 53) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  return this;
}

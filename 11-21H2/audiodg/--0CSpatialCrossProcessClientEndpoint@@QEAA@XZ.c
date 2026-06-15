/*
 * XREFs of ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x14008CE98
 * Callers:
 *     ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14008CF30 (--0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14008CC6C (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessClientEndpoint *__fastcall CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(
        CSpatialCrossProcessClientEndpoint *this)
{
  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 165) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 167) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 169) = 0LL;
  *((_DWORD *)this + 340) = 0;
  *((_QWORD *)this + 171) = 0LL;
  *((_BYTE *)this + 1376) = 0;
  return this;
}

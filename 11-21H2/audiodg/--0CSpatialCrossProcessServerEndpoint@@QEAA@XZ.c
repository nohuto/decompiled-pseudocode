/*
 * XREFs of ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x14008CFCC
 * Callers:
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x14008D080 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14008CC6C (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this)
{
  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 165) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_BYTE *)this + 1336) = 0;
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = 0LL;
  *((_QWORD *)this + 171) = 0LL;
  *((_QWORD *)this + 172) = 0LL;
  *(_OWORD *)((char *)this + 1384) = 0LL;
  *((_DWORD *)this + 350) = 0;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  *((_DWORD *)this + 356) = 0;
  return this;
}

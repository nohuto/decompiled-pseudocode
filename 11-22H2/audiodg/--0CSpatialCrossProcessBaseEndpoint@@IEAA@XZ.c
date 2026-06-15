/*
 * XREFs of ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140098FEC
 * Callers:
 *     ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x140099218 (--0CSpatialCrossProcessClientEndpoint@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x14009934C (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400068BC (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14009B174 (--0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
CSpatialCrossProcessBaseEndpoint *__fastcall CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *(GUID *)((char *)this + 72) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  memset_0((char *)this + 156, 0, 0x1A2uLL);
  *((_DWORD *)this + 144) = 1;
  *((_DWORD *)this + 145) = 1;
  *((_DWORD *)this + 146) = 1;
  *((_DWORD *)this + 147) = 1;
  *((_DWORD *)this + 148) = 1;
  *((_DWORD *)this + 149) = 1;
  *((_DWORD *)this + 150) = 2;
  *(_QWORD *)((char *)this + 604) = 2LL;
  *(_QWORD *)((char *)this + 612) = 0LL;
  *(_QWORD *)((char *)this + 620) = 0LL;
  *((_DWORD *)this + 157) = 0;
  *((_DWORD *)this + 158) = 2;
  *((_DWORD *)this + 159) = 2;
  *((_QWORD *)this + 80) = 3LL;
  *((_DWORD *)this + 162) = 0;
  *(_QWORD *)((char *)this + 652) = 2LL;
  *((_DWORD *)this + 165) = 0;
  *((_QWORD *)this + 83) = 2LL;
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 169) = 1;
  *((_DWORD *)this + 170) = 1;
  *((_DWORD *)this + 171) = 2;
  *((_DWORD *)this + 172) = 1;
  *((_DWORD *)this + 173) = 1;
  *((_DWORD *)this + 174) = 2;
  *((_DWORD *)this + 175) = 1;
  *((_DWORD *)this + 176) = 1;
  *((_DWORD *)this + 177) = 3;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 736), 0, 0);
  *((_QWORD *)this + 97) = 0LL;
  CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 784));
  *((_BYTE *)this + 1288) = 1;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_DWORD *)this + 328) = 0;
  *((_DWORD *)this + 329) = 1;
  return this;
}

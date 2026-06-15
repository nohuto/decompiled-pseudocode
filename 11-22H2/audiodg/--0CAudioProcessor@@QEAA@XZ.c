/*
 * XREFs of ??0CAudioProcessor@@QEAA@XZ @ 0x14000418C
 * Callers:
 *     ??0?$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z @ 0x1400036BC (--0-$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x140006864 (--0-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400068BC (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x140028530 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=6
CAudioProcessor *__fastcall CAudioProcessor::CAudioProcessor(CAudioProcessor *this)
{
  *((_DWORD *)this + 6) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *(_QWORD *)this = &CAudioProcessor::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &CAudioProcessor::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &CAudioProcessor::`vftable'{for `IAudioLogging'};
  *((_DWORD *)this + 20) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioProcessor *)((char *)this + 88));
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 10;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 10;
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((char *)this + 224);
  `eh vector constructor iterator'(
    (char *)this + 384,
    0x90uLL,
    2uLL,
    (void (*)(void *))CProcessingData::CProcessingData,
    (void (*)(void *))CProcessingData::~CProcessingData);
  ATL::CCriticalSection::CCriticalSection((CAudioProcessor *)((char *)this + 720));
  *((_WORD *)this + 356) = 0;
  *((_QWORD *)this + 84) = (char *)this + 384;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_BYTE *)this + 760) = 0;
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_BYTE *)this + 800) = 0;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  return this;
}

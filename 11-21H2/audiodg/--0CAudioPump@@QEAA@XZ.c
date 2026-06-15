/*
 * XREFs of ??0CAudioPump@@QEAA@XZ @ 0x140028028
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140027F14 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

CAudioPump *__fastcall CAudioPump::CAudioPump(CAudioPump *this)
{
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  *(_QWORD *)this = &CAudioPump::`vftable'{for `IAudioPump'};
  *((_QWORD *)this + 1) = &CAudioPump::`vftable'{for `IAudioPumpLogging'};
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 3, 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 4, 0, 0);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_BYTE *)this + 248) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_WORD *)this + 150) = 0;
  *((_DWORD *)this + 78) = 2;
  *(_QWORD *)((char *)this + 316) = 40LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 56) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 52) = 10000000LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 582) = 0LL;
  *((_QWORD *)this + 577) = 0LL;
  *((_QWORD *)this + 578) = 0LL;
  *((_QWORD *)this + 579) = 0LL;
  *((_QWORD *)this + 580) = 0LL;
  *((_WORD *)this + 2324) = 0;
  *((_BYTE *)this + 4650) = 0;
  *((_QWORD *)this + 583) = 0LL;
  *((GUID *)this + 292) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 586) = 0LL;
  *((_QWORD *)this + 587) = 0LL;
  *((_QWORD *)this + 588) = 0LL;
  *((_QWORD *)this + 589) = 0LL;
  *((_BYTE *)this + 4720) = 0;
  *((_DWORD *)this + 1181) = 0;
  *((_BYTE *)this + 4728) = 0;
  *((_QWORD *)this + 592) = 0LL;
  return this;
}

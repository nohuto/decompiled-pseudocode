/*
 * XREFs of ??0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z @ 0x180003F88
 * Callers:
 *     ??0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z @ 0x180003C1C (--0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z.c)
 *     ??0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z @ 0x180003F28 (--0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z.c)
 *     ?Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z @ 0x1801A979C (-Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=3
CCompFrameStats *__fastcall CCompFrameStats::CCompFrameStats(CCompFrameStats *this, union _LARGE_INTEGER a2, int a3)
{
  *(_QWORD *)this = &CCompFrameStats::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 1;
  *((union _LARGE_INTEGER *)this + 2) = a2;
  *((_DWORD *)this + 6) = a3;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 30000;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return this;
}

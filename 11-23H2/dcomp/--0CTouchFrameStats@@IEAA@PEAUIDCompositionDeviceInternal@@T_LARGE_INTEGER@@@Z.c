/*
 * XREFs of ??0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z @ 0x180003C1C
 * Callers:
 *     ?Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationStats@@@Z @ 0x180003B5C (-Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationSt.c)
 *     ??0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z @ 0x1801A5108 (--0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z @ 0x180003F88 (--0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTouchFrameStats *__fastcall CTouchFrameStats::CTouchFrameStats(
        CTouchFrameStats *this,
        struct IDCompositionDeviceInternal *a2,
        union _LARGE_INTEGER a3)
{
  CCompFrameStats::CCompFrameStats(this, a3, 250);
  *(_QWORD *)this = &CTouchFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 20) = &CTouchFrameStats::`vftable'{for `IDCompositionManipulationStats'};
  *((_QWORD *)this + 21) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDeviceInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_WORD *)this + 144) = 0;
  *((_BYTE *)this + 344) = 0;
  return this;
}

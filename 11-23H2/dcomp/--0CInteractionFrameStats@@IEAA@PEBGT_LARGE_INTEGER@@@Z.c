/*
 * XREFs of ??0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z @ 0x1801A5108
 * Callers:
 *     ?Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z @ 0x1801A55D4 (-Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z.c)
 * Callees:
 *     ??0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z @ 0x180003C1C (--0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

CInteractionFrameStats *__fastcall CInteractionFrameStats::CInteractionFrameStats(
        CInteractionFrameStats *this,
        size_t *a2,
        union _LARGE_INTEGER a3)
{
  CTouchFrameStats::CTouchFrameStats(this, 0LL, a3);
  *(_QWORD *)this = &CInteractionFrameStats::`vftable'{for `CCompFrameStats'};
  *((_QWORD *)this + 20) = &CInteractionFrameStats::`vftable'{for `IDCompositionManipulationStats'};
  *((_QWORD *)this + 44) = &CInteractionFrameStats::`vftable';
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  memset_0((char *)this + 392, 0, 0x12CuLL);
  StringCchCopyW((unsigned __int16 *)this + 196, 0x96uLL, a2);
  return this;
}

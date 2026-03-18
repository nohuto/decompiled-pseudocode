/*
 * XREFs of ?ContentAdded@CHolographicFrameProcessor@@UEAAJPEAUIFlipPropertySet@@PEAPEAUIFlipContentCallback@@@Z @ 0x1802AE350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicFrameProcessor::ContentAdded(
        void (__fastcall ***this)(char *),
        struct IFlipPropertySet *a2,
        struct IFlipContentCallback **a3)
{
  *a3 = (struct IFlipContentCallback *)((unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 3) >> 64));
  (**(this - 3))((char *)this - 24);
  return 0LL;
}

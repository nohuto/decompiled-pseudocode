/*
 * XREFs of ?ProcessSetStretch@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSTRETCH@@@Z @ 0x1800EC070
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetStretch(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSTRETCH *a3)
{
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
  return 0LL;
}

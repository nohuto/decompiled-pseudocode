/*
 * XREFs of ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHADOWEFFECT@@@Z @ 0x1802220D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShadowEffect::ProcessUpdate(
        CShadowEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHADOWEFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 180) = *(_OWORD *)((char *)a3 + 12);
  *((_DWORD *)this + 49) = *((_DWORD *)a3 + 7);
  (*(void (__fastcall **)(CShadowEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}

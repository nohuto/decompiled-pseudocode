/*
 * XREFs of ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x180206194
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::ProcessUpdate(
        CAffineTransform2DEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_AFFINETRANSFORM2DEFFECT *a3)
{
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 41) = *((_DWORD *)a3 + 3);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a3 + 1);
  *((_QWORD *)this + 23) = *((_QWORD *)a3 + 4);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 10);
  (*(void (__fastcall **)(CAffineTransform2DEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}

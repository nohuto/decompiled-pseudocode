/*
 * XREFs of ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EDCBC
 * Callers:
 *     ?ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST@@@Z @ 0x1801ED524 (-ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTA.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x180220208 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?ProcessSetDefaultSDRBoost@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETDEFAULTSDRBOOST@@@Z @ 0x180220354 (-ProcessSetDefaultSDRBoost@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECON.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18007E130 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(CCaptureRenderTarget *this)
{
  __int64 v2; // rsi
  __int64 i; // rdi

  IsDXGIColorSpaceHDR(*((_DWORD *)this + 30));
  v2 = *((_QWORD *)this + 240);
  for ( i = *((_QWORD *)this + 239); i != v2; i += 24LL )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 40LL))(*(_QWORD *)(i + 8));
    if ( *((_BYTE *)this + 1898) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 40LL))(*(_QWORD *)(i + 16));
  }
}

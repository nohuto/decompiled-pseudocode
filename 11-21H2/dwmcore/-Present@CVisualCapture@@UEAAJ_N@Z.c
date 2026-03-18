/*
 * XREFs of ?Present@CVisualCapture@@UEAAJ_N@Z @ 0x180243CF8
 * Callers:
 *     ?Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180107CB0 (-Present@CVisualCapture@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802436BC (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Present(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1968));
  if ( !*((_BYTE *)this - 55) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 244) + 656LL) + 120LL))(
      *(_QWORD *)(*((_QWORD *)this - 244) + 656LL),
      0LL,
      1024LL);
  return 0LL;
}

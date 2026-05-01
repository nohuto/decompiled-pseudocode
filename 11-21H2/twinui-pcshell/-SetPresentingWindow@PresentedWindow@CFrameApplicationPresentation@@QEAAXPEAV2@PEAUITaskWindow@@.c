/*
 * XREFs of ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x180137454
 * Callers:
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x180137198 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 * Callees:
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18007735C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800778A4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1801374B8 (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 */

void __fastcall CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
        CFrameApplicationPresentation::PresentedWindow *this,
        struct CFrameApplicationPresentation *a2,
        struct ITaskWindow *a3,
        unsigned __int64 a4)
{
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7,
    a2);
  if ( *((_OWORD *)this + 1) != __PAIR128__(a4, (unsigned __int64)a3) )
    *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<ITaskWindow>::operator=((char *)this + 16, a3);
  *((_QWORD *)this + 3) = a4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7);
}

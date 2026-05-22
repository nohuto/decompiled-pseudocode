/*
 * XREFs of ??0GestureSession@@AEAA@XZ @ 0x1801B4E54
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801ACF1C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?Reset@GestureSession@@UEAAJXZ @ 0x1801B5B00 (-Reset@GestureSession@@UEAAJXZ.c)
 *     ??0FlickRecognizer@@QEAA@XZ @ 0x1801B5C68 (--0FlickRecognizer@@QEAA@XZ.c)
 *     ??0ClickRecognizer@@QEAA@XZ @ 0x1801B6780 (--0ClickRecognizer@@QEAA@XZ.c)
 *     ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x1801B7760 (-ResetConfigValues@DragRecognizer@@UEAAXXZ.c)
 *     ??0TwoFingerGestureRecognizer@@QEAA@XZ @ 0x1801B7AA4 (--0TwoFingerGestureRecognizer@@QEAA@XZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801B8018 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
GestureSession *__fastcall GestureSession::GestureSession(GestureSession *this)
{
  char *v2; // rbp

  *(_QWORD *)this = &GestureSession::`vftable';
  v2 = (char *)this + 32;
  ClickRecognizer::ClickRecognizer((GestureSession *)((char *)this + 32));
  *((_DWORD *)this + 44) = 112;
  *((_QWORD *)this + 21) = &DragRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  DragRecognizer::ResetConfigValues((GestureSession *)((char *)this + 168));
  FlickRecognizer::FlickRecognizer((GestureSession *)((char *)this + 248));
  *((_DWORD *)this + 106) = 128;
  *((_QWORD *)this + 52) = &PinchStretchRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 237) = PinchStretchRecognizer::s_minimumUpdateThreshold;
  TwoFingerGestureRecognizer::TwoFingerGestureRecognizer((GestureSession *)((char *)this + 480));
  *((_WORD *)this + 577) = -1;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 88) = v2;
  *((_QWORD *)this + 89) = (char *)this + 168;
  *((_QWORD *)this + 90) = (char *)this + 248;
  *((_QWORD *)this + 91) = (char *)this + 416;
  *((_QWORD *)this + 92) = (char *)this + 480;
  GestureSession::Reset(this);
  return this;
}

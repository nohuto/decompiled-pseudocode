/*
 * XREFs of ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180058510
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x180016ACC (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060A08 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=6
CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  `eh vector constructor iterator'(
    (char *)this + 200,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::DPIImages,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  return this;
}

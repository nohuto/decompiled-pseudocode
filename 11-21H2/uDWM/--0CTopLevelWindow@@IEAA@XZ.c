/*
 * XREFs of ??0CTopLevelWindow@@IEAA@XZ @ 0x180038F08
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18001B750 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180038E48 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this)
{
  __int64 v1; // rcx
  __int128 v2; // xmm0
  CTopLevelWindow *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CTopLevelWindow::`vftable';
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 252) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 496) = 0LL;
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_QWORD *)(v1 + 552) = 0LL;
  *(_QWORD *)(v1 + 560) = 0LL;
  *(_QWORD *)(v1 + 568) = 0LL;
  *(_QWORD *)(v1 + 576) = 0LL;
  *(_QWORD *)(v1 + 584) = 0LL;
  *(_QWORD *)(v1 + 592) = 0LL;
  *(_QWORD *)(v1 + 600) = 0LL;
  *(_DWORD *)(v1 + 608) = 0;
  *(_OWORD *)(v1 + 676) = 0LL;
  *(_DWORD *)(v1 + 712) = -1;
  *(_QWORD *)(v1 + 696) = 0LL;
  *(_QWORD *)(v1 + 704) = 0LL;
  *(_QWORD *)(v1 + 752) = 0LL;
  *(_QWORD *)(v1 + 760) = 0LL;
  *(_QWORD *)(v1 + 768) = 0LL;
  *(_QWORD *)(v1 + 776) = 0LL;
  *(_QWORD *)(v1 + 784) = 0LL;
  *(_QWORD *)(v1 + 792) = 0LL;
  *(_QWORD *)(v1 + 800) = 0LL;
  *(_OWORD *)(v1 + 808) = 0LL;
  *(_QWORD *)(v1 + 880) = 0LL;
  *(_BYTE *)(v1 + 248) |= 2u;
  *(_BYTE *)(v1 + 249) &= ~1u;
  *(_DWORD *)(v1 + 612) = -1;
  *(_DWORD *)(v1 + 616) = -1;
  *(_DWORD *)(v1 + 620) = -1;
  *(_DWORD *)(v1 + 624) = -1;
  v2 = *(_OWORD *)(v1 + 612);
  *(_DWORD *)(v1 + 728) = -1082130432;
  *(_DWORD *)(v1 + 716) = -1082130432;
  *(_DWORD *)(v1 + 720) = -1082130432;
  *(_DWORD *)(v1 + 724) = -1082130432;
  *(_DWORD *)(v1 + 744) = -1082130432;
  *(_DWORD *)(v1 + 732) = -1082130432;
  *(_DWORD *)(v1 + 736) = -1082130432;
  *(_DWORD *)(v1 + 740) = -1082130432;
  result = (CTopLevelWindow *)v1;
  *(_OWORD *)(v1 + 644) = v2;
  *(_QWORD *)(v1 + 824) = 0LL;
  *(_OWORD *)(v1 + 628) = v2;
  *(_QWORD *)(v1 + 832) = 0LL;
  *(_OWORD *)(v1 + 660) = v2;
  *(_QWORD *)(v1 + 840) = 0LL;
  *(_QWORD *)(v1 + 848) = 0LL;
  *(_WORD *)(v1 + 864) = 0;
  *(_BYTE *)(v1 + 888) = 0;
  return result;
}

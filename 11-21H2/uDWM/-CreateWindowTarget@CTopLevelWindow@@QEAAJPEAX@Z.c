/*
 * XREFs of ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E4884
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x180102D10 (-CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E4A44 (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6720 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1801075E4 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::CreateWindowTarget(CTopLevelWindow *this, void *a2)
{
  struct CVisual **v3; // rsi
  int inserted; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_QWORD *)this + 34) || !*((_QWORD *)this + 70) )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1871,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL);
    return v5;
  }
  v3 = (struct CVisual **)((char *)this + 840);
  if ( *((_QWORD *)this + 105) )
    return 0LL;
  inserted = CWindowTarget::CreateFromSharedHandle(a2, (struct CWindowTarget **)this + 105);
  v5 = inserted;
  if ( inserted >= 0 )
  {
    *((_BYTE *)*v3 + 92) &= ~8u;
    *((_DWORD *)*v3 + 50) = -2;
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 34) + 32LL),
                 *v3,
                 *((struct CVisual **)this + 70),
                 1u,
                 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v6 = 6272LL;
      goto LABEL_10;
    }
    inserted = CTopLevelWindow::UpdateWindowTarget(this);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v6 = 6274LL;
      goto LABEL_10;
    }
    return 0LL;
  }
  v6 = 6268LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)inserted);
  CTopLevelWindow::DestroyWindowTarget(this);
  return v5;
}

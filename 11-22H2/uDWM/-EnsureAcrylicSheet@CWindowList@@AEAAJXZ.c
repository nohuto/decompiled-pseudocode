/*
 * XREFs of ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18010A22C
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010922C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010AC80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18010B8B4 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2F60 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A42DC (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18010D5C4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::EnsureAcrylicSheet(CWindowList *this)
{
  struct CAcrylicSheet **v1; // rdi
  struct CVisual *v3; // rdx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct CAcrylicSheet **)((char *)this + 544);
  v3 = (struct CVisual *)*((_QWORD *)this + 68);
  if ( v3 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v3 + 3) + 32LL), v3);
    if ( v5 < 0 )
    {
      v6 = 3247LL;
      goto LABEL_4;
    }
  }
  else
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 68);
    LOBYTE(v4) = *((_BYTE *)this + 643);
    v5 = CAcrylicSheet::Create(*((CTopLevelWindow3D ***)this + 88), v4, v1);
    if ( v5 < 0 )
    {
      v6 = 3242LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v8 = CWindowList::ZOrderAcrylicSheet(this);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}

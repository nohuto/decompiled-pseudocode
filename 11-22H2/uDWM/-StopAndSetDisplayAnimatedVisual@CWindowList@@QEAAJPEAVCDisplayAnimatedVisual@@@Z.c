/*
 * XREFs of ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x180057A90
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StopAndSetDisplayAnimatedVisual(CWindowList *this, struct CDisplayAnimatedVisual *a2)
{
  struct CDisplayAnimatedVisual *v4; // rbx
  CBaseObject *v5; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CDisplayAnimatedVisual *)*((_QWORD *)this + 71);
  if ( v4 == a2 )
    return 0LL;
  *((_QWORD *)this + 71) = 0LL;
  if ( !v4 )
  {
LABEL_3:
    v5 = (CBaseObject *)*((_QWORD *)this + 71);
    *((_QWORD *)this + 71) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v5 )
      CBaseObject::Release(v5);
    return 0LL;
  }
  v7 = CDisplayAnimatedVisual::Stop(v4, 1LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CBaseObject::Release(v4);
    goto LABEL_3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FE0,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v7,
    v9);
  CBaseObject::Release(v4);
  return v8;
}

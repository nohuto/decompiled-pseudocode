/*
 * XREFs of ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18005CE10
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StopAndSetDisplayAnimatedVisual(CWindowList *this, struct CDisplayAnimatedVisual *a2)
{
  struct CDisplayAnimatedVisual *v4; // rbx
  CBaseObject *v5; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct CDisplayAnimatedVisual *)*((_QWORD *)this + 73);
  if ( v4 == a2 )
    return 0LL;
  *((_QWORD *)this + 73) = 0LL;
  if ( !v4 )
  {
LABEL_3:
    v5 = (CBaseObject *)*((_QWORD *)this + 73);
    *((_QWORD *)this + 73) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v5 )
      CBaseObject::Release(v5);
    return 0LL;
  }
  v7 = CDisplayAnimatedVisual::Stop((__int64 *)v4, 1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CBaseObject::Release(v4);
    goto LABEL_3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F88,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v7);
  CBaseObject::Release(v4);
  return v8;
}

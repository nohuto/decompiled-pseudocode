/*
 * XREFs of ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B8F0C
 * Callers:
 *     ??_ECDisplayDisconnectAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B8FE0 (--_ECDisplayDisconnectAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

void __fastcall CDisplayDisconnectAnimatedVisual::~CDisplayDisconnectAnimatedVisual(
        CDisplayDisconnectAnimatedVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplayDisconnectAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayDisconnectAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v7);
  v3 = *((_QWORD *)this + 56);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  v6 = *((_QWORD *)this + 55);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}

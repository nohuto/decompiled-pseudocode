/*
 * XREFs of ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x18005A84C
 * Callers:
 *     ??_GCDisplaySecondaryOnlyAnimatedVisual@@MEAAPEAXI@Z @ 0x18005A7F0 (--_GCDisplaySecondaryOnlyAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800628A4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CDisplaySecondaryOnlyAnimatedVisual::~CDisplaySecondaryOnlyAnimatedVisual(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // zf
  char v6; // al
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDisplaySecondaryOnlyAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayDisconnectAnimatedVisual::`vftable'{for `IAnimationListener'};
  v2 = CDisplayAnimatedVisual::Stop(this, 0LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v2,
      v7);
  v3 = *((_QWORD *)this + 56);
  if ( v3 )
  {
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
  }
  v4 = *((_QWORD *)this + 55);
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
}

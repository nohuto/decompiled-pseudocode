/*
 * XREFs of ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800392C8
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180023F14 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18001D5F8 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x180037CF0 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180039150 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetCaptionColor(
        CLegacyNonClientBackground *this,
        const struct _D3DCOLORVALUE *a2)
{
  CSolidColorLegacyMilBrushProxy **v2; // r14
  CBaseObject **v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CSolidColorLegacyMilBrushProxy **)((char *)this + 296);
  if ( !*((_QWORD *)this + 37) )
  {
    v6 = (CBaseObject **)((char *)this + 296);
    v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v2 = 0LL;
    v8 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(v7, v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v8,
        v10);
      return v9;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  if ( a2->a != *((float *)this + 85)
    || a2->r != *((float *)this + 82)
    || a2->g != *((float *)this + 83)
    || a2->b != *((float *)this + 84) )
  {
    CSolidColorLegacyMilBrushProxy::Update(*v2, 1.0, a2);
    *(struct _D3DCOLORVALUE *)((char *)this + 328) = *(const struct _D3DCOLORVALUE *)&a2->r;
  }
  return 0LL;
}

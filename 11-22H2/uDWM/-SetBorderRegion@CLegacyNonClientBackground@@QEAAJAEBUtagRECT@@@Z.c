/*
 * XREFs of ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x1800C6200
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001ACB4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18001D5F8 (-DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x1800388DC (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x1800D688C (-Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderRegion(
        CLegacyNonClientBackground *this,
        const struct tagRECT *a2)
{
  CRgnGeometryProxy **v2; // rbx
  CBaseObject **v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CRgnGeometryProxy **)((char *)this + 320);
  if ( !*((_QWORD *)this + 40) )
  {
    v5 = (CBaseObject **)((char *)this + 320);
    v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    *v2 = 0LL;
    v7 = CCompositor::CreateProxy<CRgnGeometryProxy>(v6, v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
  v10 = CRgnGeometryProxy::Update(*v2, a2, 1u);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (__int64)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}

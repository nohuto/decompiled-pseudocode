/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180098414
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180106BB0 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18004CAB8 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAccent::UpdateAccentBlurRect(CBaseObject **this, const struct tagRECT *a2)
{
  struct CBaseGeometryProxy *v3; // rbx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v7 = 0LL;
  if ( a2->right > a2->left && a2->bottom > a2->top )
  {
    v7 = 0LL;
    v4 = ResourceHelper::CreateRectangleGeometry(a2, &v7);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v4,
        v5);
      v3 = v7;
      goto LABEL_7;
    }
    v3 = v7;
  }
  CAccent::SetClipRegion(this, v3);
LABEL_7:
  if ( v3 )
    CBaseObject::Release(v3);
}

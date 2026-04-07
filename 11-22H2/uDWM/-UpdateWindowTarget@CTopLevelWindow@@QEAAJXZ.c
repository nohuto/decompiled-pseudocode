/*
 * XREFs of ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6E8C
 * Callers:
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E5660 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FF20 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x180105FFC (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowTarget(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  LONG v6; // edx
  int left; // eax
  LONG v8; // eax
  _DWORD *v9; // rax
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  struct CBaseGeometryProxy *v14; // rbx
  CBaseObject *v15; // rcx
  struct tagRECT v16; // [rsp+20h] [rbp-20h] BYREF
  struct _MARGINS v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct CBaseGeometryProxy *v19; // [rsp+50h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 103);
  if ( v2 )
  {
    v3 = CVisualProxy::SetSize(
           *(CVisualProxy **)(v2 + 16),
           (double)(*(_DWORD *)(*((_QWORD *)this + 94) + 56LL) - *(_DWORD *)(*((_QWORD *)this + 94) + 48LL)),
           (double)(*(_DWORD *)(*((_QWORD *)this + 94) + 60LL) - *(_DWORD *)(*((_QWORD *)this + 94) + 52LL)));
    if ( v3 < 0 )
    {
      v4 = 6273LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    if ( (*((_BYTE *)this + 248) & 4) != 0 )
    {
      v6 = *((_DWORD *)this + 171);
      left = *((_DWORD *)this + 32) - *((_DWORD *)this + 170);
      v16.left = *((_DWORD *)this + 169);
      v16.top = v6;
      if ( v16.left > left )
        left = v16.left;
      v16.right = left;
      v8 = *((_DWORD *)this + 33) - *((_DWORD *)this + 172);
      if ( v6 > v8 )
        v8 = v6;
    }
    else
    {
      v9 = (_DWORD *)*((_QWORD *)this + 94);
      v10 = v9[14] - v9[12];
      v11 = v9[15] - v9[13];
      CTopLevelWindow::GetFrameMargins(this, &v17);
      v16.left = v17.cxLeftWidth;
      v16.top = v17.cyTopHeight;
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v16.right = v12 - v17.cxRightWidth;
      v13 = 0;
      if ( v11 >= 0 )
        v13 = v11;
      v8 = v13 - v17.cyBottomHeight;
    }
    v19 = 0LL;
    v16.bottom = v8;
    v3 = ResourceHelper::CreateRectangleGeometry(&v16, &v19);
    if ( v3 < 0 )
    {
      v4 = 6305LL;
      goto LABEL_4;
    }
    v14 = v19;
    CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 103) + 16LL), v19);
    v15 = (CBaseObject *)*((_QWORD *)this + 104);
    if ( v15 )
      CBaseObject::Release(v15);
    *((_QWORD *)this + 104) = v14;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
  return 0LL;
}

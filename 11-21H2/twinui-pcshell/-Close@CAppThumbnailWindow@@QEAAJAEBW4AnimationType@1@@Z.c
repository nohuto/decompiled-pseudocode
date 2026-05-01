/*
 * XREFs of ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x18049BDDC
 * Callers:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x18049D468 (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x18049D5F8 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppThumbnailWindow::Close(
        CAppThumbnailWindow *this,
        const enum CAppThumbnailWindow::AnimationType *a2)
{
  char v3; // si
  int v4; // eax
  unsigned int v5; // edi
  bool v7; // [rsp+20h] [rbp-48h]
  _DWORD v8[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 1;
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v8[3] = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  if ( *(_DWORD *)a2 && (!*((_BYTE *)this + 168) || *((_BYTE *)this + 169)) )
  {
    v7 = *(_DWORD *)a2 == 3;
    v4 = CAppThumbnailWindow::SetRectAndCallback(
           this,
           v8,
           *((_QWORD *)this + 8),
           (unsigned int)(*(_DWORD *)a2 != 1) + 29,
           v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_8;
    }
  }
  else
  {
    CAppThumbnailWindow::Uninitialize(this);
  }
  v3 = 0;
  v5 = 0;
LABEL_8:
  if ( v3 )
    CAppThumbnailWindow::Uninitialize(this);
  return v5;
}

/*
 * XREFs of ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800E6B60
 * Callers:
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnIsInWindowMoveUpdated(CTopLevelWindow3D *this, char a2)
{
  int started; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 46) )
  {
    if ( a2 )
    {
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 10);
      if ( started < 0 )
      {
        v3 = 751LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v3,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)started);
        return (unsigned int)started;
      }
    }
    else
    {
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 11);
      if ( started < 0 )
      {
        v3 = 755LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}

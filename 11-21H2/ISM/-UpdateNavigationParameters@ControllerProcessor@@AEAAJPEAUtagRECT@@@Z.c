/*
 * XREFs of ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180179F08
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017A0C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180175DF0 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180176EC4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180178DCC (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180179EB4 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x18017A540 (-ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationParameters(ControllerProcessor *this, struct tagRECT *a2)
{
  const RECT *v4; // rcx
  POINT *CursorPosition; // rax
  POINT v7; // rdx
  struct tagPOINT v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v15; // [rsp+38h] [rbp+10h] BYREF

  if ( a2
    && (*((_DWORD *)this + 78) != a2->left
     || *((_DWORD *)this + 79) != a2->top
     || *((_DWORD *)this + 80) != a2->right
     || *((_DWORD *)this + 81) != a2->bottom) )
  {
    if ( !ControllerProcessor::ValidateBounds(a2) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3AD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    if ( *((_DWORD *)this + 70) )
    {
      if ( !PtInRect(v4, *(POINT *)((char *)this + 360)) )
        *((struct tagPOINT *)this + 45) = ControllerProcessor::AdjustPointToBounds(
                                            *(struct tagPOINT *)((char *)this + 360),
                                            a2);
    }
    else
    {
      CursorPosition = (POINT *)ControllerProcessor::GetCursorPosition(this, &v15);
      v7 = *CursorPosition;
      *((POINT *)this + 45) = *CursorPosition;
      if ( !PtInRect(a2, v7) )
      {
        v8 = ControllerProcessor::AdjustPointToBounds(*(struct tagPOINT *)((char *)this + 360), a2);
        v9 = ControllerProcessor::SetPointerPosition((struct tagPOINT *)this, v8, 1);
        if ( v9 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x3BC,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v9,
            v13);
      }
    }
    *(struct tagRECT *)((char *)this + 312) = *a2;
    v10 = (int)(float)((float)*((int *)this + 80) - 8.0);
    v11 = (int)(float)((float)*((int *)this + 79) + 8.0);
    v12 = (int)(float)((float)*((int *)this + 81) - 8.0);
    *((_DWORD *)this + 101) = (int)(float)((float)*((int *)this + 78) + 8.0);
    *((_DWORD *)this + 102) = v11;
    *((_DWORD *)this + 103) = v10;
    *((_DWORD *)this + 104) = v12;
    if ( *((_DWORD *)this + 315) )
      *((_BYTE *)this + 1264) = 1;
    else
      ControllerProcessor::UpdateManipulationInjectionRect(this);
  }
  return 0LL;
}

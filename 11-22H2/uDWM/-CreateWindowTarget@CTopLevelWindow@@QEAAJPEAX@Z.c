/*
 * XREFs of ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800E5660
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180036A6C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x180109B20 (-CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___ @ 0x1800E5348 (wil--details--lambda_call__lambda_85f3225b710f422e24871280d0146166___--_lambda_call__lambda_85f3.c)
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E57A0 (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6E8C (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x18010DA04 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::CreateWindowTarget(struct CWindowTarget **this, void *a2)
{
  unsigned __int64 *v3; // rsi
  int inserted; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int updated; // eax
  int v9; // [rsp+20h] [rbp-28h]
  struct CWindowTarget **v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( this[36] && this[74] )
  {
    v3 = (unsigned __int64 *)(this + 103);
    if ( !this[103] )
    {
      v10 = this;
      v11 = 1;
      inserted = CWindowTarget::CreateFromSharedHandle(a2, this + 103);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v6 = 6237LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted);
        wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___((__int64)&v10);
        return v5;
      }
      *(_BYTE *)(*v3 + 92) &= ~8u;
      *(_DWORD *)(*v3 + 200) = -2;
      inserted = VisualCollection::InsertRelative(
                   (struct CWindowTarget *)((char *)this[36] + 32),
                   *v3,
                   this[74],
                   1u,
                   v9);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v6 = 6241LL;
        goto LABEL_8;
      }
      updated = CTopLevelWindow::UpdateWindowTarget((CTopLevelWindow *)this);
      v5 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1863,
          (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)updated);
        CTopLevelWindow::DestroyWindowTarget((CTopLevelWindow *)this);
        return v5;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1852,
      (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}

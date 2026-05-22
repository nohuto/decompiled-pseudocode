/*
 * XREFs of ?EnsureDwmCursorController@DWMCursor@@QEAAJXZ @ 0x1801FB52C
 * Callers:
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801F9E44 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::EnsureDwmCursorController(DWMCursor *this)
{
  int CursorController; // ebx
  __int64 v2; // rdx
  struct IDwmCursorController **v4; // rbx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 13) != 2 )
  {
    CursorController = -2147024809;
    v2 = 90LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)CursorController);
    return (unsigned int)CursorController;
  }
  v4 = (struct IDwmCursorController **)((char *)this + 72);
  v5 = *((_QWORD *)this + 9);
  *v4 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CursorController = MilCompositionEngine_CreateCursorController(1uLL, v4);
  if ( CursorController < 0 )
  {
    v2 = 95LL;
    goto LABEL_3;
  }
  return 0LL;
}

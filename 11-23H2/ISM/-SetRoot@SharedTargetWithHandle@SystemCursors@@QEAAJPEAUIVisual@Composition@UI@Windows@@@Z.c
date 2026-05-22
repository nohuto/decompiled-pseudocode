/*
 * XREFs of ?SetRoot@SharedTargetWithHandle@SystemCursors@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x180175F28
 * Callers:
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x18010498C (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 *     ?ResetState@SystemCursor2@@QEAAJXZ @ 0x1801061F4 (-ResetState@SystemCursor2@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursors::SharedTargetWithHandle::SetRoot(
        SystemCursors::SharedTargetWithHandle *this,
        struct Windows::UI::Composition::IVisual *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::IVisual *))(**((_QWORD **)this + 1) + 32LL))(
         *((_QWORD *)this + 1),
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

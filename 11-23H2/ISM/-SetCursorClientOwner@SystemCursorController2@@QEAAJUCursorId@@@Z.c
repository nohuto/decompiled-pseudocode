/*
 * XREFs of ?SetCursorClientOwner@SystemCursorController2@@QEAAJUCursorId@@@Z @ 0x18010291C
 * Callers:
 *     ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801EED70 (-UpdateClientOwner@DWMCursor@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorController2::SetCursorClientOwner(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 80);
  if ( !v1 )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller2.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

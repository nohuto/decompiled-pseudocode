/*
 * XREFs of ?SetCursorClientOwner@SystemCursorController2@@QEAAJUCursorId@@@Z @ 0x1800E9CDC
 * Callers:
 *     ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801CFE20 (-UpdateClientOwner@DWMCursor@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcurs"
         "orcontroller2.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

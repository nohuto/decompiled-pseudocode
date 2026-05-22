/*
 * XREFs of ?SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z @ 0x1800EE770
 * Callers:
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800EDC6C (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::SetShape(
        SystemCursors::HardwareCursorVisual *this,
        void *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 5) + 64LL))(
         *((_QWORD *)this + 5),
         a2,
         a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

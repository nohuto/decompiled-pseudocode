/*
 * XREFs of ??$make_unique@VHardwareCursorVisual@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEA_K_N$0A@@std@@YA?AV?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@0@$$QEAPEAVWindowsCompositionGlobals@SystemCursors@@AEA_K$$QEA_N@Z @ 0x1800EB214
 * Callers:
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800EC4F0 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<SystemCursors::HardwareCursorVisual,SystemCursors::WindowsCompositionGlobals *,unsigned __int64 &,bool,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        char *a4)
{
  char v8; // r9
  __int64 v9; // r8
  _QWORD *v11; // [rsp+30h] [rbp+8h]

  v11 = operator new(0x40uLL);
  v8 = *a4;
  v9 = *a3;
  v11[1] = *a2;
  v11[2] = 0LL;
  v11[3] = 0LL;
  *((_WORD *)v11 + 16) = 257;
  *v11 = &SystemCursors::HardwareCursorVisual::`vftable';
  v11[5] = 0LL;
  v11[6] = v9;
  *((_BYTE *)v11 + 56) = v8;
  *a1 = v11;
  return a1;
}

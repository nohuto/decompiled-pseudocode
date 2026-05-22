/*
 * XREFs of ??$make_shared@VSharedTargetWithHandle@SystemCursors@@PEAVWindowsCompositionGlobals@2@AEAK@std@@YA?AV?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@0@$$QEAPEAVWindowsCompositionGlobals@SystemCursors@@AEAK@Z @ 0x180103D58
 * Callers:
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x18010498C (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<SystemCursors::SharedTargetWithHandle,SystemCursors::WindowsCompositionGlobals *,unsigned long &>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  int v6; // edx
  __int64 v7; // rcx
  _QWORD *result; // rax
  _DWORD *v9; // [rsp+40h] [rbp+8h]

  v9 = operator new(0x38uLL);
  *(_OWORD *)v9 = 0LL;
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj2<SystemCursors::SharedTargetWithHandle>::`vftable';
  v6 = *a3;
  v7 = *a2;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_QWORD *)v9 + 2) = v7;
  *((_QWORD *)v9 + 4) = 0LL;
  *((_QWORD *)v9 + 5) = -1LL;
  v9[12] = v6;
  a1[1] = v9;
  result = a1;
  *a1 = v9 + 4;
  return result;
}

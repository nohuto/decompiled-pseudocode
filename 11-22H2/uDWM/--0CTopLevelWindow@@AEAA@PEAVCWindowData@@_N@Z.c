/*
 * XREFs of ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z @ 0x180036CD4
 * Callers:
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18000740C (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180036C34 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this, struct CWindowData *a2, char a3)
{
  __int128 v4; // xmm0
  char v5; // cl
  char v6; // cl

  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 36) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  *((_DWORD *)this + 37) = 0x7FFFFFFF;
  *(_QWORD *)this = &CTopLevelWindow::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 50) = -2;
  *((_QWORD *)this + 5) = this;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *(_OWORD *)((char *)this + 692) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_DWORD *)this + 182) = -1;
  *((_DWORD *)this + 183) = -1082130432;
  *((_DWORD *)this + 184) = -1082130432;
  *((_DWORD *)this + 185) = -1082130432;
  *((_DWORD *)this + 186) = -1082130432;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *(_OWORD *)((char *)this + 792) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_DWORD *)this + 157) = -1;
  *((_DWORD *)this + 158) = -1;
  *((_DWORD *)this + 159) = -1;
  *((_DWORD *)this + 160) = -1;
  v4 = *(_OWORD *)((char *)this + 628);
  v5 = *((_BYTE *)this + 248);
  *((_QWORD *)this + 101) = 0LL;
  *(_OWORD *)((char *)this + 660) = v4;
  *((_QWORD *)this + 102) = 0LL;
  *(_OWORD *)((char *)this + 644) = v4;
  *((_QWORD *)this + 103) = 0LL;
  *(_OWORD *)((char *)this + 676) = v4;
  *((_QWORD *)this + 104) = 0LL;
  *((_DWORD *)this + 210) = 0;
  *((_BYTE *)this + 844) = 0;
  *((_BYTE *)this + 864) = 0;
  *((_BYTE *)this + 249) &= ~1u;
  v5 |= 2u;
  *((_BYTE *)this + 248) = v5;
  v6 = (8 * a3) | v5 & 0xF7;
  *((_QWORD *)this + 94) = a2;
  *((_QWORD *)this + 95) = *((_QWORD *)a2 + 5);
  *((_BYTE *)this + 248) = v6;
  if ( (v6 & 8) == 0 )
  {
    *((_QWORD *)a2 + 55) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
  }
  return this;
}

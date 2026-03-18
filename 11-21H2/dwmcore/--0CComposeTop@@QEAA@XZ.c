/*
 * XREFs of ??0CComposeTop@@QEAA@XZ @ 0x180017098
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180016F54 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

CComposeTop *__fastcall CComposeTop::CComposeTop(CComposeTop *this)
{
  char v1; // al
  char v2; // al
  CComposeTop *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 1065353216LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 1065353216LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 8) = 1065353216LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 1065353216;
  v1 = *((_BYTE *)this + 89);
  *((_BYTE *)this + 88) = 85;
  *((_BYTE *)this + 89) = v1 & 0xC0 | 0x17;
  *(_QWORD *)((char *)this + 92) = 1065353216LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = 1065353216LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *(_QWORD *)((char *)this + 132) = 1065353216LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 1065353216;
  v2 = *((_BYTE *)this + 157) & 0xD7;
  *((_BYTE *)this + 156) = 85;
  *((_BYTE *)this + 157) = v2 | 0x17;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  return result;
}

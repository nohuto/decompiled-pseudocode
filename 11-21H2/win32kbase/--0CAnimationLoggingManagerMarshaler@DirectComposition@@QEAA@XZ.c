/*
 * XREFs of ??0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00B2E80
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::CAnimationLoggingManagerMarshaler(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  DirectComposition::CAnimationLoggingManagerMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 72) = 1;
  *((_QWORD *)this + 12) = 16LL;
  *((_QWORD *)this + 18) = 16LL;
  result = this;
  *((_BYTE *)this + 120) = 1;
  *((_BYTE *)this + 168) = 1;
  *((_QWORD *)this + 24) = 24LL;
  *((_BYTE *)this + 216) = 1;
  *((_QWORD *)this + 30) = 8LL;
  *((_BYTE *)this + 264) &= 0xFCu;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 67) = 1065353216;
  return result;
}

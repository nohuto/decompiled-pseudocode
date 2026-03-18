/*
 * XREFs of ??0CAnimationLoggingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00ADC8C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CAnimationLoggingManagerMarshaler *__fastcall DirectComposition::CAnimationLoggingManagerMarshaler::CAnimationLoggingManagerMarshaler(
        DirectComposition::CAnimationLoggingManagerMarshaler *this)
{
  DirectComposition::CAnimationLoggingManagerMarshaler *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 4LL);
  *(_QWORD *)this = &DirectComposition::CAnimationLoggingManagerMarshaler::`vftable';
  *((_QWORD *)this + 11) = 16LL;
  *((_BYTE *)this + 64) = 1;
  *((_QWORD *)this + 17) = 16LL;
  result = this;
  *((_BYTE *)this + 112) = 1;
  *((_BYTE *)this + 160) = 1;
  *((_QWORD *)this + 23) = 24LL;
  *((_BYTE *)this + 208) = 1;
  *((_QWORD *)this + 29) = 8LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_BYTE *)this + 256) &= 0xFCu;
  *((_DWORD *)this + 65) = 1065353216;
  return result;
}

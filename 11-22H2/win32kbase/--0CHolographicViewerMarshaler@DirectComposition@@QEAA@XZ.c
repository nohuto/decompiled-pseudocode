/*
 * XREFs of ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B558
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CHolographicViewerMarshaler *__fastcall DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(
        DirectComposition::CHolographicViewerMarshaler *this)
{
  DirectComposition::CHolographicViewerMarshaler *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 81LL);
  *(_QWORD *)this = &DirectComposition::CHolographicViewerMarshaler::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}

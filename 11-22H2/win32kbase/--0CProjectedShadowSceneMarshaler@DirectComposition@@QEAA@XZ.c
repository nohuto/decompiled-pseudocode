/*
 * XREFs of ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000E638
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CProjectedShadowSceneMarshaler *__fastcall DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  DirectComposition::CProjectedShadowSceneMarshaler *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 133LL);
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 28) = 1065353216;
  result = this;
  *((_DWORD *)this + 27) = 2139095039;
  *((_DWORD *)this + 31) = -1082130432;
  return result;
}

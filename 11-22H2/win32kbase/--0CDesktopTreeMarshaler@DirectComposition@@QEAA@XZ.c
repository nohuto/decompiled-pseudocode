/*
 * XREFs of ??0CDesktopTreeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00C3F48
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CDesktopTreeMarshaler *__fastcall DirectComposition::CDesktopTreeMarshaler::CDesktopTreeMarshaler(
        DirectComposition::CDesktopTreeMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 53LL);
  *(_QWORD *)this = &DirectComposition::CDesktopTreeMarshaler::`vftable';
  return this;
}

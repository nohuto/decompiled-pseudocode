/*
 * XREFs of ??0CScalarMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B7CC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00A7EC4 (--0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CScalarMarshaler *__fastcall DirectComposition::CScalarMarshaler::CScalarMarshaler(
        DirectComposition::CScalarMarshaler *this)
{
  DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(this, 151LL);
  *(_QWORD *)this = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  return this;
}

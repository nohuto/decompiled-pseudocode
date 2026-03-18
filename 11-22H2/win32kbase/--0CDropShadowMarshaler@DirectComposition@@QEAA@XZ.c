/*
 * XREFs of ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000CCF8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CDropShadowMarshaler *__fastcall DirectComposition::CDropShadowMarshaler::CDropShadowMarshaler(
        DirectComposition::CDropShadowMarshaler *this)
{
  DirectComposition::CDropShadowMarshaler *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 55LL);
  *((_DWORD *)this + 29) = 0;
  *(_QWORD *)this = &DirectComposition::CDropShadowMarshaler::`vftable';
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 23) = 1065353216;
  result = this;
  *((_DWORD *)this + 24) = 1091567616;
  return result;
}

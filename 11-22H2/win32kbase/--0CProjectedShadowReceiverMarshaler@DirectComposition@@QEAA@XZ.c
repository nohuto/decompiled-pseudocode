/*
 * XREFs of ??0CProjectedShadowReceiverMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000F178
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CProjectedShadowReceiverMarshaler *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::CProjectedShadowReceiverMarshaler(
        DirectComposition::CProjectedShadowReceiverMarshaler *this)
{
  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 132LL);
  *((_DWORD *)this + 20) = 1;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  return this;
}

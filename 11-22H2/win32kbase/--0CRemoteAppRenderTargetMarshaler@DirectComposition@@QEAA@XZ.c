/*
 * XREFs of ??0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B758
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CRemoteAppRenderTargetMarshaler *__fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::CRemoteAppRenderTargetMarshaler(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 143LL);
  *((_DWORD *)this + 14) = 3;
  *(_QWORD *)this = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
  return this;
}

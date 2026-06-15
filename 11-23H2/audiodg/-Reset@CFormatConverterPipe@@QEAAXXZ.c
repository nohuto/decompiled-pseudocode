/*
 * XREFs of ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140006F0C
 * Callers:
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140007160 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14006829C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CFormatConverterPipe::Reset(CPipeInstance **this)
{
  CPipeInstance *v2; // rcx

  ATL::CAutoPtr<CPipeInstance>::Free(this);
  v2 = this[1];
  this[1] = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  *((_BYTE *)this + 24) = 0;
}

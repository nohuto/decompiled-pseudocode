/*
 * XREFs of ?Reset@CProcessingModeParameters@@QEAAXXZ @ 0x180109B14
 * Callers:
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800108F0 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z @ 0x180109D90 (-SetProcessingModeParameters@CBaseStreamGroupProxy@@UEAAJPEAVCProcessingModeParameters@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

void __fastcall CProcessingModeParameters::Reset(void **this)
{
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 3,
    0LL);
  this[1] = *this;
}

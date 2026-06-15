/*
 * XREFs of wil::details::lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___::_lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___ @ 0x1801563C8
 * Callers:
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180063440 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     _lambda_5fa69d74b67413ee0ef50ee94853c5ba_::operator() @ 0x180156408 (_lambda_5fa69d74b67413ee0ef50ee94853c5ba_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___::_lambda_call__lambda_5fa69d74b67413ee0ef50ee94853c5ba___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    return lambda_5fa69d74b67413ee0ef50ee94853c5ba_::operator()(a1);
  }
  return result;
}

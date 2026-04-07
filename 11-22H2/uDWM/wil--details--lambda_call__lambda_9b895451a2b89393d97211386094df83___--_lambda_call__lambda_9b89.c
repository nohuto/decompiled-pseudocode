/*
 * XREFs of wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___ @ 0x18010648C
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18002C904 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderBrush_::_1_::dtor$8 @ 0x180067908 (_CWindowBorder--CCachedBorderBrush--CreateBorderBrush_--_1_--dtor$8.c)
 * Callees:
 *     _lambda_9b895451a2b89393d97211386094df83_::operator() @ 0x180054BFC (_lambda_9b895451a2b89393d97211386094df83_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_9b895451a2b89393d97211386094df83___::_lambda_call__lambda_9b895451a2b89393d97211386094df83___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_9b895451a2b89393d97211386094df83_::operator()((__int64 **)a1);
  }
  return result;
}

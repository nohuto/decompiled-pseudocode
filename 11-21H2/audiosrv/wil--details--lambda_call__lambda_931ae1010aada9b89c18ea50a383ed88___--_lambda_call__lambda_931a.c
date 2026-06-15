/*
 * XREFs of wil::details::lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___::_lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___ @ 0x180144218
 * Callers:
 *     _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$0 @ 0x18014630F (_CEndpointCharacteristics--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___::_lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = 2LL;
    if ( **(_DWORD **)(a1 + 8) != 3 )
      v1 = 0LL;
    return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)a1, v1);
  }
  return result;
}

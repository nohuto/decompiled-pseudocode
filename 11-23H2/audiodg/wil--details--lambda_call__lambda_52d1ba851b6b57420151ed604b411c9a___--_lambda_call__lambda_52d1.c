/*
 * XREFs of wil::details::lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___::_lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___ @ 0x14004F0F0
 * Callers:
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F59C (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     _CBridgeToApoAuxInput::RuntimeClassInitialize_::_1_::dtor$1 @ 0x14004F9A8 (_CBridgeToApoAuxInput--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_9ea61389800d10a92a31feda1ef8f987_::operator() @ 0x14002D974 (_lambda_9ea61389800d10a92a31feda1ef8f987_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___::_lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_9ea61389800d10a92a31feda1ef8f987_::operator()((__int64 *)a1);
  }
  return result;
}
